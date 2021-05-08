macro_rules! struct_wrapper {
    (struct $name:ident {
        $($field:ident: $t:ty,)*
    }) => {
        #[repr(C)]
        #[derive(Debug)]
        pub struct $name {
            $(pub $field: $t),*
        }
    }
}

struct_wrapper!(
    struct ANSI_STRING {
        Length: u16,
        MaximumLength: u16,
        Buffer: *const u8,
    }
);

use super::binding::Windows::Win32::Kernel::LUID;
use super::binding::Windows::Win32::Security::{SID, UNICODE_STRING};
use super::binding::Windows::Win32::SystemServices::HANDLE;

struct_wrapper!(
    struct KIWI_MSV1_0_PRIMARY_CREDENTIALS {
        next: *const KIWI_MSV1_0_PRIMARY_CREDENTIALS,
        Primary: ANSI_STRING,
        Credentials: UNICODE_STRING,
    }
);

struct_wrapper!(
    struct KIWI_MSV1_0_CREDENTIALS {
        next: *const KIWI_MSV1_0_CREDENTIALS,
        AuthenticationPackageId: u32,
        PrimaryCredentials: *const KIWI_MSV1_0_PRIMARY_CREDENTIALS,
    }
);

struct_wrapper!(
    struct KIWI_MSV1_0_LIST_51 {
        Flink: *const KIWI_MSV1_0_LIST_51,
        Blink: *const KIWI_MSV1_0_LIST_51,
        LocallyUniqueIdentifier: LUID,
        UserName: UNICODE_STRING,
        domain: UNICODE_STRING,
        unk0: *const (),
        unk1: *const (),
        pSid: *const SID,
        LogonType: u32,
        Session: u32,
        LogonTime: i64,
        LogonServer: UNICODE_STRING,
        Credentials: *const KIWI_MSV1_0_CREDENTIALS,
        unk19: u32,
        unk20: *const (),
        unk21: *const (),
        unk22: *const (),
        unk23: u32,
        CredentialManager: *const (),
    }
);

struct_wrapper!(
    struct KIWI_MSV1_0_LIST_52 {
        Flink: *const KIWI_MSV1_0_LIST_52,
        Blink: *const KIWI_MSV1_0_LIST_52,
        LocallyUniqueIdentifier: LUID,
        UserName: UNICODE_STRING,
        domain: UNICODE_STRING,
        unk0: *const (),
        unk1: *const (),
        pSid: *const SID,
        LogonType: u32,
        Session: u32,
        LogonTime: i64,
        LogonServer: UNICODE_STRING,
        Credentials: *const KIWI_MSV1_0_CREDENTIALS,
        unk19: u32,
        unk20: *const (),
        unk21: *const (),
        unk22: u32,
        CredentialManager: *const (),
    }
);

struct_wrapper!(
    struct KIWI_MSV1_0_LIST_60 {
        Flink: *const KIWI_MSV1_0_LIST_60,
        Blink: *const KIWI_MSV1_0_LIST_60,
        unk0: *const (),
        unk1: u32,
        unk2: *const (),
        unk3: u32,
        unk4: u32,
        unk5: u32,
        hSemaphore6: HANDLE,
        unk7: *const (),
        hSemaphore8: HANDLE,
        unk9: *const (),
        unk10: *const (),
        unk11: u32,
        unk12: u32,
        unk13: *const (),
        LocallyUniqueIdentifier: LUID,
        SecondaryLocallyUniqueIdentifier: LUID,
        UserName: UNICODE_STRING,
        domain: UNICODE_STRING,
        unk14: *const (),
        unk15: *const (),
        pSid: *const SID,
        LogonType: u32,
        Session: u32,
        LogonTime: i64,
        LogonServer: UNICODE_STRING,
        Credentials: *const KIWI_MSV1_0_CREDENTIALS,
        unk19: u32,
        unk20: *const (),
        unk21: *const (),
        unk22: *const (),
        unk23: u32,
        CredentialManager: *const (),
    }
);

