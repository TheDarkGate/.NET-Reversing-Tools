
// enter_license.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "enter_license.h"
#include "enter_licenseDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Center_licenseApp

BEGIN_MESSAGE_MAP(Center_licenseApp, CWinAppEx)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// Center_licenseApp construction

Center_licenseApp::Center_licenseApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only Center_licenseApp object

Center_licenseApp theApp;


// Center_licenseApp initialization

BOOL Center_licenseApp::InitInstance()
{
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	//InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();

	CoInitializeEx(NULL, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);

	Center_licenseDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
