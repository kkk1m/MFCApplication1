// CConstantOr.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CConstantOr.h"


// CConstantOr 대화 상자

IMPLEMENT_DYNAMIC(CConstantOr, CDialog)

CConstantOr::CConstantOr(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CConstantOr, pParent)
	, m_ConstantOr(0)
{

}

CConstantOr::~CConstantOr()
{
}

void CConstantOr::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_ConstantOr);
	DDV_MinMaxDouble(pDX, m_ConstantOr, 0, 255);
}


BEGIN_MESSAGE_MAP(CConstantOr, CDialog)
END_MESSAGE_MAP()


// CConstantOr 메시지 처리기
