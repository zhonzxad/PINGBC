#pragma once
#include <map>
#include <tuple>

#include "CharStatic.h"

// SSCS 对话框

class SSCS : public CDialogEx
{
	DECLARE_DYNAMIC(SSCS)

public:
	SSCS(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SSCS();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SSCS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	DECLARE_MESSAGE_MAP()

public:
	CString                SSCSText;
	CString                SSCSTextSave;
	CCharStatic            m_setStatic;
	std::map<int, CString> SSCS_Value;

public:
	void OnBtnClick();
	void Init();
	
};
