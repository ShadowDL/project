#pragma once


// ERR1 �Ի���

class ERR1 : public CDialogEx
{
	DECLARE_DYNAMIC(ERR1)

public:
	ERR1(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ERR1();

// �Ի�������
	enum { IDD = IDD_ERR1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
