// TEST1.cpp : implementation file
//

#include "stdafx.h"
#include "DES.h"
#include "RESULT.h"
#include "TEST1.h"
#include "WRONG.h"
#include "TEST.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// TEST1 dialog


TEST1::TEST1(CWnd* pParent /*=NULL*/)
	: CDialog(TEST1::IDD, pParent)
{
	//{{AFX_DATA_INIT(TEST1)
	// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_test1 = _T("");
	m_test2 = _T("");
	m_test3 = _T("");
}


void TEST1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(TEST1)
	// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
	DDX_Text(pDX, IDC_EDIT1, m_test1);
	DDX_Text(pDX, IDC_EDIT2, m_test2);
	DDX_Text(pDX, IDC_EDIT3, m_test3);
}


BEGIN_MESSAGE_MAP(TEST1, CDialog)
	//{{AFX_MSG_MAP(TEST1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON2, &TEST1::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT1, &TEST1::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &TEST1::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &TEST1::OnEnChangeEdit3)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// TEST1 message handlers

void TEST1::OnButton1() 
{
	EndDialog(IDCANCEL);
	TEST dlg;
	dlg.DoModal();
	// TODO: Add your control notification handler code here
	
}


void TEST1::OnBnClickedButton2()

{
		TEST test;
	    char *ch1 = m_test1.GetBuffer(m_test1.GetLength() + 1);
         m_test1.ReleaseBuffer();
        char *ch2 = m_test2.GetBuffer(m_test2.GetLength() + 1);
        m_test2.ReleaseBuffer();
	    char *ch3 = m_test3.GetBuffer(m_test3.GetLength() + 1);
       m_test3.ReleaseBuffer();
	  
	   if (m_test1 == "" || m_test2 =="" || m_test3 =="" )
		{
			
			WRONG dlg;
			dlg.DoModal();
		}
	   else
	   {
		   if(test.FileExist(m_test1)&&test.FileExist(m_test2))
		   {
				test.DES_Encrypt(ch1,ch2,ch3);
				
				RESULT dlg;
				dlg.DoModal();
		   }
		   else
		   {
			
			WRONG dlg;
			dlg.DoModal();
		   }
	   }
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void TEST1::OnEnChangeEdit1()
{
	GetDlgItemText(IDC_EDIT1,m_test1);
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialog::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void TEST1::OnEnChangeEdit2()
{
	GetDlgItemText(IDC_EDIT2,m_test2);
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialog::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void TEST1::OnEnChangeEdit3()
{
	GetDlgItemText(IDC_EDIT3,m_test3);
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialog::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


HBRUSH TEST1::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
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

