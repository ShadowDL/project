// DES.h : main header file for the DES application
//

#if !defined(AFX_DES_H__501CC771_64D9_40B3_A0FD_B1308F410A3F__INCLUDED_)
#define AFX_DES_H__501CC771_64D9_40B3_A0FD_B1308F410A3F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDESApp:
// See DES.cpp for the implementation of this class
//

class CDESApp : public CWinApp
{
public:
	CDESApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDESApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDESApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DES_H__501CC771_64D9_40B3_A0FD_B1308F410A3F__INCLUDED_)
