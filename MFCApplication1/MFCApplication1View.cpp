
// MFCApplication1View.cpp: CMFCApplication1View 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "MFCApplication1.h"
#endif

#include "MFCApplication1Doc.h"
#include "MFCApplication1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1View

IMPLEMENT_DYNCREATE(CMFCApplication1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMFCApplication1View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_DOWN_SAMPLING, &CMFCApplication1View::OnDownSampling)
	ON_COMMAND(ID_UP_SAMPLING, &CMFCApplication1View::OnUpSampling)
	ON_COMMAND(ID_Quantization, &CMFCApplication1View::OnQuantization)
	ON_COMMAND(ID_SUM_CONSTANT, &CMFCApplication1View::OnSumConstant)
	ON_COMMAND(ID_SUB_CONSTANT, &CMFCApplication1View::OnSubConstant)
	ON_COMMAND(ID_MUL_CONSTANT, &CMFCApplication1View::OnMulConstant)
	ON_COMMAND(ID_DIV_CONSTANT, &CMFCApplication1View::OnDivConstant)
	ON_COMMAND(ID_AND_OPERATE, &CMFCApplication1View::OnAndOperate)
	ON_COMMAND(ID_OR_OPERATE, &CMFCApplication1View::OnOrOperate)
	ON_COMMAND(ID_XOR_OPERATE, &CMFCApplication1View::OnXorOperate)
	ON_COMMAND(ID_NEGA_TRANSFORM, &CMFCApplication1View::OnNegaTransform)
	ON_COMMAND(ID_GAMMA_CORRECTION, &CMFCApplication1View::OnGammaCorrection)
	ON_COMMAND(ID_BINARIZATION, &CMFCApplication1View::OnBinarization)
	ON_COMMAND(ID_STRESS_TRANSFORM, &CMFCApplication1View::OnStressTransform)
	ON_COMMAND(ID_HISTO_STRETCH, &CMFCApplication1View::OnHistoStretch)
	ON_COMMAND(ID_END_IN_SEARCH, &CMFCApplication1View::OnEndInSearch)
	ON_COMMAND(ID_HISTOGRAM, &CMFCApplication1View::OnHistogram)
	ON_COMMAND(ID_HISTO_EQUAL, &CMFCApplication1View::OnHistoEqual)
	ON_COMMAND(ID_HISTO_SPEC, &CMFCApplication1View::OnHistoSpec)
	ON_COMMAND(ID_EMBOSSING, &CMFCApplication1View::OnEmbossing)
	ON_COMMAND(ID_BILINEAR, &CMFCApplication1View::OnBilinear)
	ON_COMMAND(ID_BLURR, &CMFCApplication1View::OnBlurr)
	ON_COMMAND(ID_GAUSSIAN_FILTER, &CMFCApplication1View::OnGaussianFilter)
	ON_COMMAND(ID_SHARPENING, &CMFCApplication1View::OnSharpening)
	ON_COMMAND(ID_HPF_SHARP, &CMFCApplication1View::OnHpfSharp)
	ON_COMMAND(ID_LPF_SHARP, &CMFCApplication1View::OnLpfSharp)
	ON_COMMAND(ID_DIFF_OPERATOR_HOR, &CMFCApplication1View::OnDiffOperatorHor)
	ON_COMMAND(ID_HOMOGEN_OPERATOR, &CMFCApplication1View::OnHomogenOperator)
	ON_COMMAND(ID_LAPLACIAN, &CMFCApplication1View::OnLaplacian)
	ON_COMMAND(ID_NEAREST, &CMFCApplication1View::OnNearest)
	ON_COMMAND(ID_MEDIAN_SUB, &CMFCApplication1View::OnMedianSub)
	ON_COMMAND(ID_MEAN_SUB, &CMFCApplication1View::OnMeanSub)
END_MESSAGE_MAP()

// CMFCApplication1View 생성/소멸

CMFCApplication1View::CMFCApplication1View() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CMFCApplication1View::~CMFCApplication1View()
{
}

BOOL CMFCApplication1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1View 그리기

