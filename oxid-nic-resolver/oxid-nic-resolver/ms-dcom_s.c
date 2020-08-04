

/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ms-dcom.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>
#include "ms-dcom_h.h"

#define TYPE_FORMAT_STRING_SIZE   515                               
#define PROC_FORMAT_STRING_SIZE   727                               
#define EXPR_FORMAT_STRING_SIZE   57                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Ddcom_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Ddcom_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Ddcom_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Ddcom_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Ddcom_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Ddcom_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};


extern const ms2Ddcom_MIDL_TYPE_FORMAT_STRING ms2Ddcom__MIDL_TypeFormatString;
extern const ms2Ddcom_MIDL_PROC_FORMAT_STRING ms2Ddcom__MIDL_ProcFormatString;
extern const ms2Ddcom_MIDL_EXPR_FORMAT_STRING ms2Ddcom__MIDL_ExprFormatString;

/* Standard interface: __MIDL_itf_ms2Ddcom_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: IActivation, ver. 0.0,
   GUID={0x4d9f4ab8,0x7d1c,0x11cf,{0x86,0x1e,0x00,0x20,0xaf,0x6e,0x7c,0x57}} */


extern const MIDL_SERVER_INFO IActivation_ServerInfo;

extern const RPC_DISPATCH_TABLE IActivation_v0_0_DispatchTable;

static const RPC_SERVER_INTERFACE IActivation___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x4d9f4ab8,0x7d1c,0x11cf,{0x86,0x1e,0x00,0x20,0xaf,0x6e,0x7c,0x57}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&IActivation_v0_0_DispatchTable,
    0,
    0,
    0,
    &IActivation_ServerInfo,
    0x06000000
    };
RPC_IF_HANDLE IActivation_v0_0_s_ifspec = (RPC_IF_HANDLE)& IActivation___RpcServerInterface;

extern const MIDL_STUB_DESC IActivation_StubDesc;


/* Standard interface: IRemoteSCMActivator, ver. 0.0,
   GUID={0x000001A0,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_SERVER_INFO IRemoteSCMActivator_ServerInfo;

extern const RPC_DISPATCH_TABLE IRemoteSCMActivator_v0_0_DispatchTable;

static const RPC_SERVER_INTERFACE IRemoteSCMActivator___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x000001A0,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&IRemoteSCMActivator_v0_0_DispatchTable,
    0,
    0,
    0,
    &IRemoteSCMActivator_ServerInfo,
    0x06000000
    };
RPC_IF_HANDLE IRemoteSCMActivator_v0_0_s_ifspec = (RPC_IF_HANDLE)& IRemoteSCMActivator___RpcServerInterface;

extern const MIDL_STUB_DESC IRemoteSCMActivator_StubDesc;


/* Standard interface: IObjectExporter, ver. 0.0,
   GUID={0x99fcfec4,0x5260,0x101b,{0xbb,0xcb,0x00,0xaa,0x00,0x21,0x34,0x7a}} */


extern const MIDL_SERVER_INFO IObjectExporter_ServerInfo;

extern const RPC_DISPATCH_TABLE IObjectExporter_v0_0_DispatchTable;

static const RPC_SERVER_INTERFACE IObjectExporter___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x99fcfec4,0x5260,0x101b,{0xbb,0xcb,0x00,0xaa,0x00,0x21,0x34,0x7a}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&IObjectExporter_v0_0_DispatchTable,
    0,
    0,
    0,
    &IObjectExporter_ServerInfo,
    0x06000000
    };
RPC_IF_HANDLE IObjectExporter_v0_0_s_ifspec = (RPC_IF_HANDLE)& IObjectExporter___RpcServerInterface;

extern const MIDL_STUB_DESC IObjectExporter_StubDesc;


/* Standard interface: __MIDL_itf_ms2Ddcom_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: __MIDL_itf_ms2Ddcom_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ms2Ddcom_MIDL_PROC_FORMAT_STRING ms2Ddcom__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RemoteActivation */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0xa8 ),	/* X64 Stack size/offset = 168 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x62 ),	/* 98 */
/* 16 */	NdrFcShort( 0xd0 ),	/* 208 */
/* 18 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x14,		/* 20 */
/* 20 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ORPCthis */

/* 30 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter ORPCthat */

/* 36 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Parameter Clsid */

/* 42 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pwszObjectName */

/* 48 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	NdrFcShort( 0xae ),	/* Type Offset=174 */

	/* Parameter pObjectStorage */

/* 54 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 56 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 58 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter ClientImpLevel */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Mode */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Interfaces */

/* 72 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 74 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 76 */	NdrFcShort( 0xd4 ),	/* 212 */

	/* Parameter pIIDs */

/* 78 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 80 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 82 */	NdrFcShort( 0xde ),	/* Type Offset=222 */

	/* Parameter cRequestedProtseqs */

/* 84 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 86 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 88 */	NdrFcShort( 0x10c ),	/* 268 */

	/* Parameter aRequestedProtseqs */

/* 90 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 92 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 94 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Parameter pOxid */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 100 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppdsaOxidBindings */

/* 102 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 106 */	NdrFcShort( 0x130 ),	/* Type Offset=304 */

	/* Parameter pipidRemUnknown */

/* 108 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 110 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 112 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pAuthnHint */

/* 114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x78 ),	/* X64 Stack size/offset = 120 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pServerVersion */

/* 120 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 122 */	NdrFcShort( 0x80 ),	/* X64 Stack size/offset = 128 */
/* 124 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter phr */

/* 126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 128 */	NdrFcShort( 0x88 ),	/* X64 Stack size/offset = 136 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppInterfaceData */

/* 132 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 134 */	NdrFcShort( 0x90 ),	/* X64 Stack size/offset = 144 */
/* 136 */	NdrFcShort( 0x168 ),	/* Type Offset=360 */

	/* Parameter pResults */

