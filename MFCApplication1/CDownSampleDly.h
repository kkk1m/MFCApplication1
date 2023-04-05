#pragma once
#include "afxdialogex.h"


// CDownSampleDly 대화 상자

class CDownSampleDly : public CDialog
{
	DECLARE_DYNAMIC(CDownSampleDly)

public:
	CDownSampleDly(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDownSampleDly();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CDownSampleDly };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
