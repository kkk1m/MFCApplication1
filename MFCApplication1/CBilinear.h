#pragma once
#include "afxdialogex.h"


// CBilinear 대화 상자

class CBilinear : public CDialog
{
	DECLARE_DYNAMIC(CBilinear)

public:
	CBilinear(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CBilinear();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CBilinear };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
