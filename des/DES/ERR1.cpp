// ERR1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DES.h"
#include "ERR1.h"
#include "afxdialogex.h"


// ERR1 �Ի���

IMPLEMENT_DYNAMIC(ERR1, CDialogEx)

ERR1::ERR1(CWnd* pParent /*=NULL*/)
	: CDialogEx(ERR1::IDD, pParent)
{

}

ERR1::~ERR1()
{
}

void ERR1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ERR1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &ERR1::OnBnClickedButton1)
END_MESSAGE_MAP()


// ERR1 ��Ϣ�������


void ERR1::OnBnClickedButton1()
{
	EndDialog(IDCANCEL);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