struct_wrapper!(
    struct KIWI_MSV1_0_LIST_61 {
        Flink: *const KIWI_MSV1_0_LIST_61,
        Blink: *const KIWI_MSV1_0_LIST_61,
        unk0: *const (),
        unk1: u32,
        unk2: *const (),
        unk3: u32,
        unk4: u32,
        unk5: u32,
        hSemaphore6: HANDLE,
        unk7: *const (),
        hSemaphore8: HANDLE,
        unk9: *const (),
        unk10: *const (),
        unk11: u32,
        unk12: u32,
        unk13: *const (),
        LocallyUniqueIdentifier: LUID,
        SecondaryLocallyUniqueIdentifier: LUID,
        UserName: UNICODE_STRING,
        domain: UNICODE_STRING,
        unk14: *const (),
        unk15: *const (),
        pSid: *const SID,
        LogonType: u32,
        Session: u32,
        LogonTime: i64,
        LogonServer: UNICODE_STRING,
        Credentials: *const KIWI_MSV1_0_CREDENTIALS,
        unk19: *const (),
        unk20: *const (),
        unk21: *const (),
        unk22: u32,
        CredentialManager: *const (),
    }
);

struct_wrapper!(
    struct KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ {
        Flink: *const KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ,
        Blink: *const KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ,
        unk0: *const (),
        unk1: u32,
        unk2: *const (),
        unk3: u32,
        unk4: u32,
        unk5: u32,
        hSemaphore6: HANDLE,
        unk7: *const (),
        hSemaphore8: HANDLE,
        unk9: *const (),
        unk10: *const (),
        unk11: u32,
        unk12: u32,
        unk13: *const (),
        LocallyUniqueIdentifier: LUID,
        SecondaryLocallyUniqueIdentifier: LUID,
        waza: [u8; 12],
        UserName: UNICODE_STRING,
        domain: UNICODE_STRING,
        unk14: *const (),
        unk15: *const (),
        pSid: *const SID,
        LogonType: u32,
        Session: u32,
        LogonTime: i64,
        LogonServer: UNICODE_STRING,
        Credentials: *const KIWI_MSV1_0_CREDENTIALS,
        unk19: *const (),
        unk20: *const (),
        unk21: *const (),
        unk22: u32,
        CredentialManager: *const (),
    }
);

struct_wrapper!(
    struct KIWI_MSV1_0_LIST_62 {
        Flink: *const KIWI_MSV1_0_LIST_62,
        Blink: *const KIWI_MSV1_0_LIST_62,
        unk0: *const (),
        unk1: u32,
        unk2: *const (),
        unk3: u32,
        unk4: u32,
        unk5: u32,
        hSemaphore6: HANDLE,
        unk7: *const (),
        hSemaphore8: HANDLE,
        unk9: *const (),
        unk10: *const (),
        unk11: u32,
        unk12: u32,
        unk13: *const (),
        LocallyUniqueIdentifier: LUID,
        SecondaryLocallyUniqueIdentifier: LUID,
        UserName: UNICODE_STRING,
        domain: UNICODE_STRING,
        unk14: *const (),
        unk15: *const (),
        Type: UNICODE_STRING,
        pSid: *const SID,
        LogonType: u32,
        unk18: *const (),
        Session: u32,
        LogonTime: i64, // autoalign x86
        LogonServer: UNICODE_STRING,
        Credentials: *const KIWI_MSV1_0_CREDENTIALS,
        unk19: *const (),
        unk20: *const (),
        unk21: *const (),
        unk22: u32,
        unk23: u32,
        unk24: u32,
        unk25: u32,
        unk26: u32,
        unk27: *const (),
        unk28: *const (),
        unk29: *const (),
        CredentialManager: *const (),
    }
);

