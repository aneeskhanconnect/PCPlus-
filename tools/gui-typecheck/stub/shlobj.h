#pragma once
#ifndef PCS_STUB_WINDOWS_H_INCLUDED
#error "must be included after <windows.h>"
#endif
#include "win32_stub.h"
#include "objbase.h"
typedef void* PIDLIST_ABSOLUTE;
struct BROWSEINFOW { HWND hwndOwner; PIDLIST_ABSOLUTE pidlRoot; LPWSTR pszDisplayName; LPCWSTR lpszTitle; UINT ulFlags; LPVOID lpfn; LPARAM lParam; int iImage; };
#define BIF_RETURNONLYFSDIRS 1
#define BIF_NEWDIALOGSTYLE 0x40
#define BIF_USENEWUI 0x50

PIDLIST_ABSOLUTE SHBrowseForFolderW(BROWSEINFOW*); BOOL SHGetPathFromIDListW(PIDLIST_ABSOLUTE, LPWSTR);
#include "knownfolders.h"
HRESULT SHGetKnownFolderPath(REFKNOWNFOLDERID, DWORD, HANDLE, PWSTR*);
