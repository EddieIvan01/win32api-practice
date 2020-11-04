# DllHijackDigger

Inspired by [sensepost/rattler](https://github.com/sensepost/rattler), but improve the way of detecting (using named pipe to detect) 

And same as `rattler`, it could only dig vulnerability of [load-time linking](https://docs.microsoft.com/en-us/cpp/build/linking-an-executable-to-a-dll?view=msvc-160). So in my opinion, they are both useless. The better way to dig DLL hijack is monitoring manually via `ProcessMonitor` 

***

## Usage

1. Determine the architecture of target program
2. Build the `ExpDll` and `DllHijackDigger` with proper arch
3. Put `DllHijackDigger.exe` and `exp.dll` in a same directory
4. Run `DllHijackDigger.exe C:\full\qualified\path\to\program`