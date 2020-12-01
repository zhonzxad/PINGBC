// SENGM.cpp: 实现文件
//

#include "pch.h"
#include "MFCApplication123.h"
#include "SENGM.h"
#include "afxdialogex.h"


// SENGM 对话框

IMPLEMENT_DYNAMIC(SENGM, CDialogEx)

SENGM::SENGM(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_SHENGM, pParent)
{

}

SENGM::~SENGM()
{
}

void SENGM::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, IDCANCEL, m_UsingInfo);
}


BEGIN_MESSAGE_MAP(SENGM, CDialogEx)
END_MESSAGE_MAP()


// SENGM 消息处理程序


BOOL SENGM::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CFont m_Font;
	m_Font.CreatePointFont(115, L"Arial", NULL);
	GetDlgItem(IDC_STATIC_USINGINFO)->SetFont(&m_Font, true);
	//m_static.SetWindowText("100");


	CString UsingInfo = L"本软件基于以下规定和行业通用规范，\n" \
		L"GB 5172-1985粒子加速器辐射防护规定;\n" \
		L"GB 18871-2002 电离辐射防护与辐射源安全基本标准;\n" \
		L"GB 22448-2008 500kV以下工业X射线探伤机防护规则;\n" \
		L"GB50681-2011机械工业厂房建筑设计规范;\n" \
		L"GBT 30371-2013 无损检测用电子直线加速器工程通用规范;\n" \
		L"GBZ117-2015工业X射线探伤放射防护要求;\n" \
		L"GBZT 250-2014工业X射线探伤室辐射屏蔽规范;\n" \
		L"HJ979 - 2018 电子加速器辐照装置辐射安全和防护;\n" \
		L"NCRP51号报告;\n" \
		L"辐射防护手册一分册;\n" \
		L"若您准备开始使用此软件，则默认您已认同本软件基于上述规定的所做出的结果.";
	SetDlgItemText(IDC_STATIC_USINGINFO, UsingInfo);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
