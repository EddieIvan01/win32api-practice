#include <stdio.h>
#include <Windows.h>
#include <TlHelp32.h>
#include <string.h>
#include <minidumpapiset.h>
#pragma comment(lib, "Dbghelp.lib")

DWORD GetProcessIdByName(WCHAR* lpProcessName) {
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    DWORD dwProcessId = 0;

    do {
        PROCESSENTRY32 pe32 = { sizeof pe32 };
        if (!Process32First(hSnapshot, &pe32))
            break;

        while (Process32Next(hSnapshot, &pe32)) {
            // wprintf(L"%s\n", pe32.szExeFile);
            if (0 == wcscmp(pe32.szExeFile, lpProcessName)) {
                dwProcessId = pe32.th32ProcessID;
                break;
            }
            Process32Next(hSnapshot, &pe32);
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

BOOL ProcessDump(DWORD dwProcessId, WCHAR* lpFileName) {
    HANDLE hProcess = OpenProcess(
        PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_DUP_HANDLE,
        FALSE, dwProcessId
    );
    if (hProcess == INVALID_HANDLE_VALUE)
        return FALSE;

    HANDLE hFile = CreateFile(
        lpFileName,
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

BOOL CheckAPIHookedAndTryUnHook(WCHAR* lpDllFileName, CHAR* pAPIName) {
    HANDLE hDllFile = CreateFile(
        lpDllFileName,
        GENERIC_READ, FILE_SHARE_READ, NULL,
        OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL
    );
    if (hDllFile == INVALID_HANDLE_VALUE)
        return FALSE;

    HANDLE hDllFileMapping = CreateFileMapping(hDllFile, NULL, PAGE_READONLY | SEC_IMAGE, 0, 0, NULL);
    VOID* pDllFileMappingBase = MapViewOfFile(hDllFileMapping, FILE_MAP_READ, 0, 0, 0);
    CloseHandle(hDllFile);

    // https://0xpat.github.io/Malware_development_part_2/
    IMAGE_DOS_HEADER* pDosHeader = (IMAGE_DOS_HEADER*)pDllFileMappingBase;
    IMAGE_NT_HEADERS* pNtHeader = (IMAGE_NT_HEADERS*)((PBYTE)pDllFileMappingBase + pDosHeader->e_lfanew);
    IMAGE_OPTIONAL_HEADER* pOptionalHeader = (IMAGE_OPTIONAL_HEADER*)&(pNtHeader->OptionalHeader);
    IMAGE_EXPORT_DIRECTORY* pExportDirectory = (IMAGE_EXPORT_DIRECTORY*)
        ((BYTE*)pDllFileMappingBase + pOptionalHeader->DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress);
    ULONG* pAddressOfFunctions = (ULONG*)((BYTE*)pDllFileMappingBase + pExportDirectory->AddressOfFunctions);
    ULONG* pAddressOfNames = (ULONG*)((BYTE*)pDllFileMappingBase + pExportDirectory->AddressOfNames);
    USHORT* pAddressOfNameOrdinals = (USHORT*)((BYTE*)pDllFileMappingBase + pExportDirectory->AddressOfNameOrdinals);

    VOID* pAPIProcOriginal = NULL;
    for (DWORD i = 0; i < pExportDirectory->NumberOfNames; i++) {
        CHAR* pFunctionName = (BYTE*)pDllFileMappingBase + pAddressOfNames[i];
        if (!strcmp(pFunctionName, pAPIName)) {
            pAPIProcOriginal = (VOID*)((BYTE*)pDllFileMappingBase + pAddressOfFunctions[pAddressOfNameOrdinals[i]]);
            break;
        }
    }
    if (pAPIProcOriginal == NULL)
        return FALSE;

    DWORD dwSlashIndex = 0;
    for (DWORD i = wcslen(lpDllFileName); i > 0; i--) {
        if (lpDllFileName[i] == L'\\') {
            dwSlashIndex = i + 1;
            break;
        }
    }

    VOID* pAPIProc = GetProcAddress(GetModuleHandle(lpDllFileName + dwSlashIndex), pAPIName);
    if (pAPIProc == NULL)
        return FALSE;

    if (memcmp(pAPIProc, pAPIProcOriginal, 5)) {
        wprintf(L"%s!%S is hooked, try unhook\n", lpDllFileName + dwSlashIndex, pAPIName);
        DWORD dwOldProtect;
        DWORD dwTmpProtect;
        if (!VirtualProtect(pAPIProc, 5, PAGE_READWRITE, &dwOldProtect))
            return FALSE;
        memcpy(pAPIProc, pAPIProcOriginal, 5);
        if (!VirtualProtect(pAPIProc, 5, dwOldProtect, &dwTmpProtect))
            return FALSE;
        return TRUE;
    }
    else
        wprintf(L"%s!%S is not hooked\n", lpDllFileName + dwSlashIndex, pAPIName);
    
    return TRUE;
}

int wmain(int argc, wchar_t* argv[]) {
    if (argc < 3) {
        wprintf(L"%s process_name outfile\n", argv[0]);
        return;
    }

    if (!CheckAPIHookedAndTryUnHook(L"C:\\windows\\system32\\dbgcore.dll", "MiniDumpWriteDump"))
        wprintf(L"Unhook fail\n");

    WCHAR* lpProcessName = argv[1];
    WCHAR* lpOutFile = argv[2];

    if (ElevateDebugPrivilege() != 0) {
        wprintf(L"Elevate SeDebugPrivilege fail: %d\n", GetLastError());
        return -1;
    }

    DWORD dwProcessId = GetProcessIdByName(lpProcessName);
    if (dwProcessId == 0) {
        wprintf(L"No such process: %s\n", lpProcessName);
        return -1;
    }

    if (!ProcessDump(dwProcessId, lpOutFile)) {
        wprintf(L"Dump error: %d\n", GetLastError());
        return -1;
    }
    wprintf(L"Dump %s to %s\n", lpProcessName, lpOutFile);
    return 0;
}
