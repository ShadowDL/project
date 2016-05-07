// DES5.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "DES5.h"
#include "DESDlg.h"
#include "LEARN.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DES5 dialog


DES5::DES5(CWnd* pParent /*=NULL*/)
	: CDialog(DES5::IDD, pParent)
{
	//{{AFX_DATA_INIT(DES5)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void DES5::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DES5)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DES5, CDialog)
	//{{AFX_MSG_MAP(DES5)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DES5 message handlers

void DES5::OnButton1() 
{
	EndDialog(IDCANCEL);
	LEARN dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}


HBRUSH DES5::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	if( nCtlColor == CTLCOLOR_STATIC)
 {   
  pDC->SetBkMode(TRANSPARENT);  
  return   HBRUSH(GetStockObject(HOLLOW_BRUSH));   
 }
	// TODO:  �ڴ˸��� DC ���κ�����

	// TODO:  ���Ĭ�ϵĲ������軭�ʣ��򷵻���һ������
	return hbr;
}
