// DES2.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "DES2.h"
#include "DESDlg.h"
#include "LEARN.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DES2 dialog


DES2::DES2(CWnd* pParent /*=NULL*/)
	: CDialog(DES2::IDD, pParent)
{
	//{{AFX_DATA_INIT(DES2)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void DES2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DES2)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DES2, CDialog)
	//{{AFX_MSG_MAP(DES2)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DES2 message handlers

void DES2::OnButton1() 
{
	EndDialog(IDCANCEL);
	LEARN dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}


HBRUSH DES2::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
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
