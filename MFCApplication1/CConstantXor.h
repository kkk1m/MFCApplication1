#pragma once
#include "afxdialogex.h"


// CConstantXor 대화 상자

class CConstantXor : public CDialog
{
	DECLARE_DYNAMIC(CConstantXor)

public:
	CConstantXor(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CConstantXor();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CConstantXor };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	double m_ConstantXor;
};
