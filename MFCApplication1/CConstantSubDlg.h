#pragma once
#include "afxdialogex.h"


// CConstantSubDlg 대화 상자

class CConstantSubDlg : public CDialog
{
	DECLARE_DYNAMIC(CConstantSubDlg)

public:
	CConstantSubDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CConstantSubDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CConstantSubDlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	double m_ConstantSub;
};
