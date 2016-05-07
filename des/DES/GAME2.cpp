// GAME2.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "GAME2.h"
#include "GAME3.h"
#include "GAME.h"
#include "ORRECT.h"
#include "ERR1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// GAME2 dialog


GAME2::GAME2(CWnd* pParent /*=NULL*/)
	: CDialog(GAME2::IDD, pParent)
	, Num(0)
{
	//{{AFX_DATA_INIT(GAME2)
	// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_edit1 = _T("");
	m_edit2 = _T("");
	m_edit3 = _T("");
}


void GAME2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(GAME2)
	// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Text(pDX, IDC_EDIT3, m_edit3);
}


BEGIN_MESSAGE_MAP(GAME2, CDialog)
	//{{AFX_MSG_MAP(GAME2)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON3, &GAME2::OnBnClickedButton3)
	ON_EN_CHANGE(IDC_EDIT1, &GAME2::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &GAME2::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &GAME2::OnEnChangeEdit3)
	ON_BN_CLICKED(IDC_BUTTON2, &GAME2::OnBnClickedButton2)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// GAME2 message handlers

void GAME2::OnButton1() 
{
	EndDialog(IDCANCEL);
	GAME dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}


void GAME2::OnBnClickedButton3()
{
	
	EndDialog(IDCANCEL);
	GAME3 dlg;
	dlg.DoModal();
	// TODO: 在此添加控件通知处理程序代码
}


void GAME2::OnEnChangeEdit1()
{
	GetDlgItemText(IDC_EDIT1,m_edit1);
	
}


void GAME2::OnEnChangeEdit2()
{
	GetDlgItemText(IDC_EDIT2,m_edit2);
	
}


void GAME2::OnEnChangeEdit3()
{
	GetDlgItemText(IDC_EDIT3,m_edit3);
	
}


void GAME2::OnBnClickedButton2()
{
	
	if(m_edit1=="16" && m_edit2 =="9" && m_edit3 =="19" )
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


HBRUSH GAME2::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
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
