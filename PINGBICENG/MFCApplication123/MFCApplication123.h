
// MFCApplication123.h: PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// 主符号


// CMFCApplication123App:
// 有关此类的实现，请参阅 MFCApplication123.cpp
//

class CMFCApplication123App : public CWinApp
{
public:
	CMFCApplication123App();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication123App theApp;
