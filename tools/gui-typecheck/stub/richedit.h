#pragma once
#ifndef PCS_STUB_WINDOWS_H_INCLUDED
#error "must be included after <windows.h>"
#endif
#include "win32_stub.h"
struct CHARRANGE { LONG cpMin, cpMax; };
struct CHARFORMAT2W { UINT cbSize; DWORD dwMask, dwEffects; LONG yHeight, yOffset; COLORREF crTextColor; BYTE bCharSet, bPitchAndFamily; WCHAR szFaceName[LF_FACESIZE]; WORD wWeight; SHORT sSpacing; COLORREF crBackColor; };
struct GETTEXTLENGTHEX { DWORD flags; UINT codepage; };
#define EM_EXSETSEL (WM_APP-0x8000+0x400+55)
#define EM_EXLIMITTEXT (0x400+53)
#define EM_SETBKGNDCOLOR (0x400+67)
#define EM_SETCHARFORMAT (0x400+68)
#define EM_GETTEXTLENGTHEX (0x400+95)
#define SCF_SELECTION 1
#define SCF_DEFAULT 0
#define SCF_ALL 4
#define CFM_COLOR 0x40000000
#define CFM_EFFECTS 0x80000000
#define CFM_FACE 0x20000000
#define CFM_SIZE 0x80000000
#define GTL_DEFAULT 0
