// CConstantSubDlg.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CConstantSubDlg.h"


// CConstantSubDlg 대화 상자

IMPLEMENT_DYNAMIC(CConstantSubDlg, CDialog)

CConstantSubDlg::CConstantSubDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CConstantSubDlg, pParent)
	, m_ConstantSub(0)
{

}

CConstantSubDlg::~CConstantSubDlg()
{
}

void CConstantSubDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_ConstantSub);
	DDV_MinMaxDouble(pDX, m_ConstantSub, 0, 255);
}


BEGIN_MESSAGE_MAP(CConstantSubDlg, CDialog)
END_MESSAGE_MAP()


// CConstantSubDlg 메시지 처리기