/* 138 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 140 */	NdrFcShort( 0x98 ),	/* X64 Stack size/offset = 152 */
/* 142 */	NdrFcShort( 0x196 ),	/* Type Offset=406 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0xa0 ),	/* X64 Stack size/offset = 160 */
/* 148 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Opnum0NotUsedOnWire */

/* 150 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 160 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 170 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum1NotUsedOnWire */

/* 180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 200 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum2NotUsedOnWire */

/* 210 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x2 ),	/* 2 */
/* 218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 220 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 230 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RemoteGetClassObject */

/* 240 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x3 ),	/* 3 */
/* 248 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 250 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 258 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 260 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 262 */	NdrFcShort( 0x1 ),	/* 1 */
/* 264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter orpcthis */

/* 270 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 272 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 274 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter orpcthat */

/* 276 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 278 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 280 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Parameter pActProperties */

/* 282 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 284 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 286 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter ppActProperties */

/* 288 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 290 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 292 */	NdrFcShort( 0x1ac ),	/* Type Offset=428 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteCreateInstance */

/* 300 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 308 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 310 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 312 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 318 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 320 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 322 */	NdrFcShort( 0x1 ),	/* 1 */
/* 324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter orpcthis */

/* 330 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 334 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter orpcthat */

/* 336 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 340 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Parameter pUnkOuter */

/* 342 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 344 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 346 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter pActProperties */

/* 348 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 350 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 352 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter ppActProperties */

/* 354 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 356 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 358 */	NdrFcShort( 0x1ac ),	/* Type Offset=428 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ResolveOxid */

/* 366 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 368 */	NdrFcLong( 0x1 ),	/* 1 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 376 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 380 */	NdrFcShort( 0x2a ),	/* 42 */
/* 382 */	NdrFcShort( 0x68 ),	/* 104 */
/* 384 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 386 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 388 */	NdrFcShort( 0x1 ),	/* 1 */
/* 390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pOxid */

/* 396 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 398 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 400 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter cRequestedProtseqs */

/* 402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 404 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 406 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arRequestedProtseqs */

/* 408 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 410 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 412 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Parameter ppdsaOxidBindings */

/* 414 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 416 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 418 */	NdrFcShort( 0x130 ),	/* Type Offset=304 */

	/* Parameter pipidRemUnknown */

/* 420 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 422 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 424 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pAuthnHint */

/* 426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 428 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 434 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 436 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure SimplePing */

/* 438 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 440 */	NdrFcLong( 0x1 ),	/* 1 */
/* 444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 446 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 448 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 450 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 456 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 458 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSetId */

/* 468 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 470 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 472 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 476 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 478 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ComplexPing */

/* 480 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 482 */	NdrFcLong( 0x1 ),	/* 1 */
/* 486 */	NdrFcShort( 0x2 ),	/* 2 */
/* 488 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 490 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 492 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 494 */	NdrFcShort( 0x36 ),	/* 54 */
/* 496 */	NdrFcShort( 0x46 ),	/* 70 */
/* 498 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 500 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x1 ),	/* 1 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSetId */

/* 510 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 512 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 514 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter SequenceNum */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 520 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cAddToSet */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 526 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cDelFromSet */

/* 528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 530 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 532 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter AddToSet */

/* 534 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 536 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 538 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Parameter DelFromSet */

/* 540 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 542 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 544 */	NdrFcShort( 0x1e4 ),	/* Type Offset=484 */

	/* Parameter pPingBackoffFactor */

/* 546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 548 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 550 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 556 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerAlive */

/* 558 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 560 */	NdrFcLong( 0x1 ),	/* 1 */
/* 564 */	NdrFcShort( 0x3 ),	/* 3 */
/* 566 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 568 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 576 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 578 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 590 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 592 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ResolveOxid2 */

/* 594 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 596 */	NdrFcLong( 0x1 ),	/* 1 */
/* 600 */	NdrFcShort( 0x4 ),	/* 4 */
/* 602 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 604 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 606 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 608 */	NdrFcShort( 0x2a ),	/* 42 */
/* 610 */	NdrFcShort( 0x90 ),	/* 144 */
/* 612 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 614 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pOxid */

/* 624 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 628 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter cRequestedProtseqs */

/* 630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 632 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 634 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arRequestedProtseqs */

/* 636 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 640 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Parameter ppdsaOxidBindings */

/* 642 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 644 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 646 */	NdrFcShort( 0x130 ),	/* Type Offset=304 */

	/* Parameter pipidRemUnknown */

/* 648 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 650 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 652 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter pAuthnHint */

/* 654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pComVersion */

/* 660 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 662 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 664 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 668 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 670 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerAlive2 */

/* 672 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 674 */	NdrFcLong( 0x1 ),	/* 1 */
/* 678 */	NdrFcShort( 0x5 ),	/* 5 */
/* 680 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 682 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 684 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x4c ),	/* 76 */
/* 690 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 692 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pComVersion */

/* 702 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 706 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter ppdsaOrBindings */

/* 708 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 710 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 712 */	NdrFcShort( 0x130 ),	/* Type Offset=304 */

	/* Parameter pReserved */

/* 714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 716 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 724 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Ddcom_MIDL_TYPE_FORMAT_STRING ms2Ddcom__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x78 ),	/* Offset= 120 (124) */
/*  6 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x4 ),	/* 4 */
/* 10 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 12 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 14 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 20 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 22 */	NdrFcShort( 0x10 ),	/* 16 */
/* 24 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 26 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 28 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (14) */
			0x5b,		/* FC_END */
