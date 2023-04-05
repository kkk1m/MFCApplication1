#pragma once
#include "afxdialogex.h"


// CEmbossing 대화 상자

class CEmbossing : public CDialog
{
	DECLARE_DYNAMIC(CEmbossing)

public:
	CEmbossing(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CEmbossing();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CEmbossing };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
//	double** m_tempImage;
};
