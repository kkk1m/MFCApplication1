#pragma once
#include "afxdialogex.h"


// CConstantAnd 대화 상자

class CConstantAnd : public CDialog
{
	DECLARE_DYNAMIC(CConstantAnd)

public:
	CConstantAnd(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CConstantAnd();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CConstantAnd };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	double m_ConstantAnd;
};
