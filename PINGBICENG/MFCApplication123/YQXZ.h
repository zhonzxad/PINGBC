#pragma once

#include <tuple>

// YQXZ 对话框

class YQXZ : public CDialogEx
{
	DECLARE_DYNAMIC(YQXZ)

public:
	YQXZ(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~YQXZ();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_YQXZ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedRadioSxj();
	afx_msg void OnBnClickedRadioDzjsq();
	DECLARE_MESSAGE_MAP()

// 变量
public:
	CString sxj = L"FALSE";
	std::tuple<CString, CString> YQXZ_Value = 
	{ 
		std::pair<CString, CString>(L"NULL",L"NULL") 
	};

// 函数
public:
	virtual BOOL OnInitDialog();
	std::tuple<CString, CString> MakeTupleValue();
	void SetValue(CString a, CString b);
	// CString MakeValue();
	std::tuple<CString, CString> GetValue();

};
