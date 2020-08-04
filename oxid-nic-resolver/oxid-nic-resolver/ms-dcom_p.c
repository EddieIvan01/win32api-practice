

/* this ALWAYS GENERATED file contains the proxy stub code */


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
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ms-dcom_h.h"

#define TYPE_FORMAT_STRING_SIZE   823                               
#define PROC_FORMAT_STRING_SIZE   1041                              
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


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IUnknown_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IUnknown_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRemUnknown_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRemUnknown_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRemUnknown2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IRemUnknown2_ProxyInfo;



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

	/* Procedure Opnum0NotUsedOnWire */

/* 726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 742 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum1NotUsedOnWire */

/* 758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 766 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 772 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 774 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 786 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum2NotUsedOnWire */

/* 790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x2 ),	/* 2 */
/* 798 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 804 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 806 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 818 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemQueryInterface */

/* 822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x3 ),	/* 3 */
/* 830 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 832 */	NdrFcShort( 0x52 ),	/* 82 */
/* 834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 836 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 838 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ripid */

/* 848 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 850 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 852 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter cRefs */

/* 854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 856 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cIids */

/* 860 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 862 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 864 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter iids */

/* 866 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 868 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 870 */	NdrFcShort( 0x206 ),	/* Type Offset=518 */

	/* Parameter ppQIResults */

/* 872 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 874 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 876 */	NdrFcShort( 0x230 ),	/* Type Offset=560 */

	/* Return value */

/* 878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 880 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemAddRef */

/* 884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x4 ),	/* 4 */
/* 892 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 894 */	NdrFcShort( 0x6 ),	/* 6 */
/* 896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 898 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 900 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 902 */	NdrFcShort( 0x1 ),	/* 1 */
/* 904 */	NdrFcShort( 0x1 ),	/* 1 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cInterfaceRefs */

/* 910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 912 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 914 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter InterfaceRefs */

/* 916 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 918 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 920 */	NdrFcShort( 0x28c ),	/* Type Offset=652 */

	/* Parameter pResults */

/* 922 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 924 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 926 */	NdrFcShort( 0x2aa ),	/* Type Offset=682 */

	/* Return value */

/* 928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 930 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemRelease */

/* 934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x5 ),	/* 5 */
/* 942 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 944 */	NdrFcShort( 0x6 ),	/* 6 */
/* 946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 948 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 950 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cInterfaceRefs */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 964 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter InterfaceRefs */

/* 966 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 968 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 970 */	NdrFcShort( 0x28c ),	/* Type Offset=652 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 974 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemQueryInterface2 */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x6 ),	/* 6 */
/* 986 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 988 */	NdrFcShort( 0x4a ),	/* 74 */
/* 990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 992 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 994 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 996 */	NdrFcShort( 0x1 ),	/* 1 */
/* 998 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ripid */

/* 1004 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1006 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1008 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */

	/* Parameter cIids */

/* 1010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1012 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1014 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter iids */

/* 1016 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1018 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1020 */	NdrFcShort( 0x2c4 ),	/* Type Offset=708 */

	/* Parameter phr */

/* 1022 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1024 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1026 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter ppMIF */

/* 1028 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1030 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1032 */	NdrFcShort( 0x30c ),	/* Type Offset=780 */

	/* Return value */

/* 1034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1036 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1038 */	0x8,		/* FC_LONG */
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
/* 514 */	
			0x11, 0x0,	/* FC_RP */
/* 516 */	NdrFcShort( 0x2 ),	/* Offset= 2 (518) */
/* 518 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 526 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 528 */	0x0 , 
			0x0,		/* 0 */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 538 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 542 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 544 */	0x0 , 
			0x0,		/* 0 */
/* 546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 554 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 556 */	NdrFcShort( 0xfde8 ),	/* Offset= -536 (20) */
/* 558 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 560 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 562 */	NdrFcShort( 0x2 ),	/* Offset= 2 (564) */
/* 564 */	
			0x13, 0x0,	/* FC_OP */