/* 32 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 34 */	NdrFcShort( 0x1 ),	/* 1 */
/* 36 */	0x0,		/* Corr desc:  field,  */
			0x5d,		/* FC_EXPR */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 42 */	0x0 , 
			0x0,		/* 0 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcLong( 0x0 ),	/* 0 */
/* 52 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 54 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 56 */	NdrFcShort( 0x14 ),	/* 20 */
/* 58 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (32) */
/* 60 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 62 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (20) */
/* 64 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 66 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	0x10,		/* Corr desc:  field pointer,  */
			0x5d,		/* FC_EXPR */
/* 72 */	NdrFcShort( 0x1 ),	/* 1 */
/* 74 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 76 */	0x0 , 
			0x0,		/* 0 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcLong( 0x0 ),	/* 0 */
/* 86 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 90 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 92 */	0x0 , 
			0x0,		/* 0 */
/* 94 */	NdrFcLong( 0x0 ),	/* 0 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	
			0x12, 0x0,	/* FC_UP */
/* 104 */	NdrFcShort( 0xffce ),	/* Offset= -50 (54) */
/* 106 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 108 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x10 ),	/* 16 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x6 ),	/* Offset= 6 (120) */
/* 116 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 118 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 120 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 122 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (66) */
/* 124 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 126 */	NdrFcShort( 0x28 ),	/* 40 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x10 ),	/* Offset= 16 (146) */
/* 132 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 134 */	NdrFcShort( 0xff80 ),	/* Offset= -128 (6) */
/* 136 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 138 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 140 */	NdrFcShort( 0xff88 ),	/* Offset= -120 (20) */
/* 142 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 146 */	
			0x12, 0x0,	/* FC_UP */
/* 148 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (108) */
/* 150 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 152 */	NdrFcShort( 0x2 ),	/* Offset= 2 (154) */
/* 154 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 156 */	NdrFcShort( 0x10 ),	/* 16 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x6 ),	/* Offset= 6 (166) */
/* 162 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 164 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 166 */	
			0x12, 0x0,	/* FC_UP */
/* 168 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (108) */
/* 170 */	
			0x11, 0x0,	/* FC_RP */
/* 172 */	NdrFcShort( 0xff68 ),	/* Offset= -152 (20) */
/* 174 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 176 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x12, 0x0,	/* FC_UP */
/* 180 */	NdrFcShort( 0x18 ),	/* Offset= 24 (204) */
/* 182 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 186 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 188 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 190 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 192 */	0x0 , 
			0x0,		/* 0 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 202 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 204 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0x4 ),	/* 4 */
/* 208 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (182) */
/* 210 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 212 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 214 */	NdrFcLong( 0x1 ),	/* 1 */
/* 218 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 222 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (226) */
/* 226 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 232 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 234 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 236 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 238 */	NdrFcLong( 0x1 ),	/* 1 */
/* 242 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 246 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 250 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 252 */	0x0 , 
			0x0,		/* 0 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 262 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 264 */	NdrFcShort( 0xff0c ),	/* Offset= -244 (20) */
/* 266 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 268 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 274 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 278 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 280 */	NdrFcShort( 0x2 ),	/* 2 */
/* 282 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 284 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 286 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 288 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 298 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 300 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 302 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 304 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 306 */	NdrFcShort( 0x2 ),	/* Offset= 2 (308) */
/* 308 */	
			0x12, 0x0,	/* FC_UP */
/* 310 */	NdrFcShort( 0x18 ),	/* Offset= 24 (334) */
/* 312 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 314 */	NdrFcShort( 0x2 ),	/* 2 */
/* 316 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 318 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 320 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 322 */	0x0 , 
			0x0,		/* 0 */
/* 324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 332 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 334 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 336 */	NdrFcShort( 0x4 ),	/* 4 */
/* 338 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (312) */
/* 340 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 342 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 344 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 346 */	NdrFcShort( 0xfeba ),	/* Offset= -326 (20) */
/* 348 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 350 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 352 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 354 */	NdrFcShort( 0xfea4 ),	/* Offset= -348 (6) */
/* 356 */	
			0x11, 0x0,	/* FC_RP */
/* 358 */	NdrFcShort( 0x2 ),	/* Offset= 2 (360) */
/* 360 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 366 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 368 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 370 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 372 */	NdrFcLong( 0x1 ),	/* 1 */
/* 376 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 380 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 384 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 386 */	0x0 , 
			0x0,		/* 0 */
/* 388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	
			0x12, 0x0,	/* FC_UP */
/* 398 */	NdrFcShort( 0xff3e ),	/* Offset= -194 (204) */
/* 400 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 402 */	
			0x11, 0x0,	/* FC_RP */
/* 404 */	NdrFcShort( 0x2 ),	/* Offset= 2 (406) */
/* 406 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 408 */	NdrFcShort( 0x4 ),	/* 4 */
/* 410 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 412 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 414 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 416 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 418 */	NdrFcLong( 0x1 ),	/* 1 */
/* 422 */	NdrFcLong( 0x8000 ),	/* 32768 */
/* 426 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 428 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 430 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (178) */
/* 432 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 434 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 436 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 438 */	NdrFcShort( 0x2 ),	/* 2 */
/* 440 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 442 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 444 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 446 */	0x0 , 
			0x0,		/* 0 */
/* 448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 458 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 460 */	NdrFcShort( 0x2 ),	/* Offset= 2 (462) */
/* 462 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 466 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 468 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 470 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 472 */	0x0 , 
			0x0,		/* 0 */
/* 474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 482 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 484 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0x2 ),	/* Offset= 2 (488) */
/* 488 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 492 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 494 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 496 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 498 */	0x0 , 
			0x0,		/* 0 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 508 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 510 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 512 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const ms2Ddcom_MIDL_EXPR_FORMAT_STRING ms2Ddcom__MIDL_ExprFormatString =
    {
        0,
        {
			0x4,		/* FC_EXPR_OPER */
			0x1b,		/* OP_AND */
