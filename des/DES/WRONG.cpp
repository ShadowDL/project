// WRONG.cpp : 实现文件
//

#include "stdafx.h"
#include "DES.h"
#include "WRONG.h"
#include "TEST.h"
#include "afxdialogex.h"


// WRONG 对话框

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


// WRONG 消息处理程序



void WRONG::OnBnClickedButton1()
{
	EndDialog(IDCANCEL);
	
	// TODO: 在此添加控件通知处理程序代码
}
