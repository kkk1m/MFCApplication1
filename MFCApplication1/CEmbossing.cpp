// CEmbossing.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CEmbossing.h"


// CEmbossing 대화 상자

IMPLEMENT_DYNAMIC(CEmbossing, CDialog)

CEmbossing::CEmbossing(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CEmbossing, pParent)
	//, m_tempImage(nullptr)
{

}

CEmbossing::~CEmbossing()
{
}

void CEmbossing::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_EDIT1, m_tempImage);
}


BEGIN_MESSAGE_MAP(CEmbossing, CDialog)
END_MESSAGE_MAP()


// CEmbossing 메시지 처리기