/* 566 */	NdrFcShort( 0x20 ),	/* Offset= 32 (598) */
/* 568 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 570 */	NdrFcShort( 0x28 ),	/* 40 */
/* 572 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 574 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 576 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 578 */	NdrFcShort( 0xfdd2 ),	/* Offset= -558 (20) */
/* 580 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 582 */	0xb1,		/* FC_FORCED_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 584 */	NdrFcShort( 0x30 ),	/* 48 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x0 ),	/* Offset= 0 (588) */
/* 590 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 592 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 594 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (568) */
/* 596 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 598 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 604 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 606 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 608 */	0x0 , 
			0x0,		/* 0 */
/* 610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 622 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 624 */	0x0 , 
			0x0,		/* 0 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 634 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 636 */	NdrFcShort( 0xffca ),	/* Offset= -54 (582) */
/* 638 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 640 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 642 */	NdrFcShort( 0x18 ),	/* 24 */
/* 644 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 646 */	NdrFcShort( 0xfd8e ),	/* Offset= -626 (20) */
/* 648 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 650 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 652 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 654 */	NdrFcShort( 0x18 ),	/* 24 */
/* 656 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 660 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 662 */	0x0 , 
			0x0,		/* 0 */
/* 664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 674 */	NdrFcShort( 0xffde ),	/* Offset= -34 (640) */
/* 676 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 678 */	
			0x11, 0x0,	/* FC_RP */
/* 680 */	NdrFcShort( 0x2 ),	/* Offset= 2 (682) */
/* 682 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 684 */	NdrFcShort( 0x4 ),	/* 4 */
/* 686 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 688 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 690 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 692 */	0x0 , 
			0x0,		/* 0 */
/* 694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 704 */	
			0x11, 0x0,	/* FC_RP */
/* 706 */	NdrFcShort( 0x2 ),	/* Offset= 2 (708) */
/* 708 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 716 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 718 */	0x0 , 
			0x0,		/* 0 */
/* 720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 728 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 732 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 734 */	0x0 , 
			0x0,		/* 0 */
/* 736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 744 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 746 */	NdrFcShort( 0xfd2a ),	/* Offset= -726 (20) */
/* 748 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 750 */	
			0x11, 0x0,	/* FC_RP */
/* 752 */	NdrFcShort( 0x2 ),	/* Offset= 2 (754) */
/* 754 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 756 */	NdrFcShort( 0x4 ),	/* 4 */
/* 758 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 760 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 762 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 764 */	0x0 , 
			0x0,		/* 0 */
/* 766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 774 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 776 */	
			0x11, 0x0,	/* FC_RP */
/* 778 */	NdrFcShort( 0x2 ),	/* Offset= 2 (780) */
/* 780 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 786 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 788 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 790 */	0x0 , 
			0x0,		/* 0 */
/* 792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 800 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 804 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 806 */	0x0 , 
			0x0,		/* 0 */
/* 808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	
			0x13, 0x0,	/* FC_OP */
/* 818 */	NdrFcShort( 0xfd9a ),	/* Offset= -614 (204) */
/* 820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

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


/* Standard interface: __MIDL_itf_ms2Ddcom_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: IActivation, ver. 0.0,
   GUID={0x4d9f4ab8,0x7d1c,0x11cf,{0x86,0x1e,0x00,0x20,0xaf,0x6e,0x7c,0x57}} */


/* Standard interface: IRemoteSCMActivator, ver. 0.0,
   GUID={0x000001A0,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Standard interface: IObjectExporter, ver. 0.0,
   GUID={0x99fcfec4,0x5260,0x101b,{0xbb,0xcb,0x00,0xaa,0x00,0x21,0x34,0x7a}} */


