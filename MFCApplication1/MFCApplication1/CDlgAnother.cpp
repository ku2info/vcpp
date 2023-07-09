// CDlgAnother.cpp : 実装ファイル
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "CDlgAnother.h"


// CDlgAnother ダイアログ

IMPLEMENT_DYNAMIC(CDlgAnother, CDialogEx)

CDlgAnother::CDlgAnother(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_PROPPAGE_LARGE, pParent)
{

}

CDlgAnother::~CDlgAnother()
{
}

void CDlgAnother::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgAnother, CDialogEx)
	ON_BN_CLICKED(IDC_CLOSE, &CDlgAnother::OnBnClickedClose)
END_MESSAGE_MAP()


// CDlgAnother メッセージ ハンドラー


void CDlgAnother::OnBnClickedClose()
{
	// TODO: ここにコントロール通知ハンドラー コードを追加します。
	int nResult = 0;
	this->EndDialog(nResult);

}
