#pragma once
#include "afxdialogex.h"


// CStressTransform 대화 상자

class CStressTransform : public CDialog
{
	DECLARE_DYNAMIC(CStressTransform)

public:
	CStressTransform(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CStressTransform();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CStressTransform };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	int m_StartPoint;
	int m_EndPoint;
};
