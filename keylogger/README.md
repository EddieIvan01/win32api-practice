# KeyLogger

Use `SetWindowsHookEx` to install a `WH_KEYBOARD_LL` hook, logging the key

**Press F2 for three times to exit**

```

========================================企业微信========================================
Hello, world!<CTRL>a<BACK>This is my password:<ENTER>P455e<BACK>w0&D../<LEFT><LEFT><DEL><CTRL>a<BACK>
========================================C:\keylogger.exe========================================
<CTRL>c
```

The `WH_KEYBOARD_LL` hook is a global only hook, means the dwThreadId must be zero. And the callback function will be invoked by the thread which installed the hook

> MSDN
>
> This hook is called in the context of the thread that installed it.  The call is made by sending a message to the thread that installed the  hook. Therefore, the thread that installed the hook must have a message  loop.
>
> However, the WH_KEYBOARD_LL hook is not injected into another process. Instead, the context switches back to the process that installed the hook and it is called in its original context. Then the context switches back to the application that generated the event.