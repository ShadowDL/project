#if !defined(AFX_GAME4_H__77EFA79D_4E4B_45E4_811D_F13B32319B89__INCLUDED_)
#define AFX_GAME4_H__77EFA79D_4E4B_45E4_811D_F13B32319B89__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GAME4.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// GAME4 dialog

class GAME4 : public CDialog
{
// Construction
public:
	GAME4(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(GAME4)
	enum { IDD = IDD_GAME4 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(GAME4)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(GAME4)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GAME4_H__77EFA79D_4E4B_45E4_811D_F13B32319B89__INCLUDED_)