/*  2 */	0x0,		/*  */
			0x0,		/* 0 */
/*  4 */	0x4,		/* FC_EXPR_OPER */
			0xe,		/* OP_PLUS */
/*  6 */	0x0,		/*  */
			0x0,		/* 0 */
/*  8 */	0x3,		/* FC_EXPR_VAR */
			0x9,		/* FC_ULONG */
/* 10 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 12 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcLong( 0x7 ),	/* 7 */
/* 20 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcLong( 0xfffffff8 ),	/* -8 */
/* 28 */	0x4,		/* FC_EXPR_OPER */
			0x1b,		/* OP_AND */
/* 30 */	0x0,		/*  */
			0x0,		/* 0 */
/* 32 */	0x4,		/* FC_EXPR_OPER */
			0xe,		/* OP_PLUS */
/* 34 */	0x0,		/*  */
			0x0,		/* 0 */
/* 36 */	0x3,		/* FC_EXPR_VAR */
			0x9,		/* FC_ULONG */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 42 */	NdrFcShort( 0x0 ),	/* 0 */
/* 44 */	NdrFcLong( 0x1 ),	/* 1 */
/* 48 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcLong( 0xfffffffe ),	/* -2 */

			0x0
        }
    };

static const unsigned short ms2Ddcom__MIDL_ExprFormatStringOffsetTable[] =
{
0,
28,
};

static const NDR_EXPR_DESC  ms2Ddcom_ExprDesc = 
 {
ms2Ddcom__MIDL_ExprFormatStringOffsetTable,
ms2Ddcom__MIDL_ExprFormatString.Format
};

static const unsigned short IActivation_FormatStringOffsetTable[] =
    {
    0
    };


static const RPC_DISPATCH_FUNCTION IActivation_table[] =
    {
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE IActivation_v0_0_DispatchTable = 
    {
    1,
    (RPC_DISPATCH_FUNCTION*)IActivation_table
    };

static const unsigned short IRemoteSCMActivator_FormatStringOffsetTable[] =
    {
    150,
    180,
    210,
    240,
    300
    };


static const RPC_DISPATCH_FUNCTION IRemoteSCMActivator_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE IRemoteSCMActivator_v0_0_DispatchTable = 
    {
    5,
    (RPC_DISPATCH_FUNCTION*)IRemoteSCMActivator_table
    };

static const unsigned short IObjectExporter_FormatStringOffsetTable[] =
    {
    366,
    438,
    480,
    558,
    594,
    672
    };


static const RPC_DISPATCH_FUNCTION IObjectExporter_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE IObjectExporter_v0_0_DispatchTable = 
    {
    6,
    (RPC_DISPATCH_FUNCTION*)IObjectExporter_table
    };


#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC server stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ms-dcom.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag135_t;
extern const __midl_frag135_t __midl_frag135;

typedef 
NDR64_FORMAT_CHAR
__midl_frag134_t;
extern const __midl_frag134_t __midl_frag134;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag133_t;
extern const __midl_frag133_t __midl_frag133;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag132_t;
extern const __midl_frag132_t __midl_frag132;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag131_t;
extern const __midl_frag131_t __midl_frag131;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag130_t;
extern const __midl_frag130_t __midl_frag130;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag129_t;
extern const __midl_frag129_t __midl_frag129;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
NDR64_FORMAT_CHAR
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag120_t;
extern const __midl_frag120_t __midl_frag120;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag119_t;
extern const __midl_frag119_t __midl_frag119;

typedef 
NDR64_FORMAT_CHAR
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag115_t;
extern const __midl_frag115_t __midl_frag115;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag113_t;
extern const __midl_frag113_t __midl_frag113;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag110_t;
extern const __midl_frag110_t __midl_frag110;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag107_t;
extern const __midl_frag107_t __midl_frag107;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag106_t;
extern const __midl_frag106_t __midl_frag106;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag104_t;
extern const __midl_frag104_t __midl_frag104;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag103_t;
extern const __midl_frag103_t __midl_frag103;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag102_t;
extern const __midl_frag102_t __midl_frag102;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag92_t;
extern const __midl_frag92_t __midl_frag92;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag76_t;
extern const __midl_frag76_t __midl_frag76;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag73_t;
extern const __midl_frag73_t __midl_frag73;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag63_t;
extern const __midl_frag63_t __midl_frag63;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag58_t;
extern const __midl_frag58_t __midl_frag58;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag57_t;
extern const __midl_frag57_t __midl_frag57;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag56_t;
extern const __midl_frag56_t __midl_frag56;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag43_t;
extern const __midl_frag43_t __midl_frag43;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag41_t;
extern const __midl_frag41_t __midl_frag41;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag37_t;
extern const __midl_frag37_t __midl_frag37;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag35_t;
extern const __midl_frag35_t __midl_frag35;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag34_t;
extern const __midl_frag34_t __midl_frag34;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag33_t;
extern const __midl_frag33_t __midl_frag33;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag31_t;
extern const __midl_frag31_t __midl_frag31;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag30_t;
extern const __midl_frag30_t __midl_frag30;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag29_t;
extern const __midl_frag29_t __midl_frag29;

typedef 
NDR64_FORMAT_CHAR
__midl_frag26_t;
extern const __midl_frag26_t __midl_frag26;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag25_t;
extern const __midl_frag25_t __midl_frag25;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag24_t;
extern const __midl_frag24_t __midl_frag24;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag20_t;
extern const __midl_frag20_t __midl_frag20;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag19_t;
extern const __midl_frag19_t __midl_frag19;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag18_t;
extern const __midl_frag18_t __midl_frag18;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_OPERATOR frag3;
    struct _NDR64_EXPR_VAR frag4;
    struct _NDR64_EXPR_NOOP frag5;
    struct _NDR64_EXPR_CONST64 frag6;
    struct _NDR64_EXPR_CONST64 frag7;
}
__midl_frag10_t;
extern const __midl_frag10_t __midl_frag10;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag9_t;
extern const __midl_frag9_t __midl_frag9;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_OPERATOR frag3;
    struct _NDR64_EXPR_VAR frag4;
    struct _NDR64_EXPR_NOOP frag5;
    struct _NDR64_EXPR_CONST64 frag6;
    struct _NDR64_EXPR_CONST64 frag7;
}
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag5_t;
extern const __midl_frag5_t __midl_frag5;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_MEMPAD_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
    } frag2;
}
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
    struct _NDR64_PARAM_FORMAT frag14;
    struct _NDR64_PARAM_FORMAT frag15;
    struct _NDR64_PARAM_FORMAT frag16;
    struct _NDR64_PARAM_FORMAT frag17;
    struct _NDR64_PARAM_FORMAT frag18;
    struct _NDR64_PARAM_FORMAT frag19;
    struct _NDR64_PARAM_FORMAT frag20;
    struct _NDR64_PARAM_FORMAT frag21;
    struct _NDR64_PARAM_FORMAT frag22;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag135_t __midl_frag135 =
