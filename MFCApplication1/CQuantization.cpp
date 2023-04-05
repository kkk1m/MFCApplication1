// CQuantization.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CQuantization.h"


// CQuantization 대화 상자

IMPLEMENT_DYNAMIC(CQuantization, CDialog)

CQuantization::CQuantization(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CQuantization, pParent)
	, m_QuantBit(0)
{

}

CQuantization::~CQuantization()
{
}

void CQuantization::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_QuantBit);
	DDV_MinMaxInt(pDX, m_QuantBit, 1, 8);
}


BEGIN_MESSAGE_MAP(CQuantization, CDialog)
END_MESSAGE_MAP()


// CQuantization 메시지 처리기
