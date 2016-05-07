// RESULT.cpp : 实现文件
//

#include "stdafx.h"
#include "TEST.h"
#include "DES.h"
#include "RESULT.h"
#include "afxdialogex.h"


// RESULT 对话框

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


// RESULT 消息处理程序


void RESULT::OnBnClickedButton1()
{
	EndDialog(IDCANCEL);
	
	// TODO: 在此添加控件通知处理程序代码
}
