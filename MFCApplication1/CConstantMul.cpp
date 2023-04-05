// CConstantMul.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CConstantMul.h"


// CConstantMul 대화 상자

IMPLEMENT_DYNAMIC(CConstantMul, CDialog)

CConstantMul::CConstantMul(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CConstantMul, pParent)
	, m_ConstantMul(0)
{

}

CConstantMul::~CConstantMul()
{
}

void CConstantMul::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_ConstantMul);
	DDV_MinMaxDouble(pDX, m_ConstantMul, 0, 255);
}


BEGIN_MESSAGE_MAP(CConstantMul, CDialog)
END_MESSAGE_MAP()


// CConstantMul 메시지 처리기
