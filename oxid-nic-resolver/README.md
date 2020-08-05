# OXIDNicResolver

Retrieve nic's network address(NetBIOS, FQDN, IPv4, IPv6 or another protocol sequence) from remote machine via RPC/135 without authentication

Different from other implementations on GitHub, this proj is implemented with native API: invoke `IObjectExporter::ServerAlive2`, then parse the StringBindings

> ### [MSDN]3.1.2.5.1.6 IObjectExporter::ServerAlive2 (Opnum 5)
>
> When processing this call:
>
> -   The object resolver MUST NOT check if the client has the permissions to make this call.
> -   The object resolver MUST return the object resolver COMVERSION and the [DUALSTRINGARRAY](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dcom/8ad7d21d-5c34-4649-9bc7-5be6fe568245) containing its RPC bindings to the client.



```
PS C:\> .\OXIDNicResolver.exe 192.168.0.1
Retrieve nic network address from ncacn_ip_tcp:192.168.0.1[135]
TowerId=NCACN_IP_TCP: iv4n-PC0
TowerId=NCACN_IP_TCP: 192.168.0.1
TowerId=NCACN_IP_TCP: 192.168.40.100
TowerId=NCACN_IP_TCP: 2002:134:9ea::330:8ff
```

The idl is compiled as x64, you should recompile it on the compatible arch while compiling the proj

***

## 坑

主体代码虽然看起来很少，但为了完成它我踩了很多坑，几乎花了两天时间

仅仅放出源码我相信对Win32API（主要是COM）经验不足的同学来说基本是无法成功编译的

+ `ms-dcom.idl`

  + 首先需要获取idl并编译才有`IObjectExporter`的定义，在MSDN上可以找到https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dcom/49aef5a4-f0ad-4478-abb5-cb9446dc13c6 。编译时你会发现它导入了`ms-dtyp.idl`，一样可以找到，接着编译后的`ms-dcom_h.h`会导入`ms-dtyp.h`，修改`ms-dtyp_h.h`名字后编译，60+个error，基本就是dtyp.h里的类型重定义冲突

  + 删掉`ms-dcom_h.h`里导入`ms-dtyp.h`的语句，再次编译，又会报`_COSERVERINFO`结构体重定义，直接注释掉，编译成功

  + 接着导入编译后的.h和.c
+ 20+无法解析的外部符号，要链接rpcrt4.lib

+ `MIDL_user_free/MIDL_user_allocate`

  + 编译项目，报无法解析符号`MIDL_user_free/MIDL_user_allocate`。根据https://docs.microsoft.com/en-us/windows/win32/rpc/the-midl-user-free-function 需要自己定义
  + 再次编译报无法解析的外部符号`CStdStubBuffer_Release`，https://social.msdn.microsoft.com/Forums/en-US/370a7b59-3891-4af0-9818-f3b8789ec626/error-lnk2001-unresolved-external-symbol-cstdstubbufferrelease 。通过添加`dlldata.c`到sln管理器（我也不清楚这个文件是哪一步生成的）
  

以上是事后总结的几个坑，当然还有不少坑略去了，因为在事后的上帝视角看来有些坑踩得没有意义，纯属走了弯路，自然就没必要记录

代码实现其实是相对简单的，虽然网上(包括MSDN)完全找不到`IObjectExporter::ServerAlive2`的example
