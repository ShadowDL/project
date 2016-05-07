#if !defined(AFX_DES5_H__39E547B4_2051_4D7D_8300_7C5901364CF3__INCLUDED_)
#define AFX_DES5_H__39E547B4_2051_4D7D_8300_7C5901364CF3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DES5.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DES5 dialog

class DES5 : public CDialog
{
// Construction
public:
	DES5(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DES5)
	enum { IDD = IDD_DES5 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DES5)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DES5)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DES5_H__39E547B4_2051_4D7D_8300_7C5901364CF3__INCLUDED_)
