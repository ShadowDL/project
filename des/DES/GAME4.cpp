// GAME4.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "GAME4.h"
#include "GAME.h"
 #include "Vfw.H"
#include <mmsystem.h>
#pragma comment(lib, "WINMM.LIB")
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// GAME4 dialog


GAME4::GAME4(CWnd* pParent /*=NULL*/)
	: CDialog(GAME4::IDD, pParent)
{
	//{{AFX_DATA_INIT(GAME4)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void GAME4::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(GAME4)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(GAME4, CDialog)
	//{{AFX_MSG_MAP(GAME4)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON2, &GAME4::OnBnClickedButton2)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// GAME4 message handlers

void GAME4::OnButton1() 
{
	EndDialog(IDCANCEL);
	GAME dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}


void GAME4::OnBnClickedButton2()
{
   HWND hMCI;
   CString choose = _T("e:\\des\\DES\\res\\���֮��.mp3");//�����ļ���·��  
   hMCI = MCIWndCreate(NULL, NULL,WS_POPUP|MCIWNDF_NOPLAYBAR|MCIWNDF_NOMENU,choose);
   MCIWndPlay(hMCI); //�������� 

	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


HBRUSH GAME4::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
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
