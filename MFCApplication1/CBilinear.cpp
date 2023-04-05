// CBilinear.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CBilinear.h"


// CBilinear 대화 상자

IMPLEMENT_DYNAMIC(CBilinear, CDialog)

CBilinear::CBilinear(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CBilinear, pParent)
{

}

CBilinear::~CBilinear()
{
}

void CBilinear::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBilinear, CDialog)
END_MESSAGE_MAP()


// CBilinear 메시지 처리기
