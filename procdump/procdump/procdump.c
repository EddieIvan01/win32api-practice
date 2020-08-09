#include <stdio.h>
#include <Windows.h>
#include <TlHelp32.h>
#include <minidumpapiset.h>
#pragma comment(lib, "Dbghelp.lib")

DWORD GetProcessIdByName(WCHAR* lwszProcessName) {
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    DWORD dwProcessId = 0;

    do {
        PROCESSENTRY32 pe32 = { sizeof pe32 };
        if (!Process32First(hSnapshot, &pe32))
            break;

        while (Process32Next(hSnapshot, &pe32)) {
            // wprintf(L"%s\n", pe32.szExeFile);
            if (0 == wcscmp(pe32.szExeFile, lwszProcessName)) {
                dwProcessId = pe32.th32ProcessID;
                break;
            }
        }
    } while (FALSE);

    CloseHandle(hSnapshot);
    return dwProcessId;
}

typedef NTSTATUS(WINAPI* _RtlAdjustPrivilege)(
    ULONG Privilege,
    BOOL Enable,
    BOOL CurrentThread,
    PULONG Enabled
    );

const DWORD SE_DEBUG_PRIVILEGE = 0x14;

NTSTATUS ElevateDebugPrivilege() {
    _RtlAdjustPrivilege RtlAdjustPrivilege = (_RtlAdjustPrivilege)GetProcAddress(
        GetModuleHandle(TEXT("ntdll.dll")),
        "RtlAdjustPrivilege"
    );
    ULONG ulEnabled;

    return RtlAdjustPrivilege(SE_DEBUG_PRIVILEGE, TRUE, FALSE, &ulEnabled);
}

BOOL ProcessDump(DWORD dwProcessId, WCHAR* lwszFileName) {
    HANDLE hProcess = OpenProcess(
        PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_DUP_HANDLE, 
        FALSE, dwProcessId
    );
    if (hProcess == INVALID_HANDLE_VALUE)
        return FALSE;

    HANDLE hFile = CreateFile(
        lwszFileName,
        GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL, CREATE_ALWAYS, 0, NULL);
    if (hFile == INVALID_HANDLE_VALUE) {
        CloseHandle(hProcess);
        return FALSE;
    }

    if (!MiniDumpWriteDump(
        hProcess, dwProcessId, hFile, MiniDumpWithFullMemory, NULL, NULL, NULL
    )) {
        CloseHandle(hProcess);
        CloseHandle(hFile);
        return FALSE;
    }

    return TRUE;
}

int wmain(int argc, wchar_t* argv[]) {
    if (argc < 3) {
        wprintf(L"%s process_name outfile\n", argv[0]);
        return;
    }

    WCHAR* lwszProcessName = argv[1];
    WCHAR* lwszOutFile = argv[2];

    if (ElevateDebugPrivilege() != 0) {
        wprintf(L"Elevate SeDebugPrivilege fail: %d\n", GetLastError());
        return -1;
    }

    DWORD dwProcessId = GetProcessIdByName(lwszProcessName);
    if (dwProcessId == 0) {
        wprintf(L"No such process: %s\n", lwszProcessName);
        return -1;
    }

    if (!ProcessDump(dwProcessId, lwszOutFile)) {
        wprintf(L"Dump error: %d\n", GetLastError());
        return -1;
    }

    return 0;
}
