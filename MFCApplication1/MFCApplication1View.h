
// MFCApplication1View.h: CMFCApplication1View 클래스의 인터페이스
//

#pragma once


class CMFCApplication1View : public CView
{
protected: // serialization에서만 만들어집니다.
	CMFCApplication1View() noexcept;
	DECLARE_DYNCREATE(CMFCApplication1View)

// 특성입니다.
public:
	CMFCApplication1Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CMFCApplication1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDownSampling();
	afx_msg void OnUpSampling();
	afx_msg void OnQuantization();
	void OnSumConstant();
	void OnSubConstant();
	afx_msg void OnMulConstant();
	afx_msg void OnDivConstant();
	afx_msg void OnAndOperate();
	afx_msg void OnOrOperate();
	afx_msg void OnXorOperate();
	afx_msg void OnNegaTransform();
	afx_msg void OnGammaCorrection();
	afx_msg void OnBinarization();
	afx_msg void OnStressTransform();
	afx_msg void OnHistoStretch();
	afx_msg void OnEndInSearch();
	afx_msg void OnHistogram();
	afx_msg void OnHistoEqual();
	afx_msg void OnHistoSpec();
	afx_msg void OnEmbossing();
	afx_msg void OnBilinear();
	afx_msg void OnBlurr();
	afx_msg void OnGaussianFilter();
	afx_msg void OnSharpening();
	afx_msg void OnHpfSharp();
	afx_msg void OnLpfSharp();
	afx_msg void OnDiffOperatorHor();
	afx_msg void OnHomogenOperator();
	afx_msg void OnLaplacian();
	afx_msg void OnNearest();
	afx_msg void OnMedianSub();
	afx_msg void OnMeanSub();
};

#ifndef _DEBUG  // MFCApplication1View.cpp의 디버그 버전
inline CMFCApplication1Doc* CMFCApplication1View::GetDocument() const
   { return reinterpret_cast<CMFCApplication1Doc*>(m_pDocument); }
#endif

