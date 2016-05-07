// GAME3.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "GAME3.h"
#include "GAME4.h"
#include "GAME.h"
#include "ERR1.h"
#include "ORRECT.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// GAME3 dialog


GAME3::GAME3(CWnd* pParent /*=NULL*/)
	: CDialog(GAME3::IDD, pParent)
	, m_radio(0)
{
	//{{AFX_DATA_INIT(GAME3)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void GAME3::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(GAME3)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(GAME3, CDialog)
	//{{AFX_MSG_MAP(GAME3)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON3, &GAME3::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_RADIO1, &GAME3::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &GAME3::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &GAME3::OnBnClickedRadio3)
	ON_BN_CLICKED(IDC_BUTTON2, &GAME3::OnBnClickedButton2)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// GAME3 message handlers

void GAME3::OnButton1() 
{
	EndDialog(IDCANCEL);
	GAME dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}


void GAME3::OnBnClickedButton3()
{
	EndDialog(IDCANCEL);
	GAME4 dlg;
	dlg.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}


void GAME3::OnBnClickedRadio1()
{
	m_radio = 1;
	// TODO: 在此添加控件通知处理程序代码
}


void GAME3::OnBnClickedRadio2()
{
	m_radio=2;
	// TODO: 在此添加控件通知处理程序代码
}


void GAME3::OnBnClickedRadio3()
{
	m_radio = 3;
	// TODO: 在此添加控件通知处理程序代码
}


void GAME3::OnBnClickedButton2()
{
	if (m_radio == 1)
	{ 
	   CORRECT dlg;
	   dlg.DoModal();
	}
	else 
	{
		ERR1 dlg;
		dlg.DoModal();
	}
	// TODO: 在此添加控件通知处理程序代码
}


HBRUSH GAME3::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
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
