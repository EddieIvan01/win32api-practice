#include "pch.h"
#include <windows.h>
#include <iostream>

#define NAMED_PIPE_NAME L"\\\\.\\pipe\\DllHijackDigger"

VOID WINAPI SendModuleName(HMODULE hModule) {
	WCHAR wsBuf[MAX_PATH] = { 0 };
	DWORD dwFileNameN = GetModuleFileNameW(hModule, wsBuf, MAX_PATH);

	HANDLE hPipe = NULL;
	hPipe = CreateFile(
		NAMED_PIPE_NAME,
		GENERIC_WRITE,
		0,
		NULL,
		OPEN_EXISTING,
		0,
		NULL
	);
	if (hPipe == INVALID_HANDLE_VALUE) {
		wprintf(L"Connect to pipe err: 0x%x\n", GetLastError());
		return;
	}

	DWORD dwWritten = 0;
	if (!WriteFile(hPipe, wsBuf, dwFileNameN * sizeof(WCHAR), &dwWritten, NULL)) {
		wprintf(L"Write to pipe err: 0x%x\n", GetLastError());
		return;
	}

	wprintf(L"Send %s\n", wsBuf);
	CloseHandle(hPipe);
	return;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		SendModuleName(hModule);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

