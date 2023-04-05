// CConstantDlg.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CConstantDlg.h"


// CConstantDlg 대화 상자

IMPLEMENT_DYNAMIC(CConstantDlg, CDialog)

CConstantDlg::CConstantDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CConstantDlg, pParent)
	, m_Constant(0)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

}

CConstantDlg::~CConstantDlg()
{
}

void CConstantDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Constant);
	DDV_MinMaxDouble(pDX, m_Constant, 0, 255);
}


BEGIN_MESSAGE_MAP(CConstantDlg, CDialog)
//	ON_COMMAND(IDC_EDIT1, &CConstantDlg::OnEdit1)
//ON_EN_CHANGE(IDC_EDIT1, &CConstantDlg::OnEnChangeEdit1)
//ON_COMMAND(ID_SUM_CONSTANT, &CConstantDlg::OnSumConstant)
END_MESSAGE_MAP()


// CConstantDlg 메시지 처리기


//void CConstantDlg::OnEdit1()
//{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
//}


//void CConstantDlg::OnEnChangeEdit1()
//{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialog::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
//}


//void CConstantDlg::OnSumConstant()
//{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
//}
