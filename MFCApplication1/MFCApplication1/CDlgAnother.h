#pragma once
#include "afxdialogex.h"


// CDlgAnother ダイアログ

class CDlgAnother : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgAnother)

public:
	CDlgAnother(CWnd* pParent = nullptr);   // 標準コンストラクター
	virtual ~CDlgAnother();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PROPPAGE_LARGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedClose();
};
