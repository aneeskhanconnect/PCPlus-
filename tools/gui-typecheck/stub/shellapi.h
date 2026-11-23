#pragma once
#ifndef PCS_STUB_WINDOWS_H_INCLUDED
#error "this Windows header must be included after <windows.h> (as with the real SDK)"
#endif
#include "win32_stub.h"
DECLARE_HANDLE(HDROP);
HINSTANCE ShellExecuteW(HWND, LPCWSTR, LPCWSTR, LPCWSTR, LPCWSTR, int);
LPWSTR* CommandLineToArgvW(LPCWSTR, int*);
UINT DragQueryFileW(HDROP, UINT, LPWSTR, UINT); void DragFinish(HDROP);
