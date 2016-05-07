#pragma once


// RESULT 对话框

class RESULT : public CDialogEx
{
	DECLARE_DYNAMIC(RESULT)

public:
	RESULT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~RESULT();

// 对话框数据
	enum { IDD = IDD_RESULT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
