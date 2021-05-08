pub struct LsaError {
    error_code: u32,
    msg: &'static str,
}

impl std::fmt::Debug for LsaError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_fmt(format_args!("{}: 0x{:x}", self.msg, self.error_code))?;
        Ok(())
    }
}

impl LsaError {
    pub fn new(msg: &'static str) -> LsaError {
        LsaError {
            error_code: unsafe { crate::binding::Windows::Win32::Debug::GetLastError() },
            msg: msg,
        }
    }
}

pub type LsaResult<T> = std::result::Result<T, LsaError>;
