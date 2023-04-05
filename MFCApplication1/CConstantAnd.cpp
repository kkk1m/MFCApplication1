// CConstantAnd.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CConstantAnd.h"


// CConstantAnd 대화 상자

IMPLEMENT_DYNAMIC(CConstantAnd, CDialog)

CConstantAnd::CConstantAnd(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CConstantAnd, pParent)
	, m_ConstantAnd(0)
{

}

CConstantAnd::~CConstantAnd()
{
}

void CConstantAnd::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_ConstantAnd);
	DDV_MinMaxDouble(pDX, m_ConstantAnd, 0, 255);
}


BEGIN_MESSAGE_MAP(CConstantAnd, CDialog)
END_MESSAGE_MAP()


// CConstantAnd 메시지 처리기