void CMFCApplication1View::OnDraw(CDC* pDC)
{
	CMFCApplication1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	int i, j;
	unsigned char R, G, B;
	// 입력 영상 출력
	for (i = 0; i < pDoc->m_height; i++) {
		for (j = 0; j < pDoc->m_width; j++) {
			R = pDoc->m_InputImage[i * pDoc->m_width + j];
			G = B = R;
			pDC->SetPixel(j + 5, i + 5, RGB(R, G, B));
		}
	}

	// 축소된 영상 출력
	for (i = 0; i < pDoc->m_Re_height; i++) {
		for (j = 0; j < pDoc->m_Re_width; j++) {
			R = pDoc->m_OutputImage[i * pDoc->m_Re_width + j];
			G = B = R;
			pDC->SetPixel(j + pDoc->m_width + 10, i + 5, RGB(R, G, B));
		}
	}
}


// CMFCApplication1View 인쇄


void CMFCApplication1View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMFCApplication1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CMFCApplication1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CMFCApplication1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void CMFCApplication1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCApplication1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCApplication1View 진단

#ifdef _DEBUG
void CMFCApplication1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1Doc* CMFCApplication1View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1Doc)));
	return (CMFCApplication1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1View 메시지 처리기


void CMFCApplication1View::OnDownSampling()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.

	CMFCApplication1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);

	pDoc->OnDownSampling(); // Doc 클래스에 OnDownSampling 함수 호출

	Invalidate(TRUE); // 화면 갱신

}


void CMFCApplication1View::OnUpSampling()
{
	// TODO: Add your command handler code here
	CMFCApplication1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);

	pDoc->OnUpSampling(); // Doc 클래스에 OnUpSampling 함수 호출

	Invalidate(TRUE); // 화면 갱신

}


void CMFCApplication1View::OnQuantization()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);

	pDoc->OnQuantization(); // Doc 클래스에 OnQuantization 함수 호출

	Invalidate(TRUE); // 화면 갱신

}


void CMFCApplication1View::OnSumConstant()
{
	// TODO: Add your command handler code here
	CMFCApplication1Doc* pDoc = GetDocument();
	// 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnSumConstant();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnSubConstant()
{
	// TODO: 여기에 구현 코드 추가.
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	// TODO: Add your command handler code here
	CMFCApplication1Doc* pDoc = GetDocument();// 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnSubConstant();

	Invalidate(TRUE);


}


void CMFCApplication1View::OnMulConstant()
{
	// TODO: Add your command handler code here
	CMFCApplication1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnMulConstant();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnDivConstant()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	// TODO: Add your command handler code here
	CMFCApplication1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnDivConstant();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnAndOperate()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnAndOperate();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnOrOperate()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnOrOperate();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnXorOperate()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->OnXorOperate();
	Invalidate(TRUE);

}


void CMFCApplication1View::OnNegaTransform()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnNegaTransform();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnGammaCorrection()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnGammaCorrection();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnBinarization()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBinarization();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnStressTransform()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnStressTransform();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnHistoStretch()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistoStretch();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnEndInSearch()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnEndInSearch();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnHistogram()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistogram();
	Invalidate(TRUE);

}


void CMFCApplication1View::OnHistoEqual()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistoEqual();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnHistoSpec()
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistoSpec();

		Invalidate(TRUE);

}


void CMFCApplication1View::OnEmbossing()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnEmbossing();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnBilinear()
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBilinear();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnBlurr()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBlurr();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnGaussianFilter()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnGaussianFilter();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnSharpening()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnSharpening();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnHpfSharp()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHpfSharp();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnLpfSharp()
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLpfSharp();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnDiffOperatorHor()
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnDiffOperatorHor();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnHomogenOperator()
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHomogenOperator();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnLaplacian()
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLaplacian();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnNearest()
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnNearest();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnMedianSub()
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMedianSub();

	Invalidate(TRUE);

}


void CMFCApplication1View::OnMeanSub()
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMeanSub();

	Invalidate(TRUE);

}