struct_wrapper!(
    struct KIWI_MSV1_0_LIST_63 {
        Flink: *const KIWI_MSV1_0_LIST_63,
        Blink: *const KIWI_MSV1_0_LIST_63,
        unk0: *const (),
        unk1: u32,
        unk2: *const (),
        unk3: u32,
        unk4: u32,
        unk5: u32,
        hSemaphore6: HANDLE,
        unk7: *const (),
        hSemaphore8: HANDLE,
        unk9: *const (),
        unk10: *const (),
        unk11: u32,
        unk12: u32,
        unk13: *const (),
        LocallyUniqueIdentifier: LUID,
        SecondaryLocallyUniqueIdentifier: LUID,
        waza: [u8; 12],
        UserName: UNICODE_STRING,
        domain: UNICODE_STRING,
        unk14: *const (),
        unk15: *const (),
        Type: UNICODE_STRING,
        pSid: *const SID,
        LogonType: u32,
        unk18: *const (),
        Session: u32,
        LogonTime: i64,
        LogonServer: UNICODE_STRING,
        Credentials: *const KIWI_MSV1_0_CREDENTIALS,
        unk19: *const (),
        unk20: *const (),
        unk21: *const (),
        unk22: u32,
        unk23: u32,
        unk24: u32,
        unk25: u32,
        unk26: u32,
        unk27: *const (),
        unk28: *const (),
        unk29: *const (),
        CredentialManager: *const (),
    }
);

#[derive(Debug, Copy, Clone)]
pub struct MsvLstHelper {
    pub size: usize,
    pub offsetToLuid: usize,
    pub offsetToLogonType: usize,
    pub offsetToSession: usize,
    pub offsetToUsername: usize,
    pub offsetToDomain: usize,
    pub offsetToCredentials: usize,
    pub offsetToPSid: usize,
    pub offsetToCredentialManager: usize,
    pub offsetToLogonTime: usize,
    pub offsetToLogonServer: usize,
}

use std::{mem, usize};

