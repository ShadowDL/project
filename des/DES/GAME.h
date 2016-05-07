#if !defined(AFX_GAME_H__DF914675_73C6_499B_A5C7_9800026DF3A3__INCLUDED_)
#define AFX_GAME_H__DF914675_73C6_499B_A5C7_9800026DF3A3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GAME.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// GAME dialog

class GAME : public CDialog
{
// Construction
public:
	GAME(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(GAME)
	enum { IDD = IDD_GAME };
	int m_num;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(GAME)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(GAME)
	afx_msg void OnButton5();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GAME_H__DF914675_73C6_499B_A5C7_9800026DF3A3__INCLUDED_)
