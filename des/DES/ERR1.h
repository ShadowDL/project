#pragma once


// ERR1 对话框

class ERR1 : public CDialogEx
{
	DECLARE_DYNAMIC(ERR1)

public:
	ERR1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ERR1();

// 对话框数据
	enum { IDD = IDD_ERR1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
