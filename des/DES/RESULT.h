#pragma once


// RESULT �Ի���

class RESULT : public CDialogEx
{
	DECLARE_DYNAMIC(RESULT)

public:
	RESULT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~RESULT();

// �Ի�������
	enum { IDD = IDD_RESULT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
