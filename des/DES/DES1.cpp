// DES1.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "DES1.h"
#include "DESDlg.h"
#include "LEARN.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DES1 dialog


DES1::DES1(CWnd* pParent /*=NULL*/)
	: CDialog(DES1::IDD, pParent)
{
	//{{AFX_DATA_INIT(DES1)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void DES1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DES1)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DES1, CDialog)
	//{{AFX_MSG_MAP(DES1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DES1 message handlers

void DES1::OnButton1() 
{
	EndDialog(IDCANCEL);
	LEARN dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}



HBRUSH DES1::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)//实现静态文本框背景透明化
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
