#if !defined(AFX_DES4_H__8DA917B8_2F02_48F5_867C_BC33203BB921__INCLUDED_)
#define AFX_DES4_H__8DA917B8_2F02_48F5_867C_BC33203BB921__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DES4.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DES4 dialog

class DES4 : public CDialog
{
// Construction
public:
	DES4(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DES4)
	enum { IDD = IDD_DES4 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DES4)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DES4)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DES4_H__8DA917B8_2F02_48F5_867C_BC33203BB921__INCLUDED_)
