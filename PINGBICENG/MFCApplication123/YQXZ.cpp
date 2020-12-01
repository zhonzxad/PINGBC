// YQXZ.cpp: 实现文件
//

#include <string>

#include "pch.h"
#include "MFCApplication123.h"
#include "YQXZ.h"
#include "afxdialogex.h"


// YQXZ 对话框

IMPLEMENT_DYNAMIC(YQXZ, CDialogEx)

YQXZ::YQXZ(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_YQXZ, pParent)
{

}

YQXZ::~YQXZ()
{
}

void YQXZ::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(YQXZ, CDialogEx)
	ON_BN_CLICKED(IDOK, &YQXZ::OnBnClickedOk)
	ON_BN_CLICKED(IDC_RADIO_SXJ, &YQXZ::OnBnClickedRadioSxj)
	ON_BN_CLICKED(IDC_RADIO_DZJSQ, &YQXZ::OnBnClickedRadioDzjsq)
END_MESSAGE_MAP()


// YQXZ 消息处理程序

// 窗口类初始化操作
BOOL YQXZ::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	// 将上次选择的结果显示出来
	if (std::get<0>(YQXZ_Value) == L"NULL")		/*初始启动，用户没有选择内容*/
	{
		((CButton *)GetDlgItem(IDC_RADIO_SXJ))->SetCheck(TRUE);

		GetDlgItem(IDC_RADIO_YQXZ_05)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_10)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_15)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_20)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_25)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_30)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_40)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_50)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_75)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_100)->EnableWindow(FALSE);
	}
	else										/*从原来内容中读取*/
	{
		CString a = std::get<0>(YQXZ_Value);
		CString b = std::get<1>(YQXZ_Value);
		SetValue(a, b);
	}


	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}

// 用户点击了射线机
void YQXZ::OnBnClickedRadioSxj()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_RADIO_YQXZ_05)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_10)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_15)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_20)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_25)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_30)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_40)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_50)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_75)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_100)->EnableWindow(FALSE);

	GetDlgItem(IDC_RADIO_YQXZ_150)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_200)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_250)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_300)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_400)->EnableWindow(TRUE);

	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_05))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_10))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_15))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_20))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_25))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_30))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_40))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_50))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_75))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_100))->SetCheck(BST_UNCHECKED);
}

// 用户点击了电子加速器
void YQXZ::OnBnClickedRadioDzjsq()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItem(IDC_RADIO_YQXZ_150)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_200)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_250)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_300)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO_YQXZ_400)->EnableWindow(FALSE);

	GetDlgItem(IDC_RADIO_YQXZ_05)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_10)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_15)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_20)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_25)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_30)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_40)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_50)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_75)->EnableWindow(TRUE);
	GetDlgItem(IDC_RADIO_YQXZ_100)->EnableWindow(TRUE);

	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_150))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_200))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_250))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_300))->SetCheck(BST_UNCHECKED);
	((CButton *)GetDlgItem(IDC_RADIO_YQXZ_400))->SetCheck(BST_UNCHECKED);
}


// 用户点击了确定按钮
void YQXZ::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	if (!((CButton *)GetDlgItem(IDC_RADIO_SXJ))->GetCheck() && !((CButton *)GetDlgItem(IDC_RADIO_DZJSQ))->GetCheck())
	{
		MessageBox(_T("确定不选择而退出嘛"), _T("提示"), MB_OK);
	}

	//YQXZ_Value = MakeTupleValue();
	YQXZ_Value.swap(std::move(MakeTupleValue()));

	CDialogEx::OnOK();
}

