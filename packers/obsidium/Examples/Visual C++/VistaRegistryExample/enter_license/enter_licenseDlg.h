
// enter_licenseDlg.h : header file
//

#pragma once
#include "afxwin.h"


// Center_licenseDlg dialog
class Center_licenseDlg : public CDialog
{
// Construction
public:
	Center_licenseDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ENTER_LICENSE_DIALOG };

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
	CEdit m_EdtName;
	CEdit m_EdtKey;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	CButton m_btnOk;
};