pub(crate) fn select_msv_lst_helper(index: usize) -> MsvLstHelper {
    let MSV_HELPERS = [
        MsvLstHelper {
            size: mem::size_of::<KIWI_MSV1_0_LIST_51>(),
            offsetToLuid: memoffset::offset_of!(KIWI_MSV1_0_LIST_51, LocallyUniqueIdentifier),
            offsetToLogonType: memoffset::offset_of!(KIWI_MSV1_0_LIST_51, LogonType),
            offsetToSession: memoffset::offset_of!(KIWI_MSV1_0_LIST_51, Session),
            offsetToUsername: memoffset::offset_of!(KIWI_MSV1_0_LIST_51, UserName),
            offsetToDomain: memoffset::offset_of!(KIWI_MSV1_0_LIST_51, domain),
            offsetToCredentials: memoffset::offset_of!(KIWI_MSV1_0_LIST_51, Credentials),
            offsetToPSid: memoffset::offset_of!(KIWI_MSV1_0_LIST_51, pSid),
            offsetToCredentialManager: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_51,
                CredentialManager
            ),
            offsetToLogonTime: memoffset::offset_of!(KIWI_MSV1_0_LIST_51, LogonTime),
            offsetToLogonServer: memoffset::offset_of!(KIWI_MSV1_0_LIST_51, LogonServer),
        },
        MsvLstHelper {
            size: mem::size_of::<KIWI_MSV1_0_LIST_52>(),
            offsetToLuid: memoffset::offset_of!(KIWI_MSV1_0_LIST_52, LocallyUniqueIdentifier),
            offsetToLogonType: memoffset::offset_of!(KIWI_MSV1_0_LIST_52, LogonType),
            offsetToSession: memoffset::offset_of!(KIWI_MSV1_0_LIST_52, Session),
            offsetToUsername: memoffset::offset_of!(KIWI_MSV1_0_LIST_52, UserName),
            offsetToDomain: memoffset::offset_of!(KIWI_MSV1_0_LIST_52, domain),
            offsetToCredentials: memoffset::offset_of!(KIWI_MSV1_0_LIST_52, Credentials),
            offsetToPSid: memoffset::offset_of!(KIWI_MSV1_0_LIST_52, pSid),
            offsetToCredentialManager: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_52,
                CredentialManager
            ),
            offsetToLogonTime: memoffset::offset_of!(KIWI_MSV1_0_LIST_52, LogonTime),
            offsetToLogonServer: memoffset::offset_of!(KIWI_MSV1_0_LIST_52, LogonServer),
        },
        MsvLstHelper {
            size: mem::size_of::<KIWI_MSV1_0_LIST_60>(),
            offsetToLuid: memoffset::offset_of!(KIWI_MSV1_0_LIST_60, LocallyUniqueIdentifier),
            offsetToLogonType: memoffset::offset_of!(KIWI_MSV1_0_LIST_60, LogonType),
            offsetToSession: memoffset::offset_of!(KIWI_MSV1_0_LIST_60, Session),
            offsetToUsername: memoffset::offset_of!(KIWI_MSV1_0_LIST_60, UserName),
            offsetToDomain: memoffset::offset_of!(KIWI_MSV1_0_LIST_60, domain),
            offsetToCredentials: memoffset::offset_of!(KIWI_MSV1_0_LIST_60, Credentials),
            offsetToPSid: memoffset::offset_of!(KIWI_MSV1_0_LIST_60, pSid),
            offsetToCredentialManager: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_60,
                CredentialManager
            ),
            offsetToLogonTime: memoffset::offset_of!(KIWI_MSV1_0_LIST_60, LogonTime),
            offsetToLogonServer: memoffset::offset_of!(KIWI_MSV1_0_LIST_60, LogonServer),
        },
        MsvLstHelper {
            size: mem::size_of::<KIWI_MSV1_0_LIST_61>(),
            offsetToLuid: memoffset::offset_of!(KIWI_MSV1_0_LIST_61, LocallyUniqueIdentifier),
            offsetToLogonType: memoffset::offset_of!(KIWI_MSV1_0_LIST_61, LogonType),
            offsetToSession: memoffset::offset_of!(KIWI_MSV1_0_LIST_61, Session),
            offsetToUsername: memoffset::offset_of!(KIWI_MSV1_0_LIST_61, UserName),
            offsetToDomain: memoffset::offset_of!(KIWI_MSV1_0_LIST_61, domain),
            offsetToCredentials: memoffset::offset_of!(KIWI_MSV1_0_LIST_61, Credentials),
            offsetToPSid: memoffset::offset_of!(KIWI_MSV1_0_LIST_61, pSid),
            offsetToCredentialManager: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_61,
                CredentialManager
            ),
            offsetToLogonTime: memoffset::offset_of!(KIWI_MSV1_0_LIST_61, LogonTime),
            offsetToLogonServer: memoffset::offset_of!(KIWI_MSV1_0_LIST_61, LogonServer),
        },
        MsvLstHelper {
            size: mem::size_of::<KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ>(),
            offsetToLuid: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ,
                LocallyUniqueIdentifier
            ),
            offsetToLogonType: memoffset::offset_of!(KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ, LogonType),
            offsetToSession: memoffset::offset_of!(KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ, Session),
            offsetToUsername: memoffset::offset_of!(KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ, UserName),
            offsetToDomain: memoffset::offset_of!(KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ, domain),
            offsetToCredentials: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ,
                Credentials
            ),
            offsetToPSid: memoffset::offset_of!(KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ, pSid),
            offsetToCredentialManager: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ,
                CredentialManager
            ),
            offsetToLogonTime: memoffset::offset_of!(KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ, LogonTime),
            offsetToLogonServer: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ,
                LogonServer
            ),
        },
        MsvLstHelper {
            size: mem::size_of::<KIWI_MSV1_0_LIST_62>(),
            offsetToLuid: memoffset::offset_of!(KIWI_MSV1_0_LIST_62, LocallyUniqueIdentifier),
            offsetToLogonType: memoffset::offset_of!(KIWI_MSV1_0_LIST_62, LogonType),
            offsetToSession: memoffset::offset_of!(KIWI_MSV1_0_LIST_62, Session),
            offsetToUsername: memoffset::offset_of!(KIWI_MSV1_0_LIST_62, UserName),
            offsetToDomain: memoffset::offset_of!(KIWI_MSV1_0_LIST_62, domain),
            offsetToCredentials: memoffset::offset_of!(KIWI_MSV1_0_LIST_62, Credentials),
            offsetToPSid: memoffset::offset_of!(KIWI_MSV1_0_LIST_62, pSid),
            offsetToCredentialManager: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_62,
                CredentialManager
            ),
            offsetToLogonTime: memoffset::offset_of!(KIWI_MSV1_0_LIST_62, LogonTime),
            offsetToLogonServer: memoffset::offset_of!(KIWI_MSV1_0_LIST_62, LogonServer),
        },
        MsvLstHelper {
            size: mem::size_of::<KIWI_MSV1_0_LIST_63>(),
            offsetToLuid: memoffset::offset_of!(KIWI_MSV1_0_LIST_63, LocallyUniqueIdentifier),
            offsetToLogonType: memoffset::offset_of!(KIWI_MSV1_0_LIST_63, LogonType),
            offsetToSession: memoffset::offset_of!(KIWI_MSV1_0_LIST_63, Session),
            offsetToUsername: memoffset::offset_of!(KIWI_MSV1_0_LIST_63, UserName),
            offsetToDomain: memoffset::offset_of!(KIWI_MSV1_0_LIST_63, domain),
            offsetToCredentials: memoffset::offset_of!(KIWI_MSV1_0_LIST_63, Credentials),
            offsetToPSid: memoffset::offset_of!(KIWI_MSV1_0_LIST_63, pSid),
            offsetToCredentialManager: memoffset::offset_of!(
                KIWI_MSV1_0_LIST_63,
                CredentialManager
            ),
            offsetToLogonTime: memoffset::offset_of!(KIWI_MSV1_0_LIST_63, LogonTime),
            offsetToLogonServer: memoffset::offset_of!(KIWI_MSV1_0_LIST_63, LogonServer),
        },
    ];

    MSV_HELPERS[index]
}

