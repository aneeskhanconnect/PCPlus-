#pragma once
#ifndef PCS_STUB_WINDOWS_H_INCLUDED
#error "must be included after <windows.h>"
#endif
#include "win32_stub.h"
struct GUID { unsigned long Data1; unsigned short Data2, Data3; unsigned char Data4[8]; };
typedef const GUID& REFKNOWNFOLDERID;
extern const GUID FOLDERID_Documents; extern const GUID FOLDERID_RoamingAppData;

