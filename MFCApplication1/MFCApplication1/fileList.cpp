// fileList.cpp : 実装ファイル
//

#include "pch.h"
#include "MFCApplication1.h"
#include "afxdialogex.h"
#include "fileList.h"


// fileList ダイアログ

IMPLEMENT_DYNAMIC(fileList, CDialogEx)

fileList::fileList(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION1_DIALOG, pParent)
{

}

fileList::~fileList()
{
}

void fileList::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listCtrl);
}



BEGIN_MESSAGE_MAP(fileList, CDialogEx)
END_MESSAGE_MAP()


// fileList メッセージ ハンドラー
