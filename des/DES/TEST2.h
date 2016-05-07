#if !defined(AFX_TEST2_H__990CAA8E_9212_4924_BE9C_45E1CC4A5732__INCLUDED_)
#define AFX_TEST2_H__990CAA8E_9212_4924_BE9C_45E1CC4A5732__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TEST2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// TEST2 dialog

class TEST2 : public CDialog
{
// Construction
public:
	TEST2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(TEST2)
	enum { IDD = IDD_TEST2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(TEST2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(TEST2)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedButton2();
	CString m_test1;
	CString m_test2;
	CString m_test3;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST2_H__990CAA8E_9212_4924_BE9C_45E1CC4A5732__INCLUDED_)
