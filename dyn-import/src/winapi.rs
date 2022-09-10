use std::ffi::c_void;

extern "system" {
    pub fn LoadLibraryW(lib: *const u16) -> *const c_void;
    pub fn GetProcAddress(hmod: *const c_void, proc: *const u8) -> *const c_void;
}
