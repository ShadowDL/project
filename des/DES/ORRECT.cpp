// ORRECT.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DES.h"
#include "ORRECT.h"
#include "afxdialogex.h"


// CORRECT �Ի���

IMPLEMENT_DYNAMIC(CORRECT, CDialogEx)

CORRECT::CORRECT(CWnd* pParent /*=NULL*/)
	: CDialogEx(CORRECT::IDD, pParent)
{

}

CORRECT::~CORRECT()
{
}

void CORRECT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CORRECT, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CORRECT::OnBnClickedButton1)
END_MESSAGE_MAP()


// CORRECT ��Ϣ�������


void CORRECT::OnBnClickedButton1()
{
	EndDialog(IDCANCEL);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
