// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// ĳЩ CString ���캯��������ʽ��

#include <afxwin.h>
#include <afxext.h>
#include <afxole.h>
#include <afxodlgs.h>
#include <afxrich.h>
#include <afxhtml.h>
#include <afxcview.h>
#include <afxwinappex.h>
#include <afxframewndex.h>
#include <afxmdiframewndex.h>

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdisp.h>        // MFC �Զ�����
#endif // _AFX_NO_OLE_SUPPORT

#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>


#include "json/reader.h"
#include "json/writer.h"
#include "json/value.h"
#ifdef _DEBUG
#pragma comment(lib, "jsond.lib")
#else
#pragma comment(lib, "json.lib")
#endif

// #define TIXML_USE_STL
// #include "tinyxml.h"
// #ifdef _DEBUG
// #pragma comment(lib, "tinyxmld_STL.lib")
// #else
// #pragma comment(lib, "tinyxml_STL.lib")
// #endif

#define ICE_STATIC_LIBS
#ifdef _DEBUG
#pragma comment(lib, "iced.lib")
#pragma comment(lib, "iceutild.lib")
#pragma comment(lib, "libbz2d.lib")
#else
#pragma comment(lib, "ice.lib")
#pragma comment(lib, "iceutil.lib")
#pragma comment(lib, "libbz2.lib")
#endif
#pragma comment(lib, "Rpcrt4.lib")
#pragma comment(lib, "Iphlpapi.lib")