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


BEGIN_MESSAGE_MAP(TKSS, CDialogEx)
END_MESSAGE_MAP()


// TKSS 消息处理程序
