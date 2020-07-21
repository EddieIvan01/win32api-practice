# WMI-Exec

Connect to WMI namespace `\\HOSTNAME\root\cimv2` then invoke `WMI - Win32_Process::Create` to execute command on remote machine

And then redirect command's output to disk(**I know, it's not cool**), receive contents via SMB

Sometimes it's useful, when IDS detects process's cmdline

**Can only execute on remote machine(127.0.0.1 is not supported)**

```
PS C:\> .\wmiexec.exe 192.168.1.1 XYZ.LAB\Administrator password whoami
[+] Connect to WMI namespace \\192.168.1.1\root\cimv2
[+] Execute cmd.exe /c whoami > C:\OJYXM0ld 2>&1
[+] WMI returns 0
[+] Sleep 1s...
[+] Net use \\192.168.1.1\C$
[+] Open file \\192.168.1.1\C$\OJYXM0ld

==================================================================================
XYZ.LAB\administrator

==================================================================================
[+] Net use delete
```