pub(crate) const LM_NTLM_HASH_LENGTH: usize = 16;
pub(crate) const SHA_DIGEST_LENGTH: usize = 20;

struct_wrapper!(
    struct MSV1_0_PRIMARY_CREDENTIAL {
        LogonDomainName: UNICODE_STRING,
        UserName: UNICODE_STRING,
        NtOwfPassword: [u8; LM_NTLM_HASH_LENGTH],
        LmOwfPassword: [u8; LM_NTLM_HASH_LENGTH],
        ShaOwPassword: [u8; SHA_DIGEST_LENGTH],
        isNtOwfPassword: u8,
        isLmOwfPassword: u8,
        isShaOwPassword: u8,
    }
);

struct_wrapper!(
    struct MSV1_0_PRIMARY_CREDENTIAL_10_OLD {
        LogonDomainName: UNICODE_STRING,
        UserName: UNICODE_STRING,
        isIso: u8,
        isNtOwfPassword: u8,
        isLmOwfPassword: u8,
        isShaOwPassword: u8,
        align0: u8,
        align1: u8,
        NtOwfPassword: [u8; LM_NTLM_HASH_LENGTH],
        LmOwfPassword: [u8; LM_NTLM_HASH_LENGTH],
        ShaOwPassword: [u8; SHA_DIGEST_LENGTH],
    }
);

struct_wrapper!(
    struct MSV1_0_PRIMARY_CREDENTIAL_10 {
        LogonDomainName: UNICODE_STRING,
        UserName: UNICODE_STRING,
        isIso: u8,
        isNtOwfPassword: u8,
        isLmOwfPassword: u8,
        isShaOwPassword: u8,
        align0: u8,
        align1: u8,
        align2: u8,
        align3: u8,
        NtOwfPassword: [u8; LM_NTLM_HASH_LENGTH],
        LmOwfPassword: [u8; LM_NTLM_HASH_LENGTH],
        ShaOwPassword: [u8; SHA_DIGEST_LENGTH],
    }
);

struct_wrapper!(
    struct MSV1_0_PRIMARY_CREDENTIAL_10_1607 {
        LogonDomainName: UNICODE_STRING,
        UserName: UNICODE_STRING,
        pNtlmCredIsoInProc: *const (),
        isIso: u8,
        isNtOwfPassword: u8,
        isLmOwfPassword: u8,
        isShaOwPassword: u8,
        isDPAPIProtected: u8,
        align0: u8,
        align1: u8,
        align2: u8,
        // #pragma pack(push, 2)
        unkD: u32,
        isoSize: u16,
        DPAPIProtected: [u8; LM_NTLM_HASH_LENGTH],
        // #pragma pack(pop)
        align3: u32,
        NtOwfPassword: [u8; LM_NTLM_HASH_LENGTH],
        LmOwfPassword: [u8; LM_NTLM_HASH_LENGTH],
        ShaOwPassword: [u8; SHA_DIGEST_LENGTH],
    }
);

