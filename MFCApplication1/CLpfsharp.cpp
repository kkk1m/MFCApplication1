// CLpfsharp.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CLpfsharp.h"


// CLpfsharp 대화 상자

IMPLEMENT_DYNAMIC(CLpfsharp, CDialog)

CLpfsharp::CLpfsharp(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CLpfsharp, pParent)
{

}

CLpfsharp::~CLpfsharp()
{
}

void CLpfsharp::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLpfsharp, CDialog)
END_MESSAGE_MAP()


// CLpfsharp 메시지 처리기
