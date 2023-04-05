// CConstantDiv.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CConstantDiv.h"


// CConstantDiv 대화 상자

IMPLEMENT_DYNAMIC(CConstantDiv, CDialog)

CConstantDiv::CConstantDiv(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CConstantDiv, pParent)
	, m_ConstantDiv(0)
{

}

CConstantDiv::~CConstantDiv()
{
}

void CConstantDiv::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_ConstantDiv);
	DDV_MinMaxDouble(pDX, m_ConstantDiv, 0, 255);
}


BEGIN_MESSAGE_MAP(CConstantDiv, CDialog)
END_MESSAGE_MAP()


// CConstantDiv 메시지 처리기
