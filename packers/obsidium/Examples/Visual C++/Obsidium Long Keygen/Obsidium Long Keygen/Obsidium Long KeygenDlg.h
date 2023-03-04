// Obsidium Long KeygenDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CObsidiumLongKeygenDlg dialog
class CObsidiumLongKeygenDlg : public CDialog
{
// Construction
public:
	CObsidiumLongKeygenDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_OBSIDIUMLONGKEYGEN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnexit();
	CEdit m_edtInfo4;
	CEdit m_edtInfo3;
	CEdit m_edtInfo2;
	CEdit m_edtInfo1;
	CEdit m_edtProject;
	afx_msg void OnBnClickedBtngen();
	afx_msg void OnBnClickedButton3();
};
