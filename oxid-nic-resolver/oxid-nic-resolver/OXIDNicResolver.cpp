#include <iostream>
#include <Windows.h>
#include "ms-dcom_h.h"
#pragma comment(lib, "rpcrt4.lib")
/*
  idl from
  https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dcom/49aef5a4-f0ad-4478-abb5-cb9446dc13c6
  https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dtyp/24637f2d-238b-4d22-b44d-fe54b024280c
*/

WCHAR* g_lwsNetworkAddr = NULL;
WCHAR g_lwsEndpoint[6] = L"135";

int wmain(int argc, wchar_t* argv[]) {
    if (argc < 2) {
        wprintf(L"%s IP [PORT]\n", argv[0]);
        return -1;
    }
    else if (argc == 2) {
        g_lwsNetworkAddr = argv[1];
    }
    else {
        g_lwsNetworkAddr = argv[1];
        wcscpy_s(g_lwsEndpoint, argv[2]);
    }

    WCHAR lwsProtSeq[] = L"ncacn_ip_tcp";
    RPC_WSTR lwsStrBinding;

    if (RPC_S_OK != RpcStringBindingComposeW(
        NULL,
        (RPC_WSTR)lwsProtSeq,
        (RPC_WSTR)g_lwsNetworkAddr,
        (RPC_WSTR)g_lwsEndpoint,
        NULL, &lwsStrBinding
    )) {
        wprintf(L"Call RpcStringBindingCompose fail: %d\n", GetLastError());
        return -1;
    }

    wprintf(L"Retrieve nic network address from %s\n", lwsStrBinding);

    RPC_BINDING_HANDLE hRpcBinding;
    if (RPC_S_OK != RpcBindingFromStringBinding(lwsStrBinding, &hRpcBinding)) {
        wprintf(L"Call RpcBindingFromStringBinding fail: %d\n", GetLastError());
        return -1;
    }

    COMVERSION cv = { 0 };
    // https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dcom/50889dd8-1960-49ca-a444-6212a73dc397
    DUALSTRINGARRAY* pdsa = 0;

    DWORD dwReserved;
    if (ServerAlive2(hRpcBinding, &cv, &pdsa, &dwReserved)) {
        wprintf(L"Call ServerAlive2 fail: %d\n", GetLastError());
        return -1;
    }

    DWORD dwPtr = 0;
    const DWORD NCACN_IP_TCP = 0x07;
    while (TRUE) {
        if (dwPtr >= pdsa->wSecurityOffset - 1)
            break;

        if (pdsa->aStringArray[dwPtr++] == NCACN_IP_TCP)
            wprintf(L"TowerId=NCACN_IP_TCP: ");

        else
            wprintf(L"TowerId=%d: ", pdsa->aStringArray[dwPtr - 1]);

        WCHAR* wcAddr = 0;
        do {
            wcAddr = (WCHAR*)(&pdsa->aStringArray[dwPtr++]);
            wprintf(L"%c", *wcAddr);
        } while (*wcAddr != 0);
        wprintf(L"\n");
    }
}