#include "WmiExec.h"

WCHAR g_lpwsUNCPath[MAX_PATH] = L"\\C$";

BOOL NetUse(WCHAR* lpwsTarget, WCHAR* lpwsUname, WCHAR* lpwsPwd) {
    WCHAR lpwsUNC[MAX_PATH] = { 0 };
    wsprintf(lpwsUNC, L"\\\\%s%s", lpwsTarget, g_lpwsUNCPath);

    NETRESOURCE nr = { 0 };
    nr.dwType = RESOURCETYPE_ANY;
    nr.lpRemoteName = lpwsUNC;
    nr.lpLocalName = NULL;
    nr.lpProvider = NULL;

    DWORD dwErrorCode;
    dwErrorCode = WNetAddConnection2(&nr, lpwsPwd, lpwsUname, 0);
    if (NO_ERROR != dwErrorCode) {
        wprintf(L"[!] Net use %s fail: %d\n", lpwsUNC, dwErrorCode);
        return FALSE;
    }
    wprintf(L"[+] Net use %s\n", lpwsUNC);
    return TRUE;
}

BOOL NetUseDelete(WCHAR* lpwsTarget) {
    DWORD dwErrorCode;

    WCHAR lpwsUNC[MAX_PATH] = { 0 };
    wsprintf(lpwsUNC, L"\\\\%s%s", lpwsTarget, g_lpwsUNCPath);

    dwErrorCode = WNetCancelConnection2(lpwsUNC, 0, FALSE);
    if (NO_ERROR != dwErrorCode) {
        wprintf(L"[!] Net use delete fail: %d\n", dwErrorCode);
        return FALSE;
    }
    wprintf(L"[+] Net use delete\n", dwErrorCode);
    return TRUE;
}

const WCHAR wcCharset[62] = {
    L'a', L'b', L'c', L'd', L'e', L'f', L'g', L'h', L'i', L'j', L'k', L'l', L'm',
    L'n', L'o', L'p', L'q', L'r', L's', L't', L'u', L'v', L'w', L'x', L'y', L'z',
    L'A', L'B', L'C', L'D', L'E', L'F', L'G', L'H', L'I', L'J', L'K', L'L', L'M',
    L'N', L'O', L'P', L'Q', L'R', L'S', L'T', L'U', L'V', L'W', L'X', L'Y', L'Z',
    L'0', L'1', L'2', L'3', L'4', L'5', L'6', L'7', L'8', L'9',
};

VOID RandomStr(WCHAR* lpwsBuffer, DWORD dwCount) {
    srand(time(NULL));
    for (int i = 0; i < dwCount; i++)
        lpwsBuffer[i] = wcCharset[rand() % 62];
}

BOOL OpenUNCFile(WCHAR* lpwsTarget, WCHAR* lpwsFileName, PHANDLE phFile) {
    WCHAR lpwsUNCFile[MAX_PATH] = { 0 };

    wsprintf(lpwsUNCFile, L"\\\\%s%s\\%s", lpwsTarget, g_lpwsUNCPath, lpwsFileName);
    wprintf(L"[+] Open file %s\n", lpwsUNCFile);

    HANDLE hFile = CreateFile(
        lpwsUNCFile, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
        NULL, OPEN_EXISTING, FILE_FLAG_DELETE_ON_CLOSE, NULL
    );
    if (hFile == INVALID_HANDLE_VALUE) {
        wprintf(L"[!] Open file fail: %d\n", GetLastError());
        return FALSE;
    }

    *phFile = hFile;
    return TRUE;
}

VOID DisplayFileContent(HANDLE hFile) {
    const DWORD dwBufferSize = 1024;
    CHAR pszBuffer[dwBufferSize] = { 0 };
    DWORD dwRead = 0;

    wprintf(L"\n==================================================================================\n");
    do {
        memset(pszBuffer, 0, dwBufferSize);
        if (!ReadFile(hFile, pszBuffer, 50, &dwRead, NULL)) break;
        printf("%s", pszBuffer);
    } while (dwRead);
    wprintf(L"\n==================================================================================\n");
}

VOID PrintUsage() {
    wprintf(L"wmiexec [TARGET] [USERNAME] [PASSWORD] [CMD]\n");
}

int wmain(int argc, wchar_t* argv[]) {
    if (argc < 5) {
        PrintUsage();
        return -1;
    }
    
    BOOL bHasDomain = FALSE;
    DWORD dwSlashIndex = 0;
    for (int i = 0; i < wcslen(argv[2]); i++) {
        if (argv[2][i] == L'\\') {
            bHasDomain = TRUE;
            dwSlashIndex = i;
            break;
        }
    }

    WCHAR lpwsUname[MAX_PATH] = { 0 };
    if (bHasDomain)
        wcsncpy_s(lpwsUname, argv[2] + dwSlashIndex + 1, wcslen(argv[2]) - dwSlashIndex);
    else
        wcsncpy_s(lpwsUname, argv[2], wcslen(argv[2]));

    WCHAR lpwsDomain[MAX_PATH] = { 0 };
    if (bHasDomain)
        wcsncpy_s(lpwsDomain, argv[2], dwSlashIndex);

    WCHAR* lpwsPwd = argv[3];
    WCHAR* lpwsTarget = argv[1];
    WCHAR* lpwsCommand = argv[4];

    WmiExec wmiexec = WmiExec(lpwsUname, lpwsPwd, lpwsDomain, lpwsTarget);
    if (!wmiexec.InitCOM()) return -1;

    const WCHAR lpwsCmdPrefix[] = L"cmd.exe /c ";
    const WCHAR lpwsCmdSuffix1[] = L" > C:\\";
    const WCHAR lpwsCmdSuffix2[] = L" 2>&1";
    WCHAR lpwsCmdOutputFile[9] = { 0 };
    RandomStr(lpwsCmdOutputFile, 8);


    DWORD dwCmdFinalLen = wcslen(lpwsCmdPrefix) +
        wcslen(lpwsCmdSuffix1) + wcslen(lpwsCmdOutputFile) +
        wcslen(lpwsCommand) + wcslen(lpwsCmdSuffix2);
    WCHAR* lpwsCmdFinal = (WCHAR*)malloc((dwCmdFinalLen + 1) * sizeof WCHAR);
    memset(lpwsCmdFinal, 0, dwCmdFinalLen);
    wsprintf(lpwsCmdFinal, L"%s%s%s%s%s",
        lpwsCmdPrefix, lpwsCommand, lpwsCmdSuffix1, lpwsCmdOutputFile, lpwsCmdSuffix2);

    if (!wmiexec.Execute(lpwsCmdFinal)) return -1;

    // Wait 1s
    wprintf(L"[+] Sleep 1s...\n");
    Sleep(1000);
    do {
        if (!NetUse(lpwsTarget, lpwsUname, lpwsPwd)) return -1;

        HANDLE hFile;
        if (!OpenUNCFile(lpwsTarget, lpwsCmdOutputFile, &hFile)) break;

        DisplayFileContent(hFile);
        CloseHandle(hFile);
    } while (FALSE);

    NetUseDelete(lpwsTarget);

    return 0;
}