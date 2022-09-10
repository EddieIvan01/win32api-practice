use proc_macro::{TokenStream, TokenTree};
use std::mem;

/// Stack string in UTF16-LE terminated by null
#[proc_macro]
pub fn wss_z(item: TokenStream) -> TokenStream {
    let tt: Vec<TokenTree> = item.into_iter().take(1).collect();

    let mut s = tt[0]
        .to_string()
        .strip_prefix('"')
        .unwrap()
        .strip_suffix('"')
        .unwrap()
        .replace("\\\\", "\\")
        .to_string();
    s.push('\0');

    let mut output = Vec::<String>::new();

    s.to_string()
        .as_bytes()
        .iter()
        .map(|&c| {
            output.push(format!("0x{:x}_u16", c));
        })
        .for_each(mem::drop);

    format!("[{}]", output.join(", ")).parse().unwrap()
}

/// Stack string in ansi terminated by null
#[proc_macro]
pub fn ss_z(item: TokenStream) -> TokenStream {
    let tt: Vec<TokenTree> = item.into_iter().take(1).collect();

    let mut s = tt[0].to_string().replace("\\\\", "\\").to_string();
    s.push('\0');

    let mut output = Vec::<String>::new();

    s.to_string()
        .as_bytes()
        .iter()
        .map(|&c| {
            output.push(format!("0x{:x}_u8", c));
        })
        .for_each(mem::drop);

    format!("[{}]", output.join(", ")).parse().unwrap()
}
