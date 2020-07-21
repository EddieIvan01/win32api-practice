#include "WmiExec.h"

// https://docs.microsoft.com/en-us/windows/win32/wmisdk/example--getting-wmi-data-from-a-remote-computer
// https://docs.microsoft.com/en-us/windows/win32/wmisdk/example--calling-a-provider-method

WmiExec::~WmiExec() {
    CoUninitialize();
    /*
    if (pLoc != NULL)
        pLoc->Release();
        
    if (pSvc != NULL)
        pSvc->Release();
     */
}

BOOL WmiExec::InitCOM() {
    HRESULT hResult;

    hResult = CoInitialize(NULL);
    if (FAILED(hResult)) {
        wprintf(L"[!] Call CoInitialize failed: %d\n", GetLastError());
        return FALSE;
    }

    hResult = CoInitializeSecurity(
        NULL,                        // Security descriptor    
        -1,                          // COM negotiates authentication service
        NULL,                        // Authentication services
        NULL,                        // Reserved
        RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication level for proxies
        RPC_C_IMP_LEVEL_IDENTIFY,    // Default Impersonation level for proxies
        NULL,                        // Authentication info
        EOAC_NONE,                   // Additional capabilities of the client or server
        NULL                         // Reserved
    );
    if (FAILED(hResult)) {
        wprintf(L"[!] Call CoInitializeSecurity failed: %d\n", GetLastError());
        CoUninitialize();
        return FALSE;
    }

    hResult = CoCreateInstance(
        CLSID_WbemLocator, 0,
        CLSCTX_INPROC_SERVER, IID_IWbemLocator,
        (LPVOID*)&pLoc
    );
    if (FAILED(hResult)) {
        wprintf(L"[!] Create IWbemLocator failed: %d\n", GetLastError());
        CoUninitialize();
        return FALSE;
    }

    WCHAR lpwsNetworkSrc[MAX_PATH] = { 0 };
    wsprintf(lpwsNetworkSrc, L"\\\\%s\\root\\cimv2", lpwsTarget);
    hResult = pLoc->ConnectServer(
        BSTR(lpwsNetworkSrc),
        lpwsUname, lpwsPwd, 0,
        NULL, 0, 0, &pSvc
    );
    if (FAILED(hResult)) {
        wprintf(L"[!] IWbemLocator->ConnectServer failed: %d\n", GetLastError());
        CoUninitialize();
        return FALSE;
    }
    wprintf(L"[+] Connect to WMI namespace %s\n", lpwsNetworkSrc);

    hResult = CoSetProxyBlanket(
        pSvc,                           // Indicates the proxy to set
        RPC_C_AUTHN_DEFAULT,            // RPC_C_AUTHN_xxx
        RPC_C_AUTHZ_DEFAULT,            // RPC_C_AUTHZ_xxx
        COLE_DEFAULT_PRINCIPAL,         // Server principal name 
        RPC_C_AUTHN_LEVEL_PKT_PRIVACY,  // RPC_C_AUTHN_LEVEL_xxx 
        RPC_C_IMP_LEVEL_IMPERSONATE,    // RPC_C_IMP_LEVEL_xxx
        &coAuthIdent,                   // client identity
        EOAC_NONE                       // proxy capabilities 
    );

    if (FAILED(hResult)) {
        wprintf(L"[!] Call CoSetProxyBlanket failed: %d\n", GetLastError());
        CoUninitialize();
        return FALSE;
    }

    return TRUE;
}

