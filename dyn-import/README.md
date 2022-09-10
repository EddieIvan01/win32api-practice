# dyn-import

Import win32 API dynamicly via Rust macros.

Link: [https://mp.weixin.qq.com/s?__biz=Mzg5MjU2NTc1Mg==&mid=2247483783&idx=1&sn=9145686b826e3d7cd4be263b323aa9cd](https://mp.weixin.qq.com/s?__biz=Mzg5MjU2NTc1Mg==&mid=2247483783&idx=1&sn=9145686b826e3d7cd4be263b323aa9cd)

Usage:

```rust
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
```

