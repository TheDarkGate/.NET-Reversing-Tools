#include "stdafx.h"
#include "Obsidium Long Keygen.h"
#include "Obsidium Long KeygenDlg.h"
#include "..\..\..\sdk\c\keygen\keygen.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CObsidiumLongKeygenDlg dialog


CObsidiumLongKeygenDlg::CObsidiumLongKeygenDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CObsidiumLongKeygenDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CObsidiumLongKeygenDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDTINFO4, m_edtInfo4);
	DDX_Control(pDX, IDC_EDTINFO3, m_edtInfo3);
	DDX_Control(pDX, IDC_EDTINFO2, m_edtInfo2);
	DDX_Control(pDX, IDC_EDTINFO1, m_edtInfo1);
	DDX_Control(pDX, IDC_EDTPROJECT, m_edtProject);
}

BEGIN_MESSAGE_MAP(CObsidiumLongKeygenDlg, CDialog)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BTNEXIT, &CObsidiumLongKeygenDlg::OnBnClickedBtnexit)
	ON_BN_CLICKED(IDC_BTNGEN, &CObsidiumLongKeygenDlg::OnBnClickedBtngen)
	ON_BN_CLICKED(IDC_BUTTON3, &CObsidiumLongKeygenDlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CObsidiumLongKeygenDlg message handlers

BOOL CObsidiumLongKeygenDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CObsidiumLongKeygenDlg::OnPaint()
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
HCURSOR CObsidiumLongKeygenDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CObsidiumLongKeygenDlg::OnBnClickedBtnexit()
{
	DestroyWindow();
}

void CObsidiumLongKeygenDlg::OnBnClickedBtngen()
{
	// initialise KEYGEN_INFO_LONG structure
	KEYGEN_INFO_LONG info;
	memset(&info, 0, sizeof(info));
	info.dwSize = sizeof(info);
	// set license information
	char info1[32] = {0}, info2[32] = {0}, info3[32] = {0};
	m_edtInfo1.GetWindowTextA(info1, sizeof(info1));
	m_edtInfo2.GetWindowTextA(info2, sizeof(info2));
	m_edtInfo3.GetWindowTextA(info3, sizeof(info3));
	info.lpInfo1 = info1;
	info.lpInfo2 = info2;
	info.lpInfo3 = info3;
	char extInfo[128] = {0};
	m_edtInfo4.GetWindowTextA(extInfo, sizeof(extInfo));
	info.lpExtInfo = extInfo;
	// set project file
	char project[MAX_PATH] = {0};
	m_edtProject.GetWindowTextA(project, sizeof(project));
	info.lpProjectFile = project;
	// generate key
	char buffer[1024];
	info.lpBuffer = buffer;
	int ret = GenerateLicenseLong(&info);
	if (ret > 0)
	{
		char filter[] = { "Keyfile (*.key)|*.key|All Files (*.*)|*.*||" };
		CFileDialog saveDlg(FALSE, "key", NULL, 0, filter, this);
		if (saveDlg.DoModal() == IDOK)
		{
			FILE *keyfile = fopen(saveDlg.GetFileName(), "wb");
			if (keyfile)
			{
				fseek(keyfile, 0, SEEK_SET);
				fwrite(buffer, 1, ret, keyfile);
				fclose(keyfile);
			}
		}
	}
	else
	{
		// ...
	}
}

void CObsidiumLongKeygenDlg::OnBnClickedButton3()
{
	char filter[] = { "Project files (*.opf)|*.opf|All Files (*.*)|*.*||" };
	CFileDialog openDlg(TRUE, NULL, 0, 0, filter, this);
	if (openDlg.DoModal() == IDOK)
		m_edtProject.SetWindowTextA(openDlg.GetFileName());
}
