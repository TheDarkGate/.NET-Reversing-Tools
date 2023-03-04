// Obsidium Short KeygenDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CObsidiumShortKeygenDlg dialog
class CObsidiumShortKeygenDlg : public CDialog
{
// Construction
public:
	CObsidiumShortKeygenDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_OBSIDIUMSHORTKEYGEN_DIALOG };

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
	afx_msg void OnBnClickedBtnproject();
	CEdit m_edtProject;
	CEdit m_edtInfo;
	CEdit m_edtKey;
	afx_msg void OnBnClickedBtngenerate();
	afx_msg void OnBnClickedBtnverify();
};
