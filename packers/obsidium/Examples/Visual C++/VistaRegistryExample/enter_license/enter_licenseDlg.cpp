#include "stdafx.h"
#include "enter_license.h"
#include "enter_licenseDlg.h"
#include "obsidium.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


bool isUserAdmin(void)
{
	SID_IDENTIFIER_AUTHORITY NtAuthority = SECURITY_NT_AUTHORITY;
	PSID AdministratorsGroup; 
	BOOL b = AllocateAndInitializeSid(
		&NtAuthority,
		2,
		SECURITY_BUILTIN_DOMAIN_RID,
		DOMAIN_ALIAS_RID_ADMINS,
		0, 0, 0, 0, 0, 0,
		&AdministratorsGroup); 
	if (b != FALSE) 
	{
		if (!CheckTokenMembership(NULL, AdministratorsGroup, &b)) 
		{
			b = false;
		} 
		FreeSid(AdministratorsGroup); 
	}
	return b == TRUE;
}

// Center_licenseDlg dialog

Center_licenseDlg::Center_licenseDlg(CWnd* pParent /*=NULL*/)
	: CDialog(Center_licenseDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Center_licenseDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDTNAME, m_EdtName);
	DDX_Control(pDX, IDC_EDTKEY, m_EdtKey);
	DDX_Control(pDX, IDOK, m_btnOk);
}

BEGIN_MESSAGE_MAP(Center_licenseDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDOK, &Center_licenseDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &Center_licenseDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// Center_licenseDlg message handlers

BOOL Center_licenseDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// initialization
	if (!isUserAdmin())
	{
		m_btnOk.SendMessage(BCM_SETSHIELD, 0, TRUE);
	}
	if (isRegistered())
		SetWindowTextA("Registered");
	else
		SetWindowTextA("Unregistered");

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void Center_licenseDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR Center_licenseDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void Center_licenseDlg::OnBnClickedOk()
{
	CString name, key;
	m_EdtName.GetWindowText(name);
	m_EdtKey.GetWindowText(key);
	if (key.GetLength() == 0 || name.GetLength() == 0)
	{
		MessageBox(TEXT("Please enter the required information"));
		return;
	}
	if (isUserAdmin())
	{
		// user has admin privileges, directly write the license data
		if (storeLicenseShort(name.GetBuffer(), key.GetBuffer()))
			MessageBox("License stored successfully!");
	}
	else
	{
		// launch store_license to store the license data
		SHELLEXECUTEINFO sInfo;
		memset(&sInfo, 0, sizeof(sInfo));
		sInfo.cbSize = sizeof(sInfo);
		sInfo.fMask = SEE_MASK_NOCLOSEPROCESS | SEE_MASK_FLAG_NO_UI;
		sInfo.lpFile = "store_license.exe";
		CString params = CString("\"") + name + CString("\" \"") + key + CString("\"");
		sInfo.lpParameters = params.GetBuffer();
		if (ShellExecuteEx(&sInfo) == TRUE)
		{
			if (sInfo.hProcess != NULL)
			{
				WaitForSingleObject(sInfo.hProcess, INFINITE);
				DWORD exitCode;
				if (GetExitCodeProcess(sInfo.hProcess, &exitCode) == TRUE)
				{
					if (exitCode == 0)
						MessageBox("License stored successfully!");
				}
				CloseHandle(sInfo.hProcess);
			}
		}
	}
}

void Center_licenseDlg::OnBnClickedCancel()
{
	OnCancel();
}
