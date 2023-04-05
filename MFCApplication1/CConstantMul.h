#pragma once
#include "afxdialogex.h"


// CConstantMul 대화 상자

class CConstantMul : public CDialog
{
	DECLARE_DYNAMIC(CConstantMul)

public:
	CConstantMul(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CConstantMul();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CConstantMul };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	double m_ConstantMul;
};
