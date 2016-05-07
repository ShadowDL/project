#if !defined(AFX_DES6_H__F0B2CD72_7945_4161_956F_5CB6B9E5C538__INCLUDED_)
#define AFX_DES6_H__F0B2CD72_7945_4161_956F_5CB6B9E5C538__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DES6.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DES6 dialog

class DES6 : public CDialog
{
// Construction
public:
	DES6(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DES6)
	enum { IDD = IDD_DES6 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DES6)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DES6)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DES6_H__F0B2CD72_7945_4161_956F_5CB6B9E5C538__INCLUDED_)
