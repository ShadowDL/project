#pragma once


// WRONG �Ի���

class WRONG : public CDialogEx
{
	DECLARE_DYNAMIC(WRONG)

public:
	WRONG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~WRONG();

// �Ի�������
	enum { IDD = IDD_WRONG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
