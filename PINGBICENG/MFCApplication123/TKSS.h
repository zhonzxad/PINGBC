#pragma once
#include <map>
#include <vector>


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
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadioFss();
	afx_msg void OnBnClickedRadioCxss();
	afx_msg void OnBnClickedOk();

public:
	std::vector<int> NameText =
	{
		IDC_RADIO_FSS,
		IDC_RADIO_CXSS,
		IDC_EDIT_LTJ,
		IDC_EDIT_DI,
		IDC_EDIT_DS,
		IDC_EDIT_HM,
		IDC_EDIT_H,
		IDC_EDIT_F,
		IDC_EDIT_JJ,
		IDC_EDIT_DR
	};

	std::map<int, CString> Value;
	std::map<int, CString> GetValue();
};
