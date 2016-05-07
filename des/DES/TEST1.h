#if !defined(AFX_TEST1_H__215C1254_6C44_4C9C_8F32_F14B0EB92E42__INCLUDED_)
#define AFX_TEST1_H__215C1254_6C44_4C9C_8F32_F14B0EB92E42__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TEST1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// TEST1 dialog

class TEST1 : public CDialog
{
// Construction
public:
	TEST1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(TEST1)
	enum { IDD = IDD_TEST1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(TEST1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(TEST1)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CString m_test1;
	CString m_test2;
	CString m_test3;
//	BOOL FileExist(CString FileName);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST1_H__215C1254_6C44_4C9C_8F32_F14B0EB92E42__INCLUDED_)
