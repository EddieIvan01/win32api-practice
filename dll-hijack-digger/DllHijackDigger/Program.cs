using System;
using System.Collections.Generic;
using System.Threading;
using Microsoft.Win32;
using API;
using System.IO;

namespace DllHijackDigger {
    class Program {
        static bool collectModules(HashSet<string> s, IntPtr hProcess) {
            IntPtr[] mods = PsAPI.EnumProcessModulesWrapper(hProcess);
            if (mods == null) {
                Console.WriteLine("Enum modules error: 0x{0:X}", Kernel32.GetLastError());
                return false;
            }

            foreach (IntPtr ptr in mods) {
                if (ptr == IntPtr.Zero) continue;
                string fname = PsAPI.GetModuleFileNameWrapper(hProcess, ptr).ToLower();
                if (fname.EndsWith(".exe")) continue;
                string[] tmp = fname.Split("\\");
                s.Add(tmp[tmp.Length - 1]);
            }
            return true;
        }

        static HashSet<string> getKnownDlls() {
            // HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Session Manager\KnownDlls
            // HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Session Manager\ExcludeFromKnownDlls
            RegistryKey knownDlls = Registry
                .LocalMachine
                .OpenSubKey("SYSTEM\\CurrentControlSet\\Control\\Session Manager\\KnownDlls", false);

            HashSet<string> s = new HashSet<string>();
            foreach (string vn in knownDlls.GetValueNames())
                s.Add(knownDlls.GetValue(vn).ToString());

            RegistryKey excKnownDlls = Registry
                .LocalMachine
                .OpenSubKey(
                "SYSTEM\\CurrentControlSet\\Control\\Session Manager\\ExcludeFromKnownDlls",
                false);
            if (excKnownDlls != null) {
                HashSet<string> tmp = new HashSet<string>();
                foreach (string vn in excKnownDlls.GetValueNames())
                    s.Remove(excKnownDlls.GetValue(vn).ToString());
            }
            return s;
        }

        static void tryExploit(string fqName, HashSet<string> dlls) {
            if (!Directory.Exists("workspace"))
                Directory.CreateDirectory("workspace");

            DirectoryInfo dict = new DirectoryInfo("workspace");
            foreach (FileInfo finfo in dict.GetFiles())
                finfo.Delete();

            string path = fqName.Substring(0, fqName.LastIndexOf("\\"));
            string programName = fqName.Substring(fqName.LastIndexOf("\\") + 1);
            File.Copy(fqName, "workspace\\" + programName);

            foreach (string dll in dlls) {
                if (dll == "") continue;
                File.Copy("exp.dll", "workspace\\" + dll);
            }

            Kernel32.CreateProcessWrapper("workspace\\" + programName);
        }
        static void Main(string[] args) {
            if (args.Length == 0) {
                Console.WriteLine("DllHijackDigger.exe C:\\full\\qualified\\path\\to\\file");
                return;
            }
            string programFqName = args[0];

            UInt32 processId = Kernel32.CreateProcessWrapper(programFqName);
            if (processId == 0) {
                Console.WriteLine("Create process error: 0x{0:X}", Kernel32.GetLastError());
                return;
            }

            IntPtr hProcess = Kernel32.OpenProcessWrapper(processId);
            if (hProcess == IntPtr.Zero) {
                Console.WriteLine("Open process error: 0x{0:X}", Kernel32.GetLastError());
                return;
            }

            HashSet<string> modFnames = new HashSet<string>();

            // If is a GUI program, wait it for initializing all modules
            // But if is a console program, `WaitForInputIdle` will return immediatelly
            collectModules(modFnames, hProcess);

            User32.WaitForInputIdle(hProcess, User32.INFINITE);
            collectModules(modFnames, hProcess);

            for (int i = 0; i < 400; i++) {
                Thread.Sleep(25);
                if (!collectModules(modFnames, hProcess)) break;
            }

            Kernel32.TerminateProcess(hProcess, 0);

            HashSet<string> knownDlls = getKnownDlls();
            modFnames.ExceptWith(knownDlls);

            Console.WriteLine("Collected:");
            foreach (string dll in modFnames) {
                Console.WriteLine(dll);
            }

            NamedPipePool.start("DllHijackDigger", 256);

            tryExploit(programFqName, modFnames);
        }
    }
}
