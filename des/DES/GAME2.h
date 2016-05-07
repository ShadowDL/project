#if !defined(AFX_GAME2_H__CED9BE12_4793_4A9C_9A75_CDC25D375D17__INCLUDED_)
#define AFX_GAME2_H__CED9BE12_4793_4A9C_9A75_CDC25D375D17__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GAME2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// GAME2 dialog

class GAME2 : public CDialog
{
// Construction
public:
	GAME2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(GAME2)
	enum { IDD = IDD_GAME2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(GAME2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(GAME2)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
	CString m_edit1;
	CString m_edit2;
	CString m_edit3;
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedButton2();
	int Num;
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GAME2_H__CED9BE12_4793_4A9C_9A75_CDC25D375D17__INCLUDED_)