/* Standard interface: __MIDL_itf_ms2Ddcom_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma code_seg(".orpc")
static const unsigned short IUnknown_FormatStringOffsetTable[] =
    {
    0
    };



/* Object interface: IRemUnknown, ver. 0.0,
   GUID={0x00000131,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma code_seg(".orpc")
static const unsigned short IRemUnknown_FormatStringOffsetTable[] =
    {
    822,
    884,
    934
    };



/* Object interface: IRemUnknown2, ver. 0.0,
   GUID={0x00000143,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma code_seg(".orpc")
static const unsigned short IRemUnknown2_FormatStringOffsetTable[] =
    {
    822,
    884,
    934,
    978
    };



/* Standard interface: __MIDL_itf_ms2Ddcom_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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
__midl_frag56_t;
extern const __midl_frag56_t __midl_frag56;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
NDR64_FORMAT_CHAR
__midl_frag54_t;
extern const __midl_frag54_t __midl_frag54;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag51_t;
extern const __midl_frag51_t __midl_frag51;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag50_t;
extern const __midl_frag50_t __midl_frag50;

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
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag48_t;
extern const __midl_frag48_t __midl_frag48;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag45_t;
extern const __midl_frag45_t __midl_frag45;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag44_t;
extern const __midl_frag44_t __midl_frag44;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag41_t;
extern const __midl_frag41_t __midl_frag41;

typedef 
NDR64_FORMAT_CHAR
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag38_t;
extern const __midl_frag38_t __midl_frag38;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag36_t;
extern const __midl_frag36_t __midl_frag36;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag35_t;
extern const __midl_frag35_t __midl_frag35;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag33_t;
extern const __midl_frag33_t __midl_frag33;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag29_t;
extern const __midl_frag29_t __midl_frag29;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag28_t;
extern const __midl_frag28_t __midl_frag28;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag27_t;
extern const __midl_frag27_t __midl_frag27;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
    } frag2;
}
__midl_frag20_t;
extern const __midl_frag20_t __midl_frag20;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag19_t;
extern const __midl_frag19_t __midl_frag19;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag18_t;
extern const __midl_frag18_t __midl_frag18;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag10_t;
extern const __midl_frag10_t __midl_frag10;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag56_t __midl_frag56 =
0x5    /* FC64_INT32 */;

static const __midl_frag55_t __midl_frag55 =
{ 
/* *MInterfacePointer */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag51
};

static const __midl_frag54_t __midl_frag54 =
0x2    /* FC64_INT8 */;

static const __midl_frag53_t __midl_frag53 =
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

static const __midl_frag52_t __midl_frag52 =
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
        &__midl_frag53
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag54
    }
};

static const __midl_frag51_t __midl_frag51 =
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
        &__midl_frag52
    }
};

static const __midl_frag50_t __midl_frag50 =
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

static const __midl_frag49_t __midl_frag49 =
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
        &__midl_frag50
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
                0x22,    /* FC64_OP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag51
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag55
    }
};

static const __midl_frag48_t __midl_frag48 =
{ 
/* **MInterfacePointer */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag49
};

static const __midl_frag45_t __midl_frag45 =
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
        &__midl_frag50
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag56
    }
};

