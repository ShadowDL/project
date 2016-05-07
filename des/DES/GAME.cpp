// GAME.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "GAME.h"
#include "GAME1.h"
#include "GAME2.h"
#include "GAME3.h"
#include "GAME4.h"
#include "DESDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// GAME dialog


GAME::GAME(CWnd* pParent /*=NULL*/)
	: CDialog(GAME::IDD, pParent)
{
	//{{AFX_DATA_INIT(GAME)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void GAME::DoDataExchange(CDataExchange* pDX)
{
	m_num = 0;
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(GAME)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(GAME, CDialog)
	//{{AFX_MSG_MAP(GAME)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	//}}AFX_MSG_MAP
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// GAME message handlers

void GAME::OnButton5() 
{
	EndDialog(IDCANCEL);
	CDESDlg dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}


void GAME::OnButton1() 
{
	EndDialog(IDCANCEL);
	GAME1 dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}

void GAME::OnButton2() 
{
	
    EndDialog(IDCANCEL);
	GAME2 dlg;
	dlg.DoModal();
	
	
	// TODO: Add your control notification handler code here
	
}

void GAME::OnButton3() 
{
	EndDialog(IDCANCEL);
	GAME3 dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}

void GAME::OnButton4() 
{
	EndDialog(IDCANCEL);
	GAME4 dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}





HBRUSH GAME::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
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
