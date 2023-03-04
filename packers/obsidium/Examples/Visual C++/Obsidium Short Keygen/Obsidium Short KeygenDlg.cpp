/*
How to compile:

- Use the LIB tool (included with Visual C++) to create the library files:
  lib /def:dummy.def
  or
  lib /def:keygen.def
  and copy the resulting .lib files to the application directory
  The .def files are located in the SDK\C folder
*/

#include "stdafx.h"
#include "Obsidium Short Keygen.h"
#include "Obsidium Short KeygenDlg.h"
#include ".\obsidium short keygendlg.h"
#include "..\..\..\sdk\c\keygen\keygen.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CObsidiumShortKeygenDlg dialog



CObsidiumShortKeygenDlg::CObsidiumShortKeygenDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CObsidiumShortKeygenDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CObsidiumShortKeygenDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDTPROJECT, m_edtProject);
	DDX_Control(pDX, IDC_EDTLICINFO, m_edtInfo);
	DDX_Control(pDX, IDC_EDTLICKEY, m_edtKey);
}

BEGIN_MESSAGE_MAP(CObsidiumShortKeygenDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BTNPROJECT, OnBnClickedBtnproject)
	ON_BN_CLICKED(IDC_BTNGENERATE, OnBnClickedBtngenerate)
	ON_BN_CLICKED(IDC_BTNVERIFY, OnBnClickedBtnverify)
END_MESSAGE_MAP()


// CObsidiumShortKeygenDlg message handlers

BOOL CObsidiumShortKeygenDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	m_edtInfo.SetLimitText(127);
	m_edtKey.SetLimitText(80);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CObsidiumShortKeygenDlg::OnPaint() 
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
HCURSOR CObsidiumShortKeygenDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CObsidiumShortKeygenDlg::OnBnClickedBtnproject()
{
	OPENFILENAME ofn;
	char fileName[MAX_PATH] = {0};
	memset(&ofn, 0, sizeof(ofn));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = this->m_hWnd;
	ofn.lpstrFilter = "Project files\0*.opf";
	ofn.lpstrFile = fileName;
	ofn.nMaxFile = sizeof(fileName);
	ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST;
	if (GetOpenFileName(&ofn))
		m_edtProject.SetWindowText(fileName);
}

void CObsidiumShortKeygenDlg::OnBnClickedBtngenerate()
{
	if (m_edtInfo.GetWindowTextLength() == 0)
		return;
// initialise KEYGEN_INFO_SHORT structure
    KEYGEN_INFO_SHORT info;
    memset(&info, 0, sizeof(info));
    info.dwSize = sizeof(info);
    char sInfo[128];
	m_edtInfo.GetWindowText(sInfo, sizeof(sInfo));
    info.lpInfo = sInfo;
    char project[MAX_PATH];
	m_edtProject.GetWindowText(project, sizeof(project));
    info.lpProjectFile = project;
    char key[80];
    info.lpKey = key;
// generate license key
    int result = GenerateLicenseShort(&info);
    if (result > 0)
		m_edtKey.SetWindowText(key);
    else
	{
		CString sResult;
		sResult.Format("Error generating license key, error code: %d", result);
        MessageBox(sResult);
	}
}

void CObsidiumShortKeygenDlg::OnBnClickedBtnverify()
{
// initialise KEYVER_INFO_SHORT structure
    KEYVER_INFO_SHORT info;
    memset(&info, 0, sizeof(info));
    info.dwSize = sizeof(info);
    char sInfo[128] = {0};
	m_edtInfo.GetWindowText(sInfo, sizeof(sInfo));
    info.lpInfo = sInfo;
    char project[MAX_PATH] = {0};
	m_edtProject.GetWindowText(project, sizeof(project));
    info.lpProjectFile = project;
    char key[80] = {0};
	m_edtKey.GetWindowText(key, sizeof(key));
    info.lpKey = key;
// verify license key
    int result = VerifyLicenseShort(&info);
    if (result == KEYVER_OK)
        MessageBox("License key is valid");
    else
	{
		CString sResult;
		sResult.Format("License key seems to be invalid, error code: %d", result);
        MessageBox(sResult);
	}
}
