#pragma once


// WRONG 对话框

class WRONG : public CDialogEx
{
	DECLARE_DYNAMIC(WRONG)

public:
	WRONG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~WRONG();

// 对话框数据
	enum { IDD = IDD_WRONG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
