#if !defined(AFX_LEARN_H__A0379999_FD66_4892_9BFD_7F68555C2C52__INCLUDED_)
#define AFX_LEARN_H__A0379999_FD66_4892_9BFD_7F68555C2C52__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LEARN.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// LEARN dialog

class LEARN : public CDialog
{
// Construction
public:
	LEARN(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(LEARN)
	enum { IDD = IDD_LEARN };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(LEARN)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(LEARN)
	afx_msg void OnButton8();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEARN_H__A0379999_FD66_4892_9BFD_7F68555C2C52__INCLUDED_)
