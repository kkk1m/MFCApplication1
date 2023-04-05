#pragma once
#include "afxdialogex.h"


// CConstantDiv 대화 상자

class CConstantDiv : public CDialog
{
	DECLARE_DYNAMIC(CConstantDiv)

public:
	CConstantDiv(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CConstantDiv();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CConstantDiv };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	double m_ConstantDiv;
};
