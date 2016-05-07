#if !defined(AFX_GAME1_H__AECB68A4_40B2_45D0_85E7_05F703EC2DF7__INCLUDED_)
#define AFX_GAME1_H__AECB68A4_40B2_45D0_85E7_05F703EC2DF7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GAME1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// GAME1 dialog

class GAME1 : public CDialog
{
// Construction
public:
	GAME1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(GAME1)
	enum { IDD = IDD_GAME1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(GAME1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(GAME1)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	int Num;
	afx_msg void OnEnChangeEdit2();
	CString m_edit;
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GAME1_H__AECB68A4_40B2_45D0_85E7_05F703EC2DF7__INCLUDED_)