0x13    /* FC64_ERROR_STATUS_T */;

static const __midl_frag134_t __midl_frag134 =
0x5    /* FC64_INT32 */;

static const __midl_frag133_t __midl_frag133 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag134
};

static const __midl_frag132_t __midl_frag132 =
{ 
/* *DUALSTRINGARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag41
};

static const __midl_frag131_t __midl_frag131 =
{ 
/* **DUALSTRINGARRAY */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag132
};

static const __midl_frag130_t __midl_frag130 =
{ 
/* *COMVERSION */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag49
};

static const __midl_frag129_t __midl_frag129 =
{ 
/* ServerAlive2 */
    { 
    /* ServerAlive2 */      /* procedure ServerAlive2 */
        (NDR64_UINT32) 21626944 /* 0x14a0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 84 /* 0x54 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pComVersion */      /* parameter pComVersion */
        &__midl_frag49,
        { 
        /* pComVersion */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppdsaOrBindings */      /* parameter ppdsaOrBindings */
        &__midl_frag131,
        { 
        /* ppdsaOrBindings */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pReserved */      /* parameter pReserved */
        &__midl_frag134,
        { 
        /* pReserved */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* error_status_t */      /* parameter error_status_t */
        &__midl_frag135,
        { 
        /* error_status_t */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* *IID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag19
};

static const __midl_frag121_t __midl_frag121 =
0x4    /* FC64_INT16 */;

static const __midl_frag120_t __midl_frag120 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag119_t __midl_frag119 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag120
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag121
    }
};

static const __midl_frag117_t __midl_frag117 =
0x7    /* FC64_INT64 */;

static const __midl_frag116_t __midl_frag116 =
{ 
/* *OXID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag117
};

static const __midl_frag115_t __midl_frag115 =
{ 
/* ResolveOxid2 */
    { 
    /* ResolveOxid2 */      /* procedure ResolveOxid2 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 46 /* 0x2e */,
        (NDR64_UINT32) 156 /* 0x9c */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pOxid */      /* parameter pOxid */
        &__midl_frag117,
        { 
        /* pOxid */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cRequestedProtseqs */      /* parameter cRequestedProtseqs */
        &__midl_frag121,
        { 
        /* cRequestedProtseqs */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arRequestedProtseqs */      /* parameter arRequestedProtseqs */
        &__midl_frag119,
        { 
        /* arRequestedProtseqs */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppdsaOxidBindings */      /* parameter ppdsaOxidBindings */
        &__midl_frag131,
        { 
        /* ppdsaOxidBindings */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pipidRemUnknown */      /* parameter pipidRemUnknown */
        &__midl_frag19,
        { 
        /* pipidRemUnknown */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pAuthnHint */      /* parameter pAuthnHint */
        &__midl_frag134,
        { 
        /* pAuthnHint */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pComVersion */      /* parameter pComVersion */
        &__midl_frag49,
        { 
        /* pComVersion */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* error_status_t */      /* parameter error_status_t */
        &__midl_frag135,
        { 
        /* error_status_t */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag113_t __midl_frag113 =
{ 
/* ServerAlive */
    { 
    /* ServerAlive */      /* procedure ServerAlive */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* error_status_t */      /* parameter error_status_t */
        &__midl_frag135,
        { 
        /* error_status_t */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag110_t __midl_frag110 =
{ 
/* *short */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag121
};

static const __midl_frag108_t __midl_frag108 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag107_t __midl_frag107 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag108
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag117
    }
};

static const __midl_frag106_t __midl_frag106 =
{ 
/* struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag107
};

static const __midl_frag104_t __midl_frag104 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag103_t __midl_frag103 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag104
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag117
    }
};

static const __midl_frag102_t __midl_frag102 =
{ 
/* struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag103
};

static const __midl_frag96_t __midl_frag96 =
{ 
/* ComplexPing */
    { 
    /* ComplexPing */      /* procedure ComplexPing */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 58 /* 0x3a */,
        (NDR64_UINT32) 78 /* 0x4e */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pSetId */      /* parameter pSetId */
        &__midl_frag117,
        { 
        /* pSetId */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* SequenceNum */      /* parameter SequenceNum */
        &__midl_frag121,
        { 
        /* SequenceNum */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* cAddToSet */      /* parameter cAddToSet */
        &__midl_frag121,
        { 
        /* cAddToSet */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cDelFromSet */      /* parameter cDelFromSet */
        &__midl_frag121,
        { 
        /* cDelFromSet */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* AddToSet */      /* parameter AddToSet */
        &__midl_frag102,
        { 
        /* AddToSet */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DelFromSet */      /* parameter DelFromSet */
        &__midl_frag106,
        { 
        /* DelFromSet */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pPingBackoffFactor */      /* parameter pPingBackoffFactor */
        &__midl_frag121,
        { 
        /* pPingBackoffFactor */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* error_status_t */      /* parameter error_status_t */
        &__midl_frag135,
        { 
        /* error_status_t */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag92_t __midl_frag92 =
{ 
/* SimplePing */
    { 
    /* SimplePing */      /* procedure SimplePing */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pSetId */      /* parameter pSetId */
        &__midl_frag117,
        { 
        /* pSetId */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* error_status_t */      /* parameter error_status_t */
        &__midl_frag135,
        { 
        /* error_status_t */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag79_t __midl_frag79 =
{ 
/* ResolveOxid */
    { 
    /* ResolveOxid */      /* procedure ResolveOxid */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 46 /* 0x2e */,
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pOxid */      /* parameter pOxid */
        &__midl_frag117,
        { 
        /* pOxid */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cRequestedProtseqs */      /* parameter cRequestedProtseqs */
        &__midl_frag121,
        { 
        /* cRequestedProtseqs */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arRequestedProtseqs */      /* parameter arRequestedProtseqs */
        &__midl_frag119,
        { 
        /* arRequestedProtseqs */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppdsaOxidBindings */      /* parameter ppdsaOxidBindings */
        &__midl_frag131,
        { 
        /* ppdsaOxidBindings */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pipidRemUnknown */      /* parameter pipidRemUnknown */
        &__midl_frag19,
        { 
        /* pipidRemUnknown */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pAuthnHint */      /* parameter pAuthnHint */
        &__midl_frag134,
        { 
        /* pAuthnHint */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* error_status_t */      /* parameter error_status_t */
        &__midl_frag135,
        { 
        /* error_status_t */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* *MInterfacePointer */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag23
};

static const __midl_frag76_t __midl_frag76 =
{ 
/* **MInterfacePointer */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag77
};

static const __midl_frag73_t __midl_frag73 =
{ 
/* *ORPCTHAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag16
};

static const __midl_frag72_t __midl_frag72 =
{ 
/* *ORPCTHIS */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag71_t __midl_frag71 =
{ 
/* RemoteCreateInstance */
    { 
    /* RemoteCreateInstance */      /* procedure RemoteCreateInstance */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* orpcthis */      /* parameter orpcthis */
        &__midl_frag4,
        { 
        /* orpcthis */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* orpcthat */      /* parameter orpcthat */
        &__midl_frag16,
        { 
        /* orpcthat */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pUnkOuter */      /* parameter pUnkOuter */
        &__midl_frag77,
        { 
        /* pUnkOuter */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pActProperties */      /* parameter pActProperties */
        &__midl_frag77,
        { 
        /* pActProperties */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ppActProperties */      /* parameter ppActProperties */
        &__midl_frag76,
        { 
        /* ppActProperties */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag134,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/* RemoteGetClassObject */
    { 
    /* RemoteGetClassObject */      /* procedure RemoteGetClassObject */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* orpcthis */      /* parameter orpcthis */
        &__midl_frag4,
        { 
        /* orpcthis */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* orpcthat */      /* parameter orpcthat */
        &__midl_frag16,
        { 
        /* orpcthat */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pActProperties */      /* parameter pActProperties */
        &__midl_frag77,
        { 
        /* pActProperties */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppActProperties */      /* parameter ppActProperties */
        &__midl_frag76,
        { 
        /* ppActProperties */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag134,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag63_t __midl_frag63 =
{ 
/* Opnum2NotUsedOnWire */
    { 
    /* Opnum2NotUsedOnWire */      /* procedure Opnum2NotUsedOnWire */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 8 /* 0x8 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    }
};

static const __midl_frag58_t __midl_frag58 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 1 /* 0x1 */,
        (NDR64_INT64) 32768 /* 0x8000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */  /* Offset */
    }
};

static const __midl_frag57_t __midl_frag57 =
{ 
/* *HRESULT */
    { 
    /* *HRESULT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *HRESULT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag58
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag134
    }
};

static const __midl_frag56_t __midl_frag56 =
{ 
/* *HRESULT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag57
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* **MInterfacePointer */
    { 
    /* **MInterfacePointer */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **MInterfacePointer */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag58
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *MInterfacePointer */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag23
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag77
    }
};

static const __midl_frag52_t __midl_frag52 =
{ 
/* **MInterfacePointer */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag53
};

static const __midl_frag49_t __midl_frag49 =
{ 
/* COMVERSION */
    { 
    /* COMVERSION */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* COMVERSION */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag43_t __midl_frag43 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag42_t __midl_frag42 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag43
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag121
    }
};

static const __midl_frag41_t __midl_frag41 =
{ 
/* DUALSTRINGARRAY */
    { 
    /* DUALSTRINGARRAY */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* DUALSTRINGARRAY */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag42
    }
};

static const __midl_frag37_t __midl_frag37 =
{ 
/* *OXID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag117
};

static const __midl_frag35_t __midl_frag35 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 32768 /* 0x8000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 80 /* 0x50 */  /* Offset */
    }
};

static const __midl_frag34_t __midl_frag34 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag35
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag121
    }
};

static const __midl_frag33_t __midl_frag33 =
{ 
/* short */
    0xa4,    /* FC64_RANGE */
    0x4,    /* FC64_INT16 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 32768 /* 0x8000 */
};

static const __midl_frag31_t __midl_frag31 =
{ 
/* *IID */
    { 
    /* *IID */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *IID */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag58
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag19
    }
};

static const __midl_frag30_t __midl_frag30 =
{ 
/* *IID */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag31
};

static const __midl_frag29_t __midl_frag29 =
{ 
/* DWORD */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 1 /* 0x1 */,
    (NDR64_INT64) 32768 /* 0x8000 */
};

static const __midl_frag26_t __midl_frag26 =
0x2    /* FC64_INT8 */;

static const __midl_frag25_t __midl_frag25 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag24_t __midl_frag24 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag25
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag26
    }
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* MInterfacePointer */
    { 
    /* MInterfacePointer */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* MInterfacePointer */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag24
    }
};

static const __midl_frag21_t __midl_frag21 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag20_t __midl_frag20 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag21
};

static const __midl_frag19_t __midl_frag19 =
{ 
/* IID */
    { 
    /* IID */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* IID */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag18_t __midl_frag18 =
{ 
/* *IID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag19
};

static const __midl_frag17_t __midl_frag17 =
{ 
/*  */
    { 
    /* *ORPC_EXTENT_ARRAY */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag5
    }
};

static const __midl_frag16_t __midl_frag16 =
{ 
/* ORPCTHAT */
    { 
    /* ORPCTHAT */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* ORPCTHAT */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag17,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag14_t __midl_frag14 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* *ORPC_EXTENT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag8
};

static const __midl_frag10_t __midl_frag10 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x1b,    /* OP_AND */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0xe,    /* OP_PLUS */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 7 /* 0x7 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 18446744073709551608 /* 0xfffffffffffffff8 */
    }
};

static const __midl_frag9_t __midl_frag9 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag10
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag26
    }
};

static const __midl_frag8_t __midl_frag8 =
{ 
/* ORPC_EXTENT */
    { 
    /* ORPC_EXTENT */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* ORPC_EXTENT */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 20 /* 0x14 */,
        &__midl_frag9
    }
};

static const __midl_frag7_t __midl_frag7 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x1b,    /* OP_AND */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0xe,    /* OP_PLUS */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 18446744073709551614 /* 0xfffffffffffffffe */
    }
};

static const __midl_frag6_t __midl_frag6 =
{ 
/* **ORPC_EXTENT */
    { 
    /* **ORPC_EXTENT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **ORPC_EXTENT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag7
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *ORPC_EXTENT */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag8
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag12
    }
};

static const __midl_frag5_t __midl_frag5 =
{ 
/* ORPC_EXTENT_ARRAY */
    { 
    /* ORPC_EXTENT_ARRAY */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* ORPC_EXTENT_ARRAY */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* **ORPC_EXTENT */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag6
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* ORPCTHIS */
    { 
    /* ORPCTHIS */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* ORPCTHIS */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag17,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag14
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* RemoteActivation */
    { 
    /* RemoteActivation */      /* procedure RemoteActivation */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 168 /* 0xa8 */ ,  /* Stack size */
        (NDR64_UINT32) 102 /* 0x66 */,
        (NDR64_UINT32) 228 /* 0xe4 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 20 /* 0x14 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ORPCthis */      /* parameter ORPCthis */
        &__midl_frag4,
        { 
        /* ORPCthis */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ORPCthat */      /* parameter ORPCthat */
        &__midl_frag16,
        { 
        /* ORPCthat */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Clsid */      /* parameter Clsid */
        &__midl_frag19,
        { 
        /* Clsid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pwszObjectName */      /* parameter pwszObjectName */
        &__midl_frag20,
        { 
        /* pwszObjectName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pObjectStorage */      /* parameter pObjectStorage */
        &__midl_frag77,
        { 
        /* pObjectStorage */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* ClientImpLevel */      /* parameter ClientImpLevel */
        &__midl_frag134,
        { 
        /* ClientImpLevel */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* Mode */      /* parameter Mode */
        &__midl_frag134,
        { 
        /* Mode */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* Interfaces */      /* parameter Interfaces */
        &__midl_frag29,
        { 
        /* Interfaces */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* pIIDs */      /* parameter pIIDs */
        &__midl_frag30,
        { 
        /* pIIDs */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* cRequestedProtseqs */      /* parameter cRequestedProtseqs */
        &__midl_frag33,
        { 
        /* cRequestedProtseqs */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* aRequestedProtseqs */      /* parameter aRequestedProtseqs */
        &__midl_frag34,
        { 
        /* aRequestedProtseqs */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* pOxid */      /* parameter pOxid */
        &__midl_frag117,
        { 
        /* pOxid */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    },
    { 
    /* ppdsaOxidBindings */      /* parameter ppdsaOxidBindings */
        &__midl_frag131,
        { 
        /* ppdsaOxidBindings */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        104 /* 0x68 */,   /* Stack offset */
    },
    { 
    /* pipidRemUnknown */      /* parameter pipidRemUnknown */
        &__midl_frag19,
        { 
        /* pipidRemUnknown */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        112 /* 0x70 */,   /* Stack offset */
    },
    { 
    /* pAuthnHint */      /* parameter pAuthnHint */
        &__midl_frag134,
        { 
        /* pAuthnHint */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        120 /* 0x78 */,   /* Stack offset */
    },
    { 
    /* pServerVersion */      /* parameter pServerVersion */
        &__midl_frag49,
        { 
        /* pServerVersion */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        128 /* 0x80 */,   /* Stack offset */
    },
    { 
    /* phr */      /* parameter phr */
        &__midl_frag134,
        { 
        /* phr */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        136 /* 0x88 */,   /* Stack offset */
    },
    { 
    /* ppInterfaceData */      /* parameter ppInterfaceData */
        &__midl_frag53,
        { 
        /* ppInterfaceData */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        144 /* 0x90 */,   /* Stack offset */
    },
    { 
    /* pResults */      /* parameter pResults */
        &__midl_frag57,
        { 
        /* pResults */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        152 /* 0x98 */,   /* Stack offset */
    },
    { 
    /* error_status_t */      /* parameter error_status_t */
        &__midl_frag135,
        { 
        /* error_status_t */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        160 /* 0xa0 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const FormatInfoRef IActivation_Ndr64ProcTable[] =
    {
    &__midl_frag2
    };


static const MIDL_STUB_DESC IActivation_StubDesc = 
    {
    (void *)& IActivation___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    ms2Ddcom__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& IActivation_ServerInfo,   /* proxy/server info */
    &ms2Ddcom_ExprDesc
    };

static const RPC_DISPATCH_FUNCTION IActivation_NDR64__table[] =
    {
    NdrServerCallAll,
    0
    };
static const RPC_DISPATCH_TABLE IActivation_NDR64__v0_0_DispatchTable = 
    {
    1,
    (RPC_DISPATCH_FUNCTION*)IActivation_NDR64__table
    };

static const MIDL_SYNTAX_INFO IActivation_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&IActivation_v0_0_DispatchTable,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    IActivation_FormatStringOffsetTable,
    ms2Ddcom__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    (RPC_DISPATCH_TABLE*)&IActivation_NDR64__v0_0_DispatchTable,
    0 ,
    (unsigned short *) IActivation_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };


static const SERVER_ROUTINE IActivation_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RemoteActivation
    };

static const MIDL_SERVER_INFO IActivation_ServerInfo = 
    {
    &IActivation_StubDesc,
    IActivation_ServerRoutineTable,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    (unsigned short *) IActivation_FormatStringOffsetTable,
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IActivation_SyntaxInfo
    };

static const FormatInfoRef IRemoteSCMActivator_Ndr64ProcTable[] =
    {
    &__midl_frag63,
    &__midl_frag63,
    &__midl_frag63,
    &__midl_frag64,
    &__midl_frag71
    };


static const MIDL_STUB_DESC IRemoteSCMActivator_StubDesc = 
    {
    (void *)& IRemoteSCMActivator___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    ms2Ddcom__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& IRemoteSCMActivator_ServerInfo,   /* proxy/server info */
    &ms2Ddcom_ExprDesc
    };

static const RPC_DISPATCH_FUNCTION IRemoteSCMActivator_NDR64__table[] =
    {
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    0
    };
static const RPC_DISPATCH_TABLE IRemoteSCMActivator_NDR64__v0_0_DispatchTable = 
    {
    5,
    (RPC_DISPATCH_FUNCTION*)IRemoteSCMActivator_NDR64__table
    };

static const MIDL_SYNTAX_INFO IRemoteSCMActivator_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&IRemoteSCMActivator_v0_0_DispatchTable,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    IRemoteSCMActivator_FormatStringOffsetTable,
    ms2Ddcom__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    (RPC_DISPATCH_TABLE*)&IRemoteSCMActivator_NDR64__v0_0_DispatchTable,
    0 ,
    (unsigned short *) IRemoteSCMActivator_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };


static const SERVER_ROUTINE IRemoteSCMActivator_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)Opnum0NotUsedOnWire,
    (SERVER_ROUTINE)Opnum1NotUsedOnWire,
    (SERVER_ROUTINE)Opnum2NotUsedOnWire,
    (SERVER_ROUTINE)RemoteGetClassObject,
    (SERVER_ROUTINE)RemoteCreateInstance
    };

static const MIDL_SERVER_INFO IRemoteSCMActivator_ServerInfo = 
    {
    &IRemoteSCMActivator_StubDesc,
    IRemoteSCMActivator_ServerRoutineTable,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    (unsigned short *) IRemoteSCMActivator_FormatStringOffsetTable,
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IRemoteSCMActivator_SyntaxInfo
    };

static const FormatInfoRef IObjectExporter_Ndr64ProcTable[] =
    {
    &__midl_frag79,
    &__midl_frag92,
    &__midl_frag96,
    &__midl_frag113,
    &__midl_frag115,
    &__midl_frag129
    };


static const MIDL_STUB_DESC IObjectExporter_StubDesc = 
    {
    (void *)& IObjectExporter___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    ms2Ddcom__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& IObjectExporter_ServerInfo,   /* proxy/server info */
    &ms2Ddcom_ExprDesc
    };

static const RPC_DISPATCH_FUNCTION IObjectExporter_NDR64__table[] =
    {
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    0
    };
static const RPC_DISPATCH_TABLE IObjectExporter_NDR64__v0_0_DispatchTable = 
    {
    6,
    (RPC_DISPATCH_FUNCTION*)IObjectExporter_NDR64__table
    };

static const MIDL_SYNTAX_INFO IObjectExporter_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&IObjectExporter_v0_0_DispatchTable,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    IObjectExporter_FormatStringOffsetTable,
    ms2Ddcom__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    (RPC_DISPATCH_TABLE*)&IObjectExporter_NDR64__v0_0_DispatchTable,
    0 ,
    (unsigned short *) IObjectExporter_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };


static const SERVER_ROUTINE IObjectExporter_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)ResolveOxid,
    (SERVER_ROUTINE)SimplePing,
    (SERVER_ROUTINE)ComplexPing,
    (SERVER_ROUTINE)ServerAlive,
    (SERVER_ROUTINE)ResolveOxid2,
    (SERVER_ROUTINE)ServerAlive2
    };

static const MIDL_SERVER_INFO IObjectExporter_ServerInfo = 
    {
    &IObjectExporter_StubDesc,
    IObjectExporter_ServerRoutineTable,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    (unsigned short *) IObjectExporter_FormatStringOffsetTable,
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IObjectExporter_SyntaxInfo
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

