// TKSS.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication123.h"
#include "TKSS.h"
#include "afxdialogex.h"


// TKSS 对话框

IMPLEMENT_DYNAMIC(TKSS, CDialogEx)

TKSS::TKSS(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_TKSS, pParent)
{

}

TKSS::~TKSS()
{
}

void TKSS::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

//自动生成
BEGIN_MESSAGE_MAP(TKSS, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO_FSS, &TKSS::OnBnClickedRadioFss)
	ON_BN_CLICKED(IDC_RADIO_CXSS, &TKSS::OnBnClickedRadioCxss)
	ON_BN_CLICKED(IDOK, &TKSS::OnBnClickedOk)
END_MESSAGE_MAP()



//在窗口弹出之前的设定

BOOL TKSS:: OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 如果窗口未初始化的进行初始化
	if (Value[IDC_RADIO_FSS].IsEmpty() || Value[IDC_RADIO_CXSS].IsEmpty())
	{
		//让IDC_RADIO_FSS这个按钮在窗口弹出之前自动为被选中状态
		((CButton *)GetDlgItem(IDC_RADIO_FSS))->SetCheck(BST_CHECKED);    

		GetDlgItem(IDC_EDIT_LTJ)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT_DI)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT_DS)->EnableWindow(TRUE);
		GetDlgItem(IDC_EDIT_HM)->EnableWindow(TRUE);

		GetDlgItem(IDC_EDIT_H)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT_F)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT_JJ)->EnableWindow(FALSE);
		GetDlgItem(IDC_EDIT_DR)->EnableWindow(FALSE);

		// 窗口未弹出时，已从容器中取出名称放在map的第一列
		for (auto&name : NameText)
		{
			if (name != IDC_RADIO_FSS || name != IDC_RADIO_CXSS)
				Value[name] = "FALSE";
		}
	}
	// 否则根据对应的值写入的界面上
	else
	{
		
		CString LTJ, DI, DS, HM, H, F, JJ, DR;
		if (Value[IDC_RADIO_FSS] == "TRUE")
		{
			SetDlgItemText(IDC_EDIT_LTJ, Value[IDC_EDIT_LTJ]);
			SetDlgItemText(IDC_EDIT_DI,  Value[IDC_EDIT_DI]);
			SetDlgItemText(IDC_EDIT_DS,  Value[IDC_EDIT_DS]);
			SetDlgItemText(IDC_EDIT_HM,  Value[IDC_EDIT_HM]);

			((CButton *)GetDlgItem(IDC_RADIO_FSS))->SetCheck(BST_CHECKED);
			((CButton *)GetDlgItem(IDC_RADIO_CXSS))->SetCheck(BST_UNCHECKED);

			GetDlgItem(IDC_EDIT_LTJ)->EnableWindow(TRUE);
			GetDlgItem(IDC_EDIT_DI)->EnableWindow (TRUE);
			GetDlgItem(IDC_EDIT_DS)->EnableWindow (TRUE);
			GetDlgItem(IDC_EDIT_HM)->EnableWindow (TRUE);

			GetDlgItem(IDC_EDIT_H)->EnableWindow (FALSE);
			GetDlgItem(IDC_EDIT_F)->EnableWindow (FALSE);
			GetDlgItem(IDC_EDIT_JJ)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT_DR)->EnableWindow(FALSE);
		}
		else
		{
			
			SetDlgItemText(IDC_EDIT_LTJ, Value[IDC_EDIT_LTJ]);   
			SetDlgItemText(IDC_EDIT_DI,  Value[IDC_EDIT_DI]);     
			SetDlgItemText(IDC_EDIT_DS,  Value[IDC_EDIT_DS]);     
			SetDlgItemText(IDC_EDIT_HM,  Value[IDC_EDIT_HM]);     
			SetDlgItemText(IDC_EDIT_H,   Value[IDC_EDIT_H]);       
			SetDlgItemText(IDC_EDIT_F,   Value[IDC_EDIT_F]);       
			SetDlgItemText(IDC_EDIT_JJ,  Value[IDC_EDIT_JJ]);     
			SetDlgItemText(IDC_EDIT_DR,  Value[IDC_EDIT_DR]); 

			((CButton *)GetDlgItem(IDC_RADIO_FSS))->SetCheck(BST_UNCHECKED);
			((CButton *)GetDlgItem(IDC_RADIO_CXSS))->SetCheck(BST_CHECKED);

			GetDlgItem(IDC_EDIT_LTJ)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT_DI)->EnableWindow (FALSE);
			GetDlgItem(IDC_EDIT_DS)->EnableWindow (FALSE);
			GetDlgItem(IDC_EDIT_HM)->EnableWindow (FALSE);

			GetDlgItem(IDC_EDIT_H)->EnableWindow (TRUE);
			GetDlgItem(IDC_EDIT_F)->EnableWindow (TRUE);
			GetDlgItem(IDC_EDIT_JJ)->EnableWindow(TRUE);
			GetDlgItem(IDC_EDIT_DR)->EnableWindow(TRUE);
		}
	}

	return TRUE;     //一般都为true
}


