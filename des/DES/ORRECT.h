#pragma once


// CORRECT 对话框

class CORRECT : public CDialogEx
{
	DECLARE_DYNAMIC(CORRECT)

public:
	CORRECT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CORRECT();

// 对话框数据
	enum { IDD = IDD_CORRECT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
