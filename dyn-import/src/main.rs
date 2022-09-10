pub mod winapi;

use std::ffi::c_void;
use std::mem;
use std::ptr;

macro_rules! dyn_import {
    ($module:literal ($calling_convention:literal): $(
        $(#[$meta:meta])*
        fn $symbol:ident($($argname:ident: $argtype:ty),*) -> $rettype:ty;
    )*) => ($(
        $(#[$meta])*
        #[warn(non_snake_case)]
        pub mod $symbol {
            use super::*;

            type F = unsafe extern $calling_convention fn($($argtype),*) -> $rettype;

            static mut PTR: *const c_void = ptr::null();

            unsafe fn get_f() -> *const c_void {
                let ptr = winapi::GetProcAddress(winapi::LoadLibraryW(macros::wss_z!($module).as_ptr()), macros::ss_z!($symbol).as_ptr());
                if !ptr.is_null() {
                    return ptr;
                }

                #[cfg(debug_assertions)]
                panic!(stringify!($symbol));

                #[cfg(not(debug_assertions))]
                panic!();
            }

            #[allow(dead_code)]
            #[allow(clippy::too_many_arguments)]
            pub unsafe fn call($($argname: $argtype),*) -> $rettype {
                if PTR.is_null() {
                    PTR = get_f();
                }

                mem::transmute::<*const c_void, F>(PTR)($($argname),*)
            }
        }

        $(#[$meta])*
        pub use $symbol::call as $symbol;
    )*);

    ($module:literal: $(
        $(#[$meta:meta])*
        sym<$typ:tt> $symbol:ident;
    )*) => ($(
        $(#[$meta])*
        #[warn(non_snake_case)]
        pub mod $symbol {
            use super::*;

            static mut PTR: *const $typ = ptr::null();

            unsafe fn get_s() -> *const $typ {
                let ptr = winapi::GetProcAddress(winapi::LoadLibraryW(macros::wss_z!($module).as_ptr()), macros::ss_z!($symbol).as_ptr());
                if !ptr.is_null() {
                    return ptr as _;
                }

                #[cfg(debug_assertions)]
                panic!(stringify!($symbol));

                #[cfg(not(debug_assertions))]
                panic!();
            }

            #[allow(dead_code)]
            pub unsafe fn get() -> *const $typ {
                if PTR.is_null() {
                    PTR = get_s();
                }

                PTR
            }
        }

        $(#[$meta])*
        pub use $symbol::get as $symbol;
    )*);
}

dyn_import! {
    "kernel32" ("system"):

    fn LocalAlloc(uflags: u32, ubytes: usize) -> isize;
    fn GetModuleFileNameA(hmod: *const c_void, lpfilename: *mut u8, size: u32) -> u32;
}

#[repr(C)]
pub struct FILE {
    _ptr: isize,
    _cnt: i32,
    _base: isize,
    _flag: i32,
    _file: i32,
    _charbuf: i32,
    _bufsiz: i32,
    _tmpfname: isize,
}

dyn_import! {
    "msvcrt":

    sym<FILE> _iob;
}

dyn_import! {
    "msvcrt" ("C"):

    fn fwrite(ptr: *const u8, size: usize, nmemb: usize, f: *const FILE) -> usize;
    fn fflush(f: *const FILE) -> i32;
}

const LPTR: u32 = 0x40;

fn main() {
    unsafe {
        let addr = LocalAlloc(LPTR, 1 << 10);
        let stdout = _iob().offset(1);

        let n = GetModuleFileNameA(ptr::null(), addr as _, 1 << 10);

        let output = format!("alloc @ 0x{addr:x}\nstdout {stdout:?}\n");

        fwrite(output.as_ptr(), output.len(), 1, stdout);
        fwrite(addr as _, n as _, 1, stdout);
        fflush(stdout);
    }
}
