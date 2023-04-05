#pragma once
#include "afxdialogex.h"


// CBinaration 대화 상자

class CBinaration : public CDialog
{
	DECLARE_DYNAMIC(CBinaration)

public:
	CBinaration(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CBinaration();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CBinaration };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
