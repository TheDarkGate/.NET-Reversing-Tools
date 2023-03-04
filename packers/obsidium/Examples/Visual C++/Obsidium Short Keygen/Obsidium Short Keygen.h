// Obsidium Short Keygen.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols


// CObsidiumShortKeygenApp:
// See Obsidium Short Keygen.cpp for the implementation of this class
//

class CObsidiumShortKeygenApp : public CWinApp
{
public:
	CObsidiumShortKeygenApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CObsidiumShortKeygenApp theApp;