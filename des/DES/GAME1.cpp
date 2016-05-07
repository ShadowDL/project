// GAME1.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "GAME1.h"
#include "ERR1.h"
#include "GAME2.h"
#include "GAME.h"
#include "ORRECT.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// GAME1 dialog


GAME1::GAME1(CWnd* pParent /*=NULL*/)
	: CDialog(GAME1::IDD, pParent)
	
{
	//{{AFX_DATA_INIT(GAME1)
	// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_edit = _T("");
}


void GAME1::DoDataExchange(CDataExchange* pDX)
{

	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(GAME1)
	// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
	DDX_Text(pDX, IDC_EDIT2, m_edit);
}


BEGIN_MESSAGE_MAP(GAME1, CDialog)
	//{{AFX_MSG_MAP(GAME1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON3, &GAME1::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &GAME1::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT2, &GAME1::OnEnChangeEdit2)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// GAME1 message handlers

void GAME1::OnButton1() 
{
	EndDialog(IDCANCEL);
	GAME dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}
    

void GAME1::OnBnClickedButton3()
{    

	EndDialog(IDCANCEL);
	 GAME2 dlg;
	dlg.DoModal();

	// TODO: 在此添加控件通知处理程序代码
}


void GAME1::OnBnClickedButton2()
{
	
	
	if (Num == 1)
	{ 
	   CORRECT dlg;
	   dlg.DoModal();
	}
	else if (Num == 0)
	{
		ERR1 dlg;
		dlg.DoModal();
	}

	// TODO: 在此添加控件通知处理程序代码
}


void GAME1::OnEnChangeEdit2()     //对输入的内容进行判断
{
	GetDlgItemText(IDC_EDIT2,m_edit);//获得编辑框内内容

		 if(m_edit != "From see you one eye, I shit love you")
			 Num = 0;
		 else
			 Num =1;
	
}


HBRUSH GAME1::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
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
