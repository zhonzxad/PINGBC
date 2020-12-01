#pragma once


// TKSS 对话框

class TKSS : public CDialogEx
{
	DECLARE_DYNAMIC(TKSS)

public:
	TKSS(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~TKSS();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TKSS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