// 用户获取选择类型
std::tuple<CString, CString> YQXZ::MakeTupleValue()
{
	CString type;
	CString value = L"FALSE";

	int a = IsDlgButtonChecked(IDC_RADIO_SXJ);
	if /**/ (((CButton *)GetDlgItem(IDC_RADIO_SXJ))->GetCheck())
	{
		type = L"射线机";
		if /**/ (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_150))->GetCheck())
			value = L"150";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_200))->GetCheck())
			value = L"200";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_250))->GetCheck())
			value = L"250";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_300))->GetCheck())
			value = L"300";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_400))->GetCheck())
			value = L"400";
	}
	else if (((CButton *)GetDlgItem(IDC_RADIO_DZJSQ))->GetCheck())
	{
		type = L"电子加速器";
		if /**/ (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_05))->GetCheck())
			value = L"0.5";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_10))->GetCheck())
			value = L"1.0";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_15))->GetCheck())
			value = L"1.5";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_20))->GetCheck())
			value = L"2.0";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_25))->GetCheck())
			value = L"2.5";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_30))->GetCheck())
			value = L"3.0";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_40))->GetCheck())
			value = L"4.0";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_50))->GetCheck())
			value = L"5.0";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_75))->GetCheck())
			value = L"7.5";
		else if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_100))->GetCheck())
			value = L"10.0";
	}
	else
	{
		type = L"FALSE";
		value = L"FALSE";
	}

	return std::make_tuple(type, value);
}

// 根据成员函数的值来设置界面
// 第一个参数表示射线机的选择
// 第二个参数表示值
void YQXZ::SetValue(CString a, CString b)
{
	if /**/ (a == L"射线机")	/*用户选择了射线机*/
	{
		(((CButton *)GetDlgItem(IDC_RADIO_SXJ))->SetCheck(true));
		(((CButton *)GetDlgItem(IDC_RADIO_DZJSQ))->SetCheck(false));

		if /**/ (b == L"150")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_150))->SetCheck(true));
		else if (b == L"200")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_200))->SetCheck(true));
		else if (b == L"250")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_250))->SetCheck(true));
		else if (b == L"300")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_300))->SetCheck(true));
		else if (b == L"400")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_400))->SetCheck(true));


		//GetDlgItem(IDC_RADIO_DZJSQ)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_05)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_10)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_15)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_20)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_25)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_30)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_40)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_50)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_75)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_100)->EnableWindow(FALSE);

	}
	else					/*用户选择了电子加速器*/
	{
		(((CButton *)GetDlgItem(IDC_RADIO_SXJ))->SetCheck(false));
		(((CButton *)GetDlgItem(IDC_RADIO_DZJSQ))->SetCheck(true));

		if /**/ (b == L"0.5")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_05))->SetCheck(true));
		else if (b == L"1.0")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_10))->SetCheck(true));
		else if (b == L"1.5")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_15))->SetCheck(true));
		else if (b == L"2.0")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_20))->SetCheck(true));
		else if (b == L"2.5")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_25))->SetCheck(true));
		else if (b == L"3.0")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_30))->SetCheck(true));
		else if (b == L"4.0")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_40))->SetCheck(true));
		else if (b == L"5.0")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_50))->SetCheck(true));
		else if (b == L"7.5")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_75))->SetCheck(true));
		else if (b == L"10.0")
			(((CButton *)GetDlgItem(IDC_RADIO_YQXZ_100))->SetCheck(true));

		//GetDlgItem(IDC_RADIO_SXJ)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_150)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_200)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_250)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_300)->EnableWindow(FALSE);
		GetDlgItem(IDC_RADIO_YQXZ_400)->EnableWindow(FALSE);
	}
 	
}


// 如果只输出电压值的做法
/*CString YQXZ::MakeValue()
{
	CString  value;
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_150))->GetCheck())
		value = L"150";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_200))->GetCheck())
		value = L"200";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_250))->GetCheck())
		value = L"250";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_300))->GetCheck())
		value = L"300";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_400))->GetCheck())
		value = L"400";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_05))->GetCheck())
		value = L"0.5";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_10))->GetCheck())
		value = L"1.0";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_15))->GetCheck())
		value = L"1.5";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_20))->GetCheck())
		value = L"2.0";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_25))->GetCheck())
		value = L"2.5";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_30))->GetCheck())
		value = L"3.0";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_40))->GetCheck())
		value = L"4.0";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_50))->GetCheck())
		value = L"5.0";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_75))->GetCheck())
		value = L"7.5";
	if (((CButton *)GetDlgItem(IDC_RADIO_YQXZ_100))->GetCheck())
		value = L"10.0";


	return value;
}
*/
std::tuple<CString, CString> YQXZ::GetValue()
{
	//assert(YQXZ_Value);
	return YQXZ_Value;
}
