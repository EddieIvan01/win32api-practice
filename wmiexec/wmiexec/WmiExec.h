#pragma once
#define _WIN32_DCOM
#include <iostream>
#include <windows.h>
#include <ctime>
#include <wbemidl.h>
#include <winnetwk.h>
#pragma comment(lib, "wbemuuid.lib")
#pragma comment(lib, "ws2_32")   
#pragma comment(lib, "Mpr.lib")
#pragma comment(lib,"Advapi32.lib")

using namespace std;


class WmiExec {
protected:
    BSTR lpwsUname = NULL;
    BSTR lpwsPwd = NULL;
    BSTR lpwsDomain = NULL;
    BSTR lpwsTarget = NULL;
    COAUTHIDENTITY coAuthIdent = { 0 };
    IWbemLocator* pLoc = NULL;
    IWbemServices* pSvc = NULL;

public:
    WmiExec(WCHAR* lpwsUname, WCHAR* lpwsPwd, WCHAR* lpwsDomain, WCHAR* lpwsTarget) :
        lpwsUname(lpwsUname),
        lpwsPwd(lpwsPwd),
        lpwsDomain(lpwsDomain),
        lpwsTarget(lpwsTarget) {
        coAuthIdent.User = (USHORT*)lpwsUname;
        coAuthIdent.UserLength = wcslen(lpwsUname);
        coAuthIdent.Password = (USHORT*)lpwsPwd;
        coAuthIdent.PasswordLength = wcslen(lpwsPwd);
        coAuthIdent.Domain = (USHORT*)lpwsDomain;
        coAuthIdent.DomainLength = wcslen(lpwsDomain);
        coAuthIdent.Flags = SEC_WINNT_AUTH_IDENTITY_UNICODE;
    }
    ~WmiExec();

    BOOL InitCOM();
    BOOL Execute(WCHAR* lpwsCommand);
    BOOL Query(WCHAR* lpwsWQL, WCHAR* pszBuffer, DWORD dwBufferSize);
};