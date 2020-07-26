#include <iostream>
#include <Windows.h>
#include <winternl.h>


typedef NTSTATUS(*NtQueryInformationProcessFn)(
    IN HANDLE           ProcessHandle,
    IN PROCESSINFOCLASS ProcessInformationClass,
    OUT PVOID           ProcessInformation,
    IN ULONG            ProcessInformationLength,
    OUT PULONG          ReturnLength
    );

int wmain(int argc, wchar_t* argv[]) {
    if (argc != 2) {
        wprintf(L"%s CMD\n", argv[0]);
        return -1;
    }

    USHORT usNewLen = 0;
    WCHAR* lwszSpoofCmd = (WCHAR*)malloc((wcslen(argv[1]) + 1) * sizeof WCHAR);
    memset(lwszSpoofCmd, 0, (wcslen(argv[1]) + 1) * sizeof WCHAR);

    BOOL bfStartArgument = FALSE;

    for (int i = 0; i < wcslen(argv[1]); i++) {
        if (!bfStartArgument) {
            if (argv[1][i] != L' ')
                lwszSpoofCmd[i] = argv[1][i];
            else {
                usNewLen = i * 2;
                lwszSpoofCmd[i] = L' ';
                bfStartArgument = TRUE;
            }
        }
        else {
            lwszSpoofCmd[i] = L'?';
        }
    }

    STARTUPINFO si = { 0 };
    PROCESS_INFORMATION pi = { 0 };

    if (!CreateProcess(
        NULL,
        lwszSpoofCmd,
        NULL, NULL, TRUE,
        CREATE_SUSPENDED, NULL, NULL, &si, &pi)) {
        wprintf(L"Create process fail: %d\n", GetLastError());
        return -1;
    }

    PROCESS_BASIC_INFORMATION pbi = { 0 };
    NtQueryInformationProcessFn pNtQueryInformationProcess = (NtQueryInformationProcessFn) \
        GetProcAddress(LoadLibrary(L"ntdll.dll"), "NtQueryInformationProcess");

    ULONG dwRead;
    if (NT_ERROR(pNtQueryInformationProcess(
        pi.hProcess, ProcessBasicInformation,
        &pbi, sizeof pbi, &dwRead))) {
        wprintf(L"Call NtQueryInformationProcess error: %d\n", GetLastError());
        return -1;
    }

    PEB peb = { 0 };
    SIZE_T stRead;
    if (!ReadProcessMemory(pi.hProcess, pbi.PebBaseAddress, &peb, sizeof PEB, &stRead)) {
        wprintf(L"Call ReadProcessMemory fail 1: %d\n", GetLastError());
        return -1;
    }

    // Get RTL_USER_PROCESS_PARAMETERS from remote process
    RTL_USER_PROCESS_PARAMETERS* pRtlUserProcessParam = NULL;
    VOID* lpBuffer = malloc(sizeof RTL_USER_PROCESS_PARAMETERS);
    if (!ReadProcessMemory(
        pi.hProcess,
        peb.ProcessParameters,
        lpBuffer,
        sizeof RTL_USER_PROCESS_PARAMETERS,
        &stRead
    )) {
        wprintf(L"Call ReadProcessMemory fail 2: %d\n", GetLastError());
        goto CLEANUP;
    }

    pRtlUserProcessParam = (RTL_USER_PROCESS_PARAMETERS*)lpBuffer;
    if (!WriteProcessMemory(
        pi.hProcess,
        pRtlUserProcessParam->CommandLine.Buffer,
        argv[1], (wcslen(argv[1]) + 1) * sizeof WCHAR, &stRead
    )) {
        wprintf(L"Call WriteProcessMemory fail 1: %d\n", GetLastError());
        goto CLEANUP;
    }

    if (!WriteProcessMemory(
        pi.hProcess,
        (CHAR*)peb.ProcessParameters + offsetof(RTL_USER_PROCESS_PARAMETERS, CommandLine.MaximumLength),
        (VOID*)&usNewLen,
        sizeof USHORT,
        &stRead
    ) || !WriteProcessMemory(
        // It's not nessasery to modify CommandLine.Length 
        pi.hProcess,
        (CHAR*)peb.ProcessParameters + offsetof(RTL_USER_PROCESS_PARAMETERS, CommandLine.Length),
        (VOID*)&usNewLen,
        sizeof USHORT,
        &stRead)) {
        wprintf(L"Call WriteProcessMemory fail 2: %d\n", GetLastError());
        goto CLEANUP;
    }

    ResumeThread(pi.hThread);
    WaitForSingleObject(pi.hThread, INFINITE);
CLEANUP:
    free(lpBuffer);
    free(lwszSpoofCmd);
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
}
