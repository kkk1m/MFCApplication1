// CStressTransform.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CStressTransform.h"


// CStressTransform 대화 상자

IMPLEMENT_DYNAMIC(CStressTransform, CDialog)

CStressTransform::CStressTransform(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CStressTransform, pParent)
	, m_StartPoint(0)
	, m_EndPoint(0)
{

}

CStressTransform::~CStressTransform()
{
}

void CStressTransform::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_StartPoint);
	DDV_MinMaxInt(pDX, m_StartPoint, 0, 255);
	DDX_Text(pDX, IDC_EDIT2, m_EndPoint);
	DDV_MinMaxInt(pDX, m_EndPoint, 0, 255);
}


BEGIN_MESSAGE_MAP(CStressTransform, CDialog)
END_MESSAGE_MAP()


// CStressTransform 메시지 처리기
