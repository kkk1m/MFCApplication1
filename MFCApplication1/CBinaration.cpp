// CBinaration.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CBinaration.h"


// CBinaration 대화 상자

IMPLEMENT_DYNAMIC(CBinaration, CDialog)

CBinaration::CBinaration(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CBinaration, pParent)
{

}

CBinaration::~CBinaration()
{
}

void CBinaration::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBinaration, CDialog)
END_MESSAGE_MAP()


// CBinaration 메시지 처리기
