#pragma once
#include "afxdialogex.h"


// fileList ダイアログ

class fileList : public CDialogEx
{
	DECLARE_DYNAMIC(fileList)

public:
	fileList(CWnd* pParent = nullptr);   // 標準コンストラクター
	virtual ~fileList();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

	DECLARE_MESSAGE_MAP()
};
