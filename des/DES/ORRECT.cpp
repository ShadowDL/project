// ORRECT.cpp : 实现文件
//

#include "stdafx.h"
#include "DES.h"
#include "ORRECT.h"
#include "afxdialogex.h"


// CORRECT 对话框

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


// CORRECT 消息处理程序


void CORRECT::OnBnClickedButton1()
{
	EndDialog(IDCANCEL);
	// TODO: 在此添加控件通知处理程序代码
}
