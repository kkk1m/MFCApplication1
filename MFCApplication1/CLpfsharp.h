#pragma once
#include "afxdialogex.h"


// CLpfsharp 대화 상자

class CLpfsharp : public CDialog
{
	DECLARE_DYNAMIC(CLpfsharp)

public:
	CLpfsharp(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CLpfsharp();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CLpfsharp };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
