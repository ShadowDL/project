// RESULT.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "TEST.h"
#include "DES.h"
#include "RESULT.h"
#include "afxdialogex.h"


// RESULT �Ի���

IMPLEMENT_DYNAMIC(RESULT, CDialogEx)

RESULT::RESULT(CWnd* pParent /*=NULL*/)
	: CDialogEx(RESULT::IDD, pParent)
{

}

RESULT::~RESULT()
{
}

void RESULT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(RESULT, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &RESULT::OnBnClickedButton1)
END_MESSAGE_MAP()


// RESULT ��Ϣ�������


void RESULT::OnBnClickedButton1()
{
	EndDialog(IDCANCEL);
	
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
