#pragma once
#include "afxdialogex.h"


// CConstantOr 대화 상자

class CConstantOr : public CDialog
{
	DECLARE_DYNAMIC(CConstantOr)

public:
	CConstantOr(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CConstantOr();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CConstantOr };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	double m_ConstantOr;
};