static const __midl_frag44_t __midl_frag44 =
{ 
/* *HRESULT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag45
};

static const __midl_frag42_t __midl_frag42 =
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
        &__midl_frag50
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag10
    }
};

static const __midl_frag41_t __midl_frag41 =
{ 
/* *IID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag42
};

static const __midl_frag40_t __midl_frag40 =
0x4    /* FC64_INT16 */;

static const __midl_frag39_t __midl_frag39 =
{ 
/* *IID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag10
};

static const __midl_frag38_t __midl_frag38 =
{ 
/* RemQueryInterface2 */
    { 
    /* RemQueryInterface2 */      /* procedure RemQueryInterface2 */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 78 /* 0x4e */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ripid */      /* parameter ripid */
        &__midl_frag10,
        { 
        /* ripid */
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cIids */      /* parameter cIids */
        &__midl_frag40,
        { 
        /* cIids */
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
    /* iids */      /* parameter iids */
        &__midl_frag42,
        { 
        /* iids */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* phr */      /* parameter phr */
        &__midl_frag45,
        { 
        /* phr */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ppMIF */      /* parameter ppMIF */
        &__midl_frag49,
        { 
        /* ppMIF */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag56,
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

static const __midl_frag36_t __midl_frag36 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */  /* Offset */
    }
};

static const __midl_frag35_t __midl_frag35 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
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
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag36
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag27
    }
};

static const __midl_frag33_t __midl_frag33 =
{ 
/* RemRelease */
    { 
    /* RemRelease */      /* procedure RemRelease */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* cInterfaceRefs */      /* parameter cInterfaceRefs */
        &__midl_frag40,
        { 
        /* cInterfaceRefs */
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* InterfaceRefs */      /* parameter InterfaceRefs */
        &__midl_frag35,
        { 
        /* InterfaceRefs */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag56,
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
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag29_t __midl_frag29 =
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
        &__midl_frag36
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag56
    }
};

static const __midl_frag28_t __midl_frag28 =
{ 
/* *HRESULT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag29
};

static const __midl_frag27_t __midl_frag27 =
{ 
/* REMINTERFACEREF */
    { 
    /* REMINTERFACEREF */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* REMINTERFACEREF */
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
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* RemAddRef */
    { 
    /* RemAddRef */      /* procedure RemAddRef */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* cInterfaceRefs */      /* parameter cInterfaceRefs */
        &__midl_frag40,
        { 
        /* cInterfaceRefs */
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* InterfaceRefs */      /* parameter InterfaceRefs */
        &__midl_frag35,
        { 
        /* InterfaceRefs */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pResults */      /* parameter pResults */
        &__midl_frag29,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag56,
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag21_t __midl_frag21 =
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

static const __midl_frag20_t __midl_frag20 =
{ 
/* REMQIRESULT */
    { 
    /* REMQIRESULT */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* REMQIRESULT */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        0,
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
        /* STDOBJREF */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
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
            &__midl_frag21
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

static const __midl_frag19_t __midl_frag19 =
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

static const __midl_frag18_t __midl_frag18 =
{ 
/* *REMQIRESULT */
    { 
    /* *REMQIRESULT */
        { 
        /* *REMQIRESULT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *REMQIRESULT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag20
        },
        &__midl_frag19,
        0,
        0
    }
};

static const __midl_frag17_t __midl_frag17 =
{ 
/* *REMQIRESULT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag18
};

static const __midl_frag16_t __midl_frag16 =
{ 
/* **REMQIRESULT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag17
};

static const __midl_frag14_t __midl_frag14 =
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
        &__midl_frag19
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag10
    }
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* *IID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag14
};

static const __midl_frag10_t __midl_frag10 =
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

static const __midl_frag8_t __midl_frag8 =
{ 
/* RemQueryInterface */
    { 
    /* RemQueryInterface */      /* procedure RemQueryInterface */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 86 /* 0x56 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ripid */      /* parameter ripid */
        &__midl_frag10,
        { 
        /* ripid */
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cRefs */      /* parameter cRefs */
        &__midl_frag56,
        { 
        /* cRefs */
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
    /* cIids */      /* parameter cIids */
        &__midl_frag40,
        { 
        /* cIids */
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
    /* iids */      /* parameter iids */
        &__midl_frag14,
        { 
        /* iids */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ppQIResults */      /* parameter ppQIResults */
        &__midl_frag16,
        { 
        /* ppQIResults */
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
        &__midl_frag56,
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

static const __midl_frag6_t __midl_frag6 =
{ 
/* Opnum2NotUsedOnWire */
    { 
    /* Opnum2NotUsedOnWire */      /* procedure Opnum2NotUsedOnWire */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag56,
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
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"



/* Standard interface: __MIDL_itf_ms2Ddcom_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: IActivation, ver. 0.0,
   GUID={0x4d9f4ab8,0x7d1c,0x11cf,{0x86,0x1e,0x00,0x20,0xaf,0x6e,0x7c,0x57}} */


/* Standard interface: IRemoteSCMActivator, ver. 0.0,
   GUID={0x000001A0,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Standard interface: IObjectExporter, ver. 0.0,
   GUID={0x99fcfec4,0x5260,0x101b,{0xbb,0xcb,0x00,0xaa,0x00,0x21,0x34,0x7a}} */


/* Standard interface: __MIDL_itf_ms2Ddcom_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IUnknown_Ndr64ProcTable[] =
    {
    0
    };


static const MIDL_SYNTAX_INFO IUnknown_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    &IUnknown_FormatStringOffsetTable[-3],
    ms2Ddcom__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IUnknown_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IUnknown_ProxyInfo =
    {
    &Object_StubDesc,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    &IUnknown_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IUnknown_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IUnknown_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    (unsigned short *) &IUnknown_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IUnknown_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(3) _IUnknownProxyVtbl = 
{
    &IUnknown_ProxyInfo,
    &IID_IUnknown,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _IUnknownStubVtbl =
{
    &IID_IUnknown,
    &IUnknown_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IRemUnknown, ver. 0.0,
   GUID={0x00000131,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IRemUnknown_Ndr64ProcTable[] =
    {
    &__midl_frag8,
    &__midl_frag23,
    &__midl_frag33
    };


static const MIDL_SYNTAX_INFO IRemUnknown_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    &IRemUnknown_FormatStringOffsetTable[-3],
    ms2Ddcom__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IRemUnknown_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IRemUnknown_ProxyInfo =
    {
    &Object_StubDesc,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    &IRemUnknown_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IRemUnknown_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IRemUnknown_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    (unsigned short *) &IRemUnknown_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IRemUnknown_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(6) _IRemUnknownProxyVtbl = 
{
    &IRemUnknown_ProxyInfo,
    &IID_IRemUnknown,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemQueryInterface */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemAddRef */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemRelease */
};

const CInterfaceStubVtbl _IRemUnknownStubVtbl =
{
    &IID_IRemUnknown,
    &IRemUnknown_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IRemUnknown2, ver. 0.0,
   GUID={0x00000143,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IRemUnknown2_Ndr64ProcTable[] =
    {
    &__midl_frag8,
    &__midl_frag23,
    &__midl_frag33,
    &__midl_frag38
    };


static const MIDL_SYNTAX_INFO IRemUnknown2_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    &IRemUnknown2_FormatStringOffsetTable[-3],
    ms2Ddcom__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IRemUnknown2_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IRemUnknown2_ProxyInfo =
    {
    &Object_StubDesc,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    &IRemUnknown2_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IRemUnknown2_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IRemUnknown2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ms2Ddcom__MIDL_ProcFormatString.Format,
    (unsigned short *) &IRemUnknown2_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IRemUnknown2_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IRemUnknown2ProxyVtbl = 
{
    &IRemUnknown2_ProxyInfo,
    &IID_IRemUnknown2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemQueryInterface */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemAddRef */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown::RemRelease */ ,
    (void *) (INT_PTR) -1 /* IRemUnknown2::RemQueryInterface2 */
};

const CInterfaceStubVtbl _IRemUnknown2StubVtbl =
{
    &IID_IRemUnknown2,
    &IRemUnknown2_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ms2Ddcom_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
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
    0,   /* proxy/server info */
    &ms2Ddcom_ExprDesc
    };

const CInterfaceProxyVtbl * const _ms2Ddcom_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IUnknownProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRemUnknownProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRemUnknown2ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ms2Ddcom_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IUnknownStubVtbl,
    ( CInterfaceStubVtbl *) &_IRemUnknownStubVtbl,
    ( CInterfaceStubVtbl *) &_IRemUnknown2StubVtbl,
    0
};

PCInterfaceName const _ms2Ddcom_InterfaceNamesList[] = 
{
    "IUnknown",
    "IRemUnknown",
    "IRemUnknown2",
    0
};


#define _ms2Ddcom_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ms2Ddcom, pIID, n)

int __stdcall _ms2Ddcom_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ms2Ddcom, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ms2Ddcom, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ms2Ddcom, 3, *pIndex )
    
}

const ExtendedProxyFileInfo ms2Ddcom_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ms2Ddcom_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ms2Ddcom_StubVtblList,
    (const PCInterfaceName * ) & _ms2Ddcom_InterfaceNamesList,
    0, /* no delegation */
    & _ms2Ddcom_IID_Lookup, 
    3,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

