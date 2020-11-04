using System;
using System.IO.Pipes;
using System.Text;
using System.Threading;

namespace DllHijackDigger {
    class NamedPipe {
        protected NamedPipeServerStream server;
        public NamedPipe(string pipeName) {
            server = new NamedPipeServerStream(
                pipeName, PipeDirection.InOut,
                NamedPipeServerStream.MaxAllowedServerInstances,
                PipeTransmissionMode.Message, PipeOptions.None);
        }

        const int MAX_PATH = 260;
        public void run() {
            try {
                server.WaitForConnection();
                byte[] buf = new byte[MAX_PATH * 2];
                int read = 0;
                while (server.CanRead && read < buf.Length) {
                    int n = server.Read(buf);
                    if (n == 0) break;
                    read += n;
                }

                Console.WriteLine("Vuln dll: " + Encoding.UTF8.GetString(buf));
            } catch (Exception e) {
                Console.WriteLine(e);
                server.Close();
            }

        }
    }

    class NamedPipePool {
        public static void start(string pipeName, int maxWorker) {
            for (int i = 0; i < maxWorker; i++) {
                NamedPipe pipe = new NamedPipe(pipeName);
                new Thread(pipe.run).Start();
            }
        }
    }
}
