#if !defined(AFX_DES1_H__12DA83BA_00D6_4961_A02D_F00358527974__INCLUDED_)
#define AFX_DES1_H__12DA83BA_00D6_4961_A02D_F00358527974__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DES1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DES1 dialog

class DES1 : public CDialog
{
// Construction
public:
	DES1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DES1)
	enum { IDD = IDD_DES1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DES1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DES1)
	afx_msg void OnButton1();
	afx_msg void OnSelchangeList1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DES1_H__12DA83BA_00D6_4961_A02D_F00358527974__INCLUDED_)