BOOL WmiExec::Execute(WCHAR* lpwsCommand) {
    BSTR lpwsMethodName = BSTR(TEXT("Create"));
    BSTR lpwsClsName = BSTR(TEXT("Win32_Process"));

    HRESULT hResult;

    IWbemClassObject* pClass = NULL;
    hResult = pSvc->GetObjectW(lpwsClsName, 0, NULL, &pClass, NULL);

    IWbemClassObject* pInParamsDefinition = NULL;
    hResult = pClass->GetMethod(
        lpwsMethodName, 0,
        &pInParamsDefinition, NULL
    );

    IWbemClassObject* pClassInstance = NULL;
    hResult = pInParamsDefinition->SpawnInstance(0, &pClassInstance);

    VARIANT varCommand;
    varCommand.vt = VT_BSTR;
    varCommand.bstrVal = BSTR(lpwsCommand);

    hResult = pClassInstance->Put(TEXT("CommandLine"), 0, &varCommand, 0);

    IWbemClassObject* pOutParams = NULL;
    hResult = pSvc->ExecMethod(
        lpwsClsName, lpwsMethodName, 0,
        NULL, pClassInstance, &pOutParams, NULL
    );
    if (FAILED(hResult)) {
        wprintf(L"[!] Execute failed: %d\n", GetLastError());
        VariantClear(&varCommand);
        pClass->Release();
        pClassInstance->Release();
        pInParamsDefinition->Release();
        pOutParams->Release();
        free(lpwsCommand);
        return FALSE;
    }

    wprintf(L"[+] Execute %s\n", lpwsCommand);

    VARIANT varReturnValue;
    hResult = pOutParams->Get(BSTR(TEXT("ReturnValue")), 0, &varReturnValue, NULL, 0);

    wprintf(L"[+] WMI returns %d\n", varReturnValue.lVal);

    /*
    switch (varReturnValue.vt)
    {
    case VT_I4:
        wprintf(L"%d\n", varReturnValue.lVal);
        break;
    case VT_BSTR:
        wprintf(L"%d\n", varReturnValue.bstrVal);
        break;
    case VT_EMPTY:
        wprintf(L"no returned value\n");
        break;
    default:
        break;
    }
    */

    // VariantClear(&varCommand);
    pClass->Release();
    pClassInstance->Release();
    pInParamsDefinition->Release();
    pOutParams->Release();
    free(lpwsCommand);

    return varReturnValue.lVal == 0;
}

BOOL WmiExec::Query(WCHAR* lpwsWQL, WCHAR* pszBuffer, DWORD dwBufferSize) {
    HRESULT hResult;
    IEnumWbemClassObject* pEnumerator = NULL;
    hResult = pSvc->ExecQuery(
        BSTR(TEXT("WQL")),
        BSTR(TEXT("Select * from Win32_OperatingSystem")),
        WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY,
        NULL, &pEnumerator
    );
    if (FAILED(hResult)) {
        wprintf(L"ExecQuery failed: %d\n", GetLastError());
        CoUninitialize();
        return FALSE;
    }


    hResult = CoSetProxyBlanket(
        pEnumerator,                    // Indicates the proxy to set
        RPC_C_AUTHN_DEFAULT,            // RPC_C_AUTHN_xxx
        RPC_C_AUTHZ_DEFAULT,            // RPC_C_AUTHZ_xxx
        COLE_DEFAULT_PRINCIPAL,         // Server principal name 
        RPC_C_AUTHN_LEVEL_PKT_PRIVACY,  // RPC_C_AUTHN_LEVEL_xxx 
        RPC_C_IMP_LEVEL_IMPERSONATE,    // RPC_C_IMP_LEVEL_xxx
        &coAuthIdent,                   // client identity
        EOAC_NONE                       // proxy capabilities 
    );
    if (FAILED(hResult)) {
        wprintf(L"[!] SetProxyBlanket to Enumerator failed: %d\n", GetLastError());
        CoUninitialize();
        return FALSE;
    }

    IWbemClassObject* pclsObj = NULL;
    ULONG uReture = 0;
    while (pEnumerator) {
        HRESULT hResult = pEnumerator->Next(
            WBEM_INFINITE, 1,
            &pclsObj, &uReture
        );
        if (uReture == 0)
            break;

        VARIANT vtProp;
        hResult = pclsObj->Get(L"Name", 0, &vtProp, 0, 0);
        wcout << " OS Name : " << vtProp.bstrVal << endl;

        // Get the value of the FreePhysicalMemory property
        hResult = pclsObj->Get(L"FreePhysicalMemory",
            0, &vtProp, 0, 0);
        wcout << " Free physical memory (in kilobytes): "
            << vtProp.uintVal << endl;
        VariantClear(&vtProp);

        pclsObj->Release();
        pclsObj = NULL;
    }

    pEnumerator->Release();

    CoUninitialize();
    return TRUE;
}

