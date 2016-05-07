#if !defined(AFX_ABOUT_H__3CC45C4A_C2B5_41AD_BD46_8EA7B5078BBC__INCLUDED_)
#define AFX_ABOUT_H__3CC45C4A_C2B5_41AD_BD46_8EA7B5078BBC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ABOUT.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ABOUT dialog

class ABOUT : public CDialog
{
// Construction
public:
	ABOUT(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ABOUT)
	enum { IDD = IDD_ABOUT };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ABOUT)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ABOUT)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ABOUT_H__3CC45C4A_C2B5_41AD_BD46_8EA7B5078BBC__INCLUDED_)
