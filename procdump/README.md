# procdump

Dump full(type 0x02) process memory via `MiniDumpWriteDump`, most commonly be used to dump `lsass.exe`

Need `SeDebugPrivilege` for operating

```
PS C:\> .\procdump.exe lsass.exe 1.bin
PS C:\> file 1.bin
1.bin: Mini DuMP crash report, 11 streams, Sat Aug  8 12:07:03 2020, 0x2 type
```

