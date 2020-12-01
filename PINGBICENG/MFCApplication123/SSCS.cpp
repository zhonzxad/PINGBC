// SSCS.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication123.h"
#include "SSCS.h"
#include "afxdialogex.h"


// SSCS 对话框

IMPLEMENT_DYNAMIC(SSCS, CDialogEx)

SSCS::SSCS(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_SSCS, pParent)
{

}

SSCS::~SSCS()
{
}

void SSCS::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SSCS, CDialogEx)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// SSCS 消息处理程序
void SSCS::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nIDEvent == 100)
	{
		KillTimer(nIDEvent);

		Init();
	}

	CDialogEx::OnTimer(nIDEvent);
}

// 初始化对话框
BOOL SSCS::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetTimer(100, 150, NULL);
	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

// 键盘消息
BOOL SSCS::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN)
	{
		//按下回车，如果当前焦点是在自己期望的控件上
		if (GetFocus()->GetDlgCtrlID() == IDC_EDIT_SSCS_REDIT)
		{
			// TODO 事件
			OnBtnClick();
		}
		return TRUE;
	}

	return CDialogEx::PreTranslateMessage(pMsg);
}

// 初始化
void SSCS::Init()
{
	CFont m_Font1, m_Font2, m_Font3;
	m_Font1.CreatePointFont(115, L"微软雅黑", NULL);
	GetDlgItem(IDC_STATIC_SSCS_R)->SetFont(&m_Font1, true);
	GetDlgItem(IDC_STATIC_SSCS_M)->SetFont(&m_Font1, true);
	m_Font2.CreatePointFont(125, L"微软雅黑", NULL);
	GetDlgItem(IDC_STATIC_SSCS_INFO)->SetFont(&m_Font2, true);
	GetDlgItem(IDC_STATIC_SSCS_INFO2)->SetFont(&m_Font2, true);
	m_Font3.CreatePointFont(100, L"微软雅黑", NULL);
	GetDlgItem(IDC_EDIT_SSCS_REDIT)->SetFont(&m_Font3, true);
	//m_static.SetWindowText("100");

	SetDlgItemText(IDC_STATIC_SSCS_R, L"R2");
	SetDlgItemText(IDC_STATIC_SSCS_M, L"M");

	
	CString Text;
	Text.Format(L"用户需要输入的散射次数为：%d，\n请逐次输入，\n每次输入完成需要摁下回车键（Enter）。", _ttoi(SSCSText)-1);
	
	SetDlgItemText(IDC_STATIC_SSCS_INFO, Text);

	auto search = SSCS_Value.find(2);
	// 如果找到了值，说明已经存入了。要进行显示
	if (search != SSCS_Value.end())
	{
		CString text;
		ASSERT(SSCSTextSave);
		int SSCSNum = _ttoi(SSCSTextSave);
		while (SSCSNum > 2)
		{
			text.AppendFormat(L"R%d的值为:", SSCSNum);
			text.Append(SSCS_Value[SSCSNum]);
			text.Append(L"，");
			SSCSNum -= 1;
		}

		text.AppendFormat(L"R%d的值为:", 2);
		text.Append(SSCS_Value[2]);
		text.Append(L"。");

		SetDlgItemText(IDC_STATIC_SSCS_INFO2, text);

		SSCSTextSave = SSCSText;
	}
	else
	{
		// 不做处理IDC_STATIC_SSCS_INFO2
		SSCSTextSave = SSCSText;
	}

	GetDlgItem(IDC_EDIT_SSCS_REDIT)->SetFocus();
}


// 输入完成之后事件
void SSCS::OnBtnClick()
{
	CString RNum, RText;
	GetDlgItemText(IDC_STATIC_SSCS_R, RNum);
	GetDlgItemText(IDC_EDIT_SSCS_REDIT, RText);
	if (RText.IsEmpty())
	{
		MessageBox(L"请重新输入正确数字", _T("错误"), MB_OK);
		return;
	}

	int nPos = RNum.Find(L"R");
	int RNumTemp = _ttoi(RNum.Right(RNum.GetLength() - nPos - 1));
	SSCS_Value[RNumTemp] = RText;

	if (RNumTemp == _ttoi(SSCSText))
	{
		MessageBox(L"输入结束，即将关闭页面", _T("提示"), MB_OK);
		EndDialog(IDOK);
	}
	else
	{
		RNumTemp += 1;
		RNum.Format(L"R%d", RNumTemp);
		SetDlgItemText(IDC_STATIC_SSCS_R, RNum);
		SetDlgItemText(IDC_EDIT_SSCS_REDIT, L"");
	}
}
