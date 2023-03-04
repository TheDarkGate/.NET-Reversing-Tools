
// enter_license.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Center_licenseApp:
// See enter_license.cpp for the implementation of this class
//

class Center_licenseApp : public CWinAppEx
{
public:
	Center_licenseApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Center_licenseApp theApp;