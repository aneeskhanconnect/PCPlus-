#pragma once
#ifndef PCS_STUB_WINDOWS_H_INCLUDED
#error "must be included after <windows.h>"
#endif
#include "win32_stub.h"
struct OPENFILENAMEW { DWORD lStructSize; HWND hwndOwner; HINSTANCE hInstance; LPCWSTR lpstrFilter; LPWSTR lpstrCustomFilter; DWORD nMaxCustFilter, nFilterIndex; LPWSTR lpstrFile; DWORD nMaxFile; LPWSTR lpstrFileTitle; DWORD nMaxFileTitle; LPCWSTR lpstrInitialDir; LPCWSTR lpstrTitle; DWORD Flags; WORD nFileOffset, nFileExtension; LPCWSTR lpstrDefExt; LPARAM lCustData; LPVOID lpfnHook; LPCWSTR lpTemplateName; };
#define OFN_FILEMUSTEXIST 0x1000
#define OFN_PATHMUSTEXIST 0x800
#define OFN_EXPLORER 0x80000
#define OFN_NOCHANGEDIR 8
#define OFN_OVERWRITEPROMPT 2
BOOL GetOpenFileNameW(OPENFILENAMEW*); BOOL GetSaveFileNameW(OPENFILENAMEW*);
