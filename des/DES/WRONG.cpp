// WRONG.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DES.h"
#include "WRONG.h"
#include "TEST.h"
#include "afxdialogex.h"


// WRONG �Ի���

IMPLEMENT_DYNAMIC(WRONG, CDialogEx)

WRONG::WRONG(CWnd* pParent /*=NULL*/)
	: CDialogEx(WRONG::IDD, pParent)
{

}

WRONG::~WRONG()
{
}

void WRONG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(WRONG, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &WRONG::OnBnClickedButton1)
END_MESSAGE_MAP()


// WRONG ��Ϣ�������



void WRONG::OnBnClickedButton1()
{
	EndDialog(IDCANCEL);
	
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
