#pragma once


// SENGM 对话框

class SENGM : public CDialogEx
{
	DECLARE_DYNAMIC(SENGM)

public:
	SENGM(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SENGM();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SHENGM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	//CCaption m_UsingInfo;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
	virtual void PostNcDestroy();
};
