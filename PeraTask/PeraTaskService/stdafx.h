
// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ





#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��



#include <winsvc.h>


#include "json/reader.h"
#include "json/writer.h"
#include "json/value.h"
#ifdef _DEBUG
#pragma comment(lib, "jsond.lib")
#else
#pragma comment(lib, "json.lib")
#endif

#define TIXML_USE_STL
#include "tinyxml.h"
#ifdef _DEBUG
#pragma comment(lib, "tinyxmld_STL.lib")
#else
#pragma comment(lib, "tinyxml_STL.lib")
#endif


#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include "cryptopp561/md5.h"
#include "cryptopp561/filters.h"
#include "cryptopp561/channels.h"
#include "cryptopp561/files.h"
#include "cryptopp561/hex.h"
#ifdef _DEBUG
#pragma comment(lib, "cryptlibd.lib")
#else
#pragma comment(lib, "cryptlib.lib")
#endif


#include <dbghelp.h>
#pragma comment(lib, "dbghelp.lib")

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