#if !defined(AFX_DES2_H__5AE2E338_9C1D_4AE6_AA22_D186D85B3048__INCLUDED_)
#define AFX_DES2_H__5AE2E338_9C1D_4AE6_AA22_D186D85B3048__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DES2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DES2 dialog

class DES2 : public CDialog
{
// Construction
public:
	DES2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DES2)
	enum { IDD = IDD_DES2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DES2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DES2)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DES2_H__5AE2E338_9C1D_4AE6_AA22_D186D85B3048__INCLUDED_)
