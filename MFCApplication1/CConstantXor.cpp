// CConstantXor.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CConstantXor.h"


// CConstantXor 대화 상자

IMPLEMENT_DYNAMIC(CConstantXor, CDialog)

CConstantXor::CConstantXor(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CConstantXor, pParent)
	, m_ConstantXor(0)
{

}

CConstantXor::~CConstantXor()
{
}

void CConstantXor::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_ConstantXor);
	DDV_MinMaxDouble(pDX, m_ConstantXor, 0, 255);
}


BEGIN_MESSAGE_MAP(CConstantXor, CDialog)
END_MESSAGE_MAP()


// CConstantXor 메시지 처리기
