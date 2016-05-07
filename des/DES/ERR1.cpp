// ERR1.cpp : 实现文件
//

#include "stdafx.h"
#include "DES.h"
#include "ERR1.h"
#include "afxdialogex.h"


// ERR1 对话框

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


// ERR1 消息处理程序


void ERR1::OnBnClickedButton1()
{
	EndDialog(IDCANCEL);
	// TODO: 在此添加控件通知处理程序代码
}