std::map<int, CString> TKSS::GetValue()      //    返回值给主函数需要的map，但需要在主函数中调用才能实现
{
	return Value;
}


// TKSS 消息处理程序    用户点击了 反散射 后 该窗口的可输入 另一个不可输入


void TKSS::OnBnClickedRadioFss()
{
	// TODO: 在此添加控件通知处理程序代码

	GetDlgItem(IDC_EDIT_LTJ)->EnableWindow(TRUE);
	GetDlgItem(IDC_EDIT_DI)->EnableWindow(TRUE);
	GetDlgItem(IDC_EDIT_DS)->EnableWindow(TRUE);
	GetDlgItem(IDC_EDIT_HM)->EnableWindow(TRUE);

	GetDlgItem(IDC_EDIT_H)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT_F)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT_JJ)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT_DR)->EnableWindow(FALSE);

	SetDlgItemText(IDC_EDIT_H ,L"");
	SetDlgItemText(IDC_EDIT_F ,L"");
	SetDlgItemText(IDC_EDIT_JJ,L"");
	SetDlgItemText(IDC_EDIT_DR,L"");
}

//用户点击了 侧向散射 后 该窗口的可输入 另一个不可输入
void TKSS::OnBnClickedRadioCxss()
{
	// TODO: 在此添加控件通知处理程序代码

	GetDlgItem(IDC_EDIT_LTJ)->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT_DI )->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT_DS )->EnableWindow(FALSE);
	GetDlgItem(IDC_EDIT_HM )->EnableWindow(FALSE);

	GetDlgItem(IDC_EDIT_H)->EnableWindow(TRUE);
	GetDlgItem(IDC_EDIT_F)->EnableWindow(TRUE);
	GetDlgItem(IDC_EDIT_JJ)->EnableWindow(TRUE);
	GetDlgItem(IDC_EDIT_DR)->EnableWindow(TRUE);

	SetDlgItemText(IDC_EDIT_LTJ, L"");
	SetDlgItemText(IDC_EDIT_DI, L"");
	SetDlgItemText(IDC_EDIT_DS, L"");
	SetDlgItemText(IDC_EDIT_HM, L"");
}


void TKSS::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	int RadioState_FSS = ((CButton *)GetDlgItem(IDC_RADIO_FSS))->GetCheck();    //判断用户点击了哪个按钮 点击了为1
	int RadioState_CXSS = ((CButton *)GetDlgItem(IDC_RADIO_CXSS))->GetCheck();
	if (RadioState_FSS == 1) 
		Value[IDC_RADIO_FSS] = "TRUE";
	else
		Value[IDC_RADIO_FSS] = "FALSE";
	if (RadioState_CXSS = 1) 
		Value[IDC_RADIO_CXSS] = "TRUE";
	else
		Value[IDC_RADIO_CXSS] = "FALSE";
	 
//  MAP容器第二列获取用户输入的值

	CString LTJ, DI, DS, HM, H, F, JJ, DR;      
	GetDlgItemText(IDC_EDIT_LTJ, LTJ);       Value[IDC_EDIT_LTJ] = LTJ;
	GetDlgItemText(IDC_EDIT_DI,  DI);        Value[IDC_EDIT_DI]  = DI;
	GetDlgItemText(IDC_EDIT_DS,  DS);        Value[IDC_EDIT_DS]  = DS;
	GetDlgItemText(IDC_EDIT_HM,  HM);        Value[IDC_EDIT_HM]  = HM;
	GetDlgItemText(IDC_EDIT_H,   H);         Value[IDC_EDIT_H]   = H;
	GetDlgItemText(IDC_EDIT_F,   F);         Value[IDC_EDIT_F]   = F;
	GetDlgItemText(IDC_EDIT_JJ,  JJ);        Value[IDC_EDIT_JJ]  = JJ;
	GetDlgItemText(IDC_EDIT_DR,  DR);        Value[IDC_EDIT_DR]  = DR;
	

	CDialogEx::OnOK();
}
