#if !defined(AFX_GAME3_H__B0070C1C_5AC3_4877_9C9A_EAE12251974E__INCLUDED_)
#define AFX_GAME3_H__B0070C1C_5AC3_4877_9C9A_EAE12251974E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GAME3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// GAME3 dialog

class GAME3 : public CDialog
{
// Construction
public:
	GAME3(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(GAME3)
	enum { IDD = IDD_GAME3 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(GAME3)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(GAME3)
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	int m_radio;
	afx_msg void OnBnClickedButton2();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GAME3_H__B0070C1C_5AC3_4877_9C9A_EAE12251974E__INCLUDED_)
