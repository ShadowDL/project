#pragma once


// CORRECT �Ի���

class CORRECT : public CDialogEx
{
	DECLARE_DYNAMIC(CORRECT)

public:
	CORRECT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CORRECT();

// �Ի�������
	enum { IDD = IDD_CORRECT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
