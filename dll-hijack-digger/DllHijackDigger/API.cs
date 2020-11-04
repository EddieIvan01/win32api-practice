using System;
using System.Text;
using System.Runtime.InteropServices;

namespace API {
    public class Kernel32 {
        [DllImport("kernel32.dll", SetLastError = true, CharSet = CharSet.Unicode)]
        [return: MarshalAs(UnmanagedType.Bool)]
        static extern bool CreateProcessW(
            string lpApplicationName,
            string lpCommandLine,
            IntPtr lpProcessAttributes,
            IntPtr lpThreadAttributes,
            bool bInheritHandles,
            UInt32 dwCreationFlags,
            IntPtr lpEnvironment,
            string lpCurrentDirectory,
            ref STARTUPINFO lpStartupInfo,
            out PROCESS_INFORMATION lpProcessInformation
            );

        [DllImport("kernel32.dll", SetLastError = true)]
        static extern bool CloseHandle(IntPtr hObject);

        [DllImport("kernel32.dll", SetLastError = true)]
        public static extern bool TerminateProcess(IntPtr hProcess,  uint uExitCode);


        [DllImport("kernel32.dll")]
        public static extern UInt32 GetLastError();

        [DllImport("kernel32.dll", SetLastError = true)]
        static extern IntPtr OpenProcess(
            UInt32 dwDesiredAccess,
            bool bInheritHandle,
            UInt32 dwProcessId
            );

        public static UInt32 CreateProcessWrapper(string program) {
            STARTUPINFO sInfo = new STARTUPINFO();
            PROCESS_INFORMATION pInfo = new PROCESS_INFORMATION();
            if (!CreateProcessW(
                null, program,
                IntPtr.Zero, IntPtr.Zero, false,
                0, IntPtr.Zero, null, ref sInfo, out pInfo
            )) return 0;
            return pInfo.dwProcessId;
        }

        public static IntPtr OpenProcessWrapper(UInt32 processId) {
            return OpenProcess(
                PROCESS_ALL_ACCESS,
                false, processId);
        }

        const UInt32 PROCESS_VM_READ = 0x0010;
        const UInt32 PROCESS_QUERY_INFORMATION = 0x0400;
        const UInt32 PROCESS_ALL_ACCESS = 0x001F0FFF;

        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        struct STARTUPINFO {
            public Int32 cb;
            public string lpReserved;
            public string lpDesktop;
            public string lpTitle;
            public Int32 dwX;
            public Int32 dwY;
            public Int32 dwXSize;
            public Int32 dwYSize;
            public Int32 dwXCountChars;
            public Int32 dwYCountChars;
            public Int32 dwFillAttribute;
            public Int32 dwFlags;
            public Int16 wShowWindow;
            public Int16 cbReserved2;
            public IntPtr lpReserved2;
            public IntPtr hStdInput;
            public IntPtr hStdOutput;
            public IntPtr hStdError;
        }

        [StructLayout(LayoutKind.Sequential)]
        struct PROCESS_INFORMATION {
            public IntPtr hProcess;
            public IntPtr hThread;
            public UInt32 dwProcessId;
            public UInt32 dwThreadId;
        }

        [StructLayout(LayoutKind.Sequential)]
        struct SECURITY_ATTRIBUTES {
            public UInt32 nLength;
            public IntPtr lpSecurityDescriptor;
            public bool bInheritHandle;
        }
    }

    public class PsAPI {
        [DllImport("psapi.dll", SetLastError = true, CharSet = CharSet.Unicode)]
        static extern UInt32 GetModuleFileNameExW(
            IntPtr hProcess,
            IntPtr hModule,
            StringBuilder lpFilename,
            UInt32 nSize
            );

        [DllImport("psapi.dll")]
        unsafe static extern bool EnumProcessModules(
            IntPtr hProcess,
            IntPtr* lphModule,
            UInt32 cb,
            out UInt32 lpcbNeeded
            );

        const int MAX_PATH = 260;

        public static string GetModuleFileNameWrapper(IntPtr hProcess, IntPtr hMod) {
            StringBuilder buf = new StringBuilder(MAX_PATH);
            GetModuleFileNameExW(
                hProcess, hMod, buf, MAX_PATH);
            return buf.ToString();
        }

        public static IntPtr[] EnumProcessModulesWrapper(IntPtr hProcess) {
            UInt32 cbNeeded = 0;

            unsafe {
                UInt32 cb = (UInt32)sizeof(IntPtr) * 1024;
                IntPtr[] mods = new IntPtr[cb];
                fixed (IntPtr* modPtr = &mods[0]) {
                    if (!EnumProcessModules(
                        hProcess, modPtr, cb, out cbNeeded))
                        return null;
                }

                // Console.WriteLine(cbNeeded / sizeof(IntPtr));
                return mods[0..(Index)(cbNeeded / sizeof(IntPtr))];
            }
        }
    }

    public class User32 {

        public const UInt32 INFINITE = 0xFFFFFFFF;
        [DllImport("user32.dll", SetLastError = true)]
        public static extern UInt32 WaitForInputIdle(
            IntPtr hProcess,
            UInt32 dwMilliseconds
            );
    }
}