#[derive(Debug, Copy, Clone)]
pub struct PrimaryHelper {
    pub offsetToLogonDomain: usize,
    pub offsetToUserName: usize,
    pub offsetToisIso: usize,
    pub offsetToisNtOwfPassword: usize,
    pub offsetToisLmOwfPassword: usize,
    pub offsetToisShaOwPassword: usize,
    pub offsetToisDPAPIProtected: usize,
    pub offsetToNtOwfPassword: usize,
    pub offsetToLmOwfPassword: usize,
    pub offsetToShaOwPassword: usize,
    pub offsetToDPAPIProtected: usize,
    pub offsetToIso: usize,
}

pub(crate) fn select_primary_helper(index: usize) -> PrimaryHelper {
    let PRIMARY_HELPERS = [
        PrimaryHelper {
            offsetToLogonDomain: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL, LogonDomainName),
            offsetToUserName: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL, UserName),
            offsetToisIso: 0,
            offsetToisNtOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL,
                isNtOwfPassword
            ),
            offsetToisLmOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL,
                isLmOwfPassword
            ),
            offsetToisShaOwPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL,
                isShaOwPassword
            ),
            offsetToisDPAPIProtected: 0,
            offsetToNtOwfPassword: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL, NtOwfPassword),
            offsetToLmOwfPassword: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL, LmOwfPassword),
            offsetToShaOwPassword: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL, ShaOwPassword),
            offsetToDPAPIProtected: 0,
            offsetToIso: 0,
        },
        PrimaryHelper {
            offsetToLogonDomain: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_OLD,
                LogonDomainName
            ),
            offsetToUserName: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL_10_OLD, UserName),
            offsetToisIso: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL_10_OLD, isIso),
            offsetToisNtOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_OLD,
                isNtOwfPassword
            ),
            offsetToisLmOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_OLD,
                isLmOwfPassword
            ),
            offsetToisShaOwPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_OLD,
                isShaOwPassword
            ),
            offsetToisDPAPIProtected: 0,
            offsetToNtOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_OLD,
                NtOwfPassword
            ),
            offsetToLmOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_OLD,
                LmOwfPassword
            ),
            offsetToShaOwPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_OLD,
                ShaOwPassword
            ),
            offsetToDPAPIProtected: 0,
            offsetToIso: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL_10_OLD, NtOwfPassword),
        },
        PrimaryHelper {
            offsetToLogonDomain: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10,
                LogonDomainName
            ),
            offsetToUserName: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL_10, UserName),
            offsetToisIso: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL_10, isIso),
            offsetToisNtOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10,
                isNtOwfPassword
            ),
            offsetToisLmOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10,
                isLmOwfPassword
            ),
            offsetToisShaOwPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10,
                isShaOwPassword
            ),
            offsetToisDPAPIProtected: 0,
            offsetToNtOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10,
                NtOwfPassword
            ),
            offsetToLmOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10,
                LmOwfPassword
            ),
            offsetToShaOwPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10,
                ShaOwPassword
            ),
            offsetToDPAPIProtected: 0,
            offsetToIso: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL_10, NtOwfPassword),
        },
        PrimaryHelper {
            offsetToLogonDomain: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_1607,
                LogonDomainName
            ),
            offsetToUserName: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL_10_1607, UserName),
            offsetToisIso: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL_10_1607, isIso),
            offsetToisNtOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_1607,
                isNtOwfPassword
            ),
            offsetToisLmOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_1607,
                isLmOwfPassword
            ),
            offsetToisShaOwPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_1607,
                isShaOwPassword
            ),
            offsetToisDPAPIProtected: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_1607,
                isDPAPIProtected
            ),
            offsetToNtOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_1607,
                NtOwfPassword
            ) - 2,
            offsetToLmOwfPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_1607,
                LmOwfPassword
            ) - 2,
            offsetToShaOwPassword: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_1607,
                ShaOwPassword
            ) - 2,
            offsetToDPAPIProtected: memoffset::offset_of!(
                MSV1_0_PRIMARY_CREDENTIAL_10_1607,
                DPAPIProtected
            ),
            offsetToIso: memoffset::offset_of!(MSV1_0_PRIMARY_CREDENTIAL_10_1607, NtOwfPassword),
        },
    ];

    PRIMARY_HELPERS[index]
}
