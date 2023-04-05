// CDownSampleDly.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CDownSampleDly.h"


// CDownSampleDly 대화 상자

IMPLEMENT_DYNAMIC(CDownSampleDly, CDialog)

CDownSampleDly::CDownSampleDly(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CDownSampleDly, pParent)
{

}

CDownSampleDly::~CDownSampleDly()
{
}

void CDownSampleDly::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDownSampleDly, CDialog)
END_MESSAGE_MAP()


// CDownSampleDly 메시지 처리기
