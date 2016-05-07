#if !defined(AFX_TEST_H__43192A48_3D02_452F_9AAB_662456A18C52__INCLUDED_)
#define AFX_TEST_H__43192A48_3D02_452F_9AAB_662456A18C52__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TEST.h : header file
//

#include "stdio.h"
#include "memory.h"
#include "time.h"
#include "stdlib.h"
#define PLAIN_FILE_OPEN_ERROR -1
#define KEY_FILE_OPEN_ERROR -2
#define CIPHER_FILE_OPEN_ERROR -3
#define OK 1
typedef char ElemType;
/////////////////////////////////////////////////////////////////////////////
// TEST dialog

class TEST : public CDialog
{
// Construction
public:
	int Bit64ToChar8(ElemType bit[64], ElemType ch[8]);
	int Char8ToBit64(ElemType ch[8], ElemType bit[64]);
	int BitToByte(ElemType bit[8], ElemType *ch);
	int ByteToBit(ElemType ch, ElemType bit[8]);
	int DES_MakeSubKeys(ElemType key[64], ElemType subKeys[16][48]);
	int DES_PC1_Transform(ElemType key[64], ElemType tempbts[56]);
	int DES_PC2_Transform(ElemType key[56], ElemType tempbts[48]);
	int DES_ROL(ElemType data[56], int time);
	int DES_IP_Transform(ElemType data[64]);
	int DES_IP_1_Transform(ElemType data[64]);
	int DES_E_Transform(ElemType data[48]);
	int DES_P_Transform(ElemType data[32]);
	int DES_SBOX(ElemType data[48]);
	int DES_XOR(ElemType R[48], ElemType L[48], int count);
	int DES_Swap(ElemType left[32], ElemType right[32]);
	int DES_EncryptBlock(ElemType plainBlock[8], ElemType subKeys[16][48], ElemType cipherBlock[8]);
	int DES_DecryptBlock(ElemType cipherBlock[8], ElemType subKeys[16][48], ElemType plainBlock[8]);
	int DES_Encrypt(char *plainFile, char *keyStr, char *cipherFile);
	int DES_Decrypt(char *cipherFile, char *keyStr, char *plainFile);

	TEST(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(TEST)
	enum { IDD = IDD_TEST };
	
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(TEST)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(TEST)
	afx_msg void OnButton3();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	BOOL FileExist(CString FileName);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_H__43192A48_3D02_452F_9AAB_662456A18C52__INCLUDED_)
