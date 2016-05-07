// LEARN.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "LEARN.h"
#include "DESDlg.h"
#include "DES1.h"
#include "DES2.h"
#include "DES3.h"
#include "DES4.h"
#include "DES5.h"
#include "DES6.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// LEARN dialog


LEARN::LEARN(CWnd* pParent /*=NULL*/)
	: CDialog(LEARN::IDD, pParent)
{
	//{{AFX_DATA_INIT(LEARN)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void LEARN::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(LEARN)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(LEARN, CDialog)
	//{{AFX_MSG_MAP(LEARN)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	//}}AFX_MSG_MAP
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// LEARN message handlers

void LEARN::OnButton8() 
{
	EndDialog(IDCANCEL);
	CDESDlg dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}

void LEARN::OnButton1() 
{
  	EndDialog(IDCANCEL);
	DES1 dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}

void LEARN::OnButton2() 
{
	EndDialog(IDCANCEL);
	DES2 dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}

void LEARN::OnButton3() 
{
	EndDialog(IDCANCEL);
	DES3 dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}

void LEARN::OnButton4() 
{
	EndDialog(IDCANCEL);
	DES4 dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}

void LEARN::OnButton5() 
{
	EndDialog(IDCANCEL);
	DES5 dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}

void LEARN::OnButton6() 
{
	EndDialog(IDCANCEL);
	DES6 dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}


HBRUSH LEARN::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	 if( nCtlColor == CTLCOLOR_STATIC)
 {   
  pDC->SetBkMode(TRANSPARENT);  
  return   HBRUSH(GetStockObject(HOLLOW_BRUSH));   
 }
	// TODO:  在此更改 DC 的任何特性

	// TODO:  如果默认的不是所需画笔，则返回另一个画笔
	return hbr;
}
