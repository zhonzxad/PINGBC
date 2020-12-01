
// MFCApplication123Dlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "MFCApplication123.h"
#include "MFCApplication123Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

using namespace std;


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();



// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCApplication123Dlg 对话框



CMFCApplication123Dlg::CMFCApplication123Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATION123_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplication123Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

// 注册回调函数，绑定控件ID到函数上
BEGIN_MESSAGE_MAP(CMFCApplication123Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	
//	ON_BN_CLICKED(IDC_BUTTON_TKSS, &CMFCApplication123Dlg::OnBnClickedButtonTkss)

ON_BN_CLICKED(IDC_RADIO_XTXS, &CMFCApplication123Dlg::OnBnClickedRadioXtxs)
ON_BN_CLICKED(IDC_RADIO2_SDSR, &CMFCApplication123Dlg::OnBnClickedRadio2Sdsr)
ON_BN_CLICKED(IDC_RADIO3_MRZ5MA, &CMFCApplication123Dlg::OnBnClickedRadio3Mrz5ma)
ON_BN_CLICKED(IDC_RADIO4_SDSR, &CMFCApplication123Dlg::OnBnClickedRadio4Sdsr)
ON_BN_CLICKED(IDC_RADIO11_AQXS2, &CMFCApplication123Dlg::OnBnClickedRadio11Aqxs2)
ON_BN_CLICKED(IDC_RADIO12, &CMFCApplication123Dlg::OnBnClickedRadio12)
ON_BN_CLICKED(IDC_BUTTON32_OK, &CMFCApplication123Dlg::OnBnClickedButton32Ok)
ON_BN_CLICKED(IDC_RADIO13_fe, &CMFCApplication123Dlg::OnBnClickedRadio13fe)
ON_BN_CLICKED(IDC_RADIO13_Q, &CMFCApplication123Dlg::OnBnClickedRadio13Q)
ON_BN_CLICKED(IDC_RADIO13_SDQ, &CMFCApplication123Dlg::OnBnClickedRadio13Sdq)
ON_BN_CLICKED(IDC_BUTTON_YQXZ, &CMFCApplication123Dlg::OnBnClickedButtonYqxz)
ON_BN_CLICKED(IDC_RADIO15_SSS, &CMFCApplication123Dlg::OnBnClickedRadio15Sss)
ON_BN_CLICKED(IDC_RADIO14_YYS, &CMFCApplication123Dlg::OnBnClickedRadio14Yys)
ON_BN_CLICKED(IDC_RADIO16_LSS, &CMFCApplication123Dlg::OnBnClickedRadio16Lss)
ON_BN_CLICKED(IDC_RADIO17, &CMFCApplication123Dlg::OnBnClickedRadio17)
ON_BN_CLICKED(IDC_RADIO18_HNT, &CMFCApplication123Dlg::OnBnClickedRadio18Hnt)
ON_BN_CLICKED(IDC_RADIO19_QIAN, &CMFCApplication123Dlg::OnBnClickedRadio19Qian)
ON_BN_CLICKED(IDC_RADIO20_5TONG, &CMFCApplication123Dlg::OnBnClickedRadio205tong)
ON_BN_CLICKED(IDC_RADIO21_3TONG, &CMFCApplication123Dlg::OnBnClickedRadio213tong)
ON_BN_CLICKED(IDC_RADIO22_2LV, &CMFCApplication123Dlg::OnBnClickedRadio222lv)
ON_BN_CLICKED(IDC_RADIO23_TIETONG, &CMFCApplication123Dlg::OnBnClickedRadio23Tietong)
ON_BN_CLICKED(IDC_RADIO25_LVH, &CMFCApplication123Dlg::OnBnClickedRadio25Lvh)
ON_BN_CLICKED(IDC_RADIO26_Q0, &CMFCApplication123Dlg::OnBnClickedRadio26Q0)
ON_BN_CLICKED(IDC_RADIO27_CX90, &CMFCApplication123Dlg::OnBnClickedRadio27Cx90)
ON_BN_CLICKED(IDC_RADIO7_MRZ20D, &CMFCApplication123Dlg::OnBnClickedRadio7Mrz20d)
ON_BN_CLICKED(IDC_RADIO_F, &CMFCApplication123Dlg::OnBnClickedRadioF)
ON_BN_CLICKED(IDC_RADIO15_F, &CMFCApplication123Dlg::OnBnClickedRadio15F)
ON_BN_CLICKED(IDC_RADIO_LSLV, &CMFCApplication123Dlg::OnBnClickedRadioLslv)
ON_BN_CLICKED(IDC_BUTTON_SURVEY, &CMFCApplication123Dlg::OnBnClickedButtonSurvey)
ON_BN_CLICKED(IDC_RADIO13_D10, &CMFCApplication123Dlg::OnBnClickedRadio13D10)
ON_BN_CLICKED(IDC_RADIO15_TUJIE, &CMFCApplication123Dlg::OnBnClickedRadio15Tujie)
ON_BN_CLICKED(IDC_RADIO16_3mmlv, &CMFCApplication123Dlg::OnBnClickedRadio163mmlv)
ON_BN_CLICKED(IDC_RADIO8_SDSR, &CMFCApplication123Dlg::OnBnClickedRadio8Sdsr)

ON_BN_CLICKED(IDC_RADIO16_F1, &CMFCApplication123Dlg::OnBnClickedRadio16F1)
ON_BN_CLICKED(IDC_RADIO16_F2, &CMFCApplication123Dlg::OnBnClickedRadio16F2)
ON_BN_CLICKED(IDC_RADIO9_MRZ, &CMFCApplication123Dlg::OnBnClickedRadio9Mrz)
ON_BN_CLICKED(IDC_RADIO10_SDSR, &CMFCApplication123Dlg::OnBnClickedRadio10Sdsr)
ON_BN_CLICKED(IDC_BTN_SHOWINFO, &CMFCApplication123Dlg::OnBnClickedBtnShowinfo)
END_MESSAGE_MAP()


// CMFCApplication123Dlg 消息处理程序

BOOL CMFCApplication123Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	//CString UsingInfo = L"本软件基于以下规定和行业通用规范\n" \
	//	L"GB 5172-1985粒子加速器辐射防护规定\n" \
	//	L"GB 5172-1985粒子加速器辐射防护规定\n" \
	//	L"GB 5172-1985粒子加速器辐射防护规定\n" \
	//	L"GB 5172-1985粒子加速器辐射防护规定\n" \
	//	L"GB 5172-1985粒子加速器辐射防护规定\n" \
	//	L"GB 5172-1985粒子加速器辐射防护规定\n" \
	//	L"GB 5172-1985粒子加速器辐射防护规定\n" \
	//	L"若您准备开始使用此软件，则默认您已认同该软件的算法.";
	//SetDlgItemText(IDC_STATIC_USINGINFO, UsingInfo);

	//if (m_SHENGM.DoModal() != IDOK)
	//{
	//	EndDialog(IDCANCEL);
	//	return FALSE;  //弹出声明框
	//}

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCApplication123Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 键盘消息事件
BOOL CMFCApplication123Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 在此添加专用代码和/或调用基类

	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN)
	{
		//按下回车，如果当前焦点是在自己期望的控件上
		if (GetFocus()->GetDlgCtrlID() == IDC_EDIT17_J)
		{
			// TODO 事件
			OnSSCSBtnEnter();
		}
		return TRUE;
	}
	

	return CDialogEx::PreTranslateMessage(pMsg);
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCApplication123Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCApplication123Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


// 用户点击仪器选择按钮	
void CMFCApplication123Dlg::OnBnClickedButtonYqxz()
{
	std::vector<CString> temp = {
			L"150",
			L"200",
			L"250",
			L"300",
			L"400",
			L"0.5",
			L"1.0",
			L"1.5",
			L"2.0",
			L"2.5",
			L"3.0",
			L"4.0",
			L"5.0",
			L"7.5",
			L"10.0",
	};

	// 弹窗
	if (m_YQXZ.DoModal() != IDOK) return;

	// 第一个表示type，第二个表示value
	std::tuple<CString, CString> m_YQXZValue = m_YQXZ.GetValue();
	for (auto&s : temp)
	{
		if (std::get<1>(m_YQXZValue) == s)
		{
			Voltage = s;
			// zx-如果成功开可以转换，否则会抛出异常
			if (_ttof(Voltage) > 100)
				machine = 4;
			else
				machine = 5;
			return;
		}
	}
	
	// 找不到执行如下
	Voltage = L"FALSE";
	machine = -1;

	return;
}

// 单击主页面天空散射发生的事件
void CMFCApplication123Dlg::OnBnClickedRadio17()
{
	if (m_TKSS.DoModal() != IDOK) return;

	Value = m_TKSS.GetValue();
	panduan = 1;
}

// 单击主页面有用束发生的事件
void CMFCApplication123Dlg::OnBnClickedRadio14Yys()
{
	pingbi = 1;
}

// 单击主页面散射束发生的事件
void CMFCApplication123Dlg::OnBnClickedRadio15Sss()
{
	pingbi = 2;
}

// 单击主页面漏射束发生的事件
void CMFCApplication123Dlg::OnBnClickedRadio16Lss()
{
	pingbi = 3;
}

// ################屏蔽门材料选择########################
// 用户单击了混凝土
void CMFCApplication123Dlg::OnBnClickedRadio18Hnt()
{
	DoorMaterial = L"混凝土";
}

// 用户单击了铅
void CMFCApplication123Dlg::OnBnClickedRadio19Qian()
{
	DoorMaterial = L"铅";
}

/*
// ############################机器的选择############################
// 用户单击了射线机
void CMFCApplication123Dlg::OnBnClickedButtonShexi()
{
	machine = 4;
	switch (pingbi) {
		case 1:          // 有用束：把无用项屏蔽
			GetDlgItem(IDC_RADIO5_MRZ1T)->EnableWindow(FALSE);
			GetDlgItem(IDC_RADIO6_SDSR)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT4_NUMBER)->EnableWindow(FALSE);
			GetDlgItem(IDC_RADIO7_MRZ30D)->EnableWindow(FALSE);
			GetDlgItem(IDC_RADIO8_SDSR)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT5_CSJD)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT6_MRHL)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT7_HL)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT8_LSL)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT11_JJ)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT18_R0)->EnableWindow(FALSE); 
			GetDlgItem(IDC_EDIT12_Z)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT13_FE)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT14_Q)->EnableWindow(FALSE);
			GetDlgItem(IDC_EDIT17_D10)->EnableWindow(FALSE);
			break;
	}

}

// 用户单击了电子加速器
void CMFCApplication123Dlg::OnBnClickedButtonJiasu()
{
	machine = 5;
}
*/

// ###################H0##########################
// 单击H0的系统输出后的事件   编辑框自动显示H0
void CMFCApplication123Dlg::OnBnClickedRadioXtxs()
{
	// 如果在函数内部来设置变量，就不需要设置返回值是CString类型
	// 可以考虑设置成bool形或者void
	H0 = OutputH0(Voltage, WindowMaterial);	  
}

// 用户点击了 H0手动输入
void CMFCApplication123Dlg::OnBnClickedRadio2Sdsr()
{
	GetDlgItemText(IDC_EDIT2_SDSR, H0);
}

// #####################电流#########################
// 电流 Ｉ:用户单击了默认值5mA
void CMFCApplication123Dlg::OnBnClickedRadio3Mrz5ma()
{
	I = L"5";
}

// 电流Ｉ：用户单击了手动输入
void CMFCApplication123Dlg::OnBnClickedRadio4Sdsr()
{
	GetDlgItemText(IDC_EDIT3_SDSR, I);
}

/*
// ######################电压#####################
// 用户单击了150kV
void CMFCApplication123Dlg::OnBnClickedButton150()
{
	Voltage = L"150";
}
// 用户单击了200kV
void CMFCApplication123Dlg::OnBnClickedButton200()
{
	
	Voltage = L"200";
}

// 用户单击了250kV
void CMFCApplication123Dlg::OnBnClickedButton250()
{
	
	Voltage = L"250";
}

// 用户单击了300kV
void CMFCApplication123Dlg::OnBnClickedButton300()
{
	
	Voltage = L"300";
}

// 用户单击了400kV
void CMFCApplication123Dlg::OnBnClickedButton400()
{
	
	Voltage = L"400";
}
*/
// #########################窗材料及厚度###################
// 用户单击了 3mm 铜
void CMFCApplication123Dlg::OnBnClickedRadio213tong()
{
	WindowMaterial = L"3mm 铜";
}
// 用户单击了 0.5mm 铜
void CMFCApplication123Dlg::OnBnClickedRadio205tong()
{
	WindowMaterial = L"0.5mm 铜";
}
// 用户单击了 2mm 铝
void CMFCApplication123Dlg::OnBnClickedRadio222lv()
{
	WindowMaterial = L"2mm 铝";
}
// 用户单击了3mm铝
void CMFCApplication123Dlg::OnBnClickedRadio163mmlv()
{
	// TODO: 在此添加控件通知处理程序代码
	WindowMaterial = L"3mm 铝";
}
// 出射角度#############################################
void CMFCApplication123Dlg::OnBnClickedRadio7Mrz20d()
{
	OutAngle = L"20";
	int cejiao = 1;
}
// ##############安全系数###########################
// 默认值
void CMFCApplication123Dlg::OnBnClickedRadio11Aqxs2()
{
	anquan = L"2";
}
// 手动输入
void CMFCApplication123Dlg::OnBnClickedRadio12()
{
	GetDlgItemText(IDC_EDIT10_AQXS, anquan);
}


void CMFCApplication123Dlg::OnBnClickedRadio23Tietong()
{
	BaMaterial = L"铁、铜";
}


void CMFCApplication123Dlg::OnBnClickedRadio25Lvh()
{
	BaMaterial = L"铝、混凝土";
}

void CMFCApplication123Dlg::OnBnClickedRadio26Q0()
{
	AngleQ = L"前向 0°";
}

void CMFCApplication123Dlg::OnBnClickedRadio27Cx90()
{
	AngleQ = L"侧向 90°";
}
void CMFCApplication123Dlg::OnBnClickedRadio13fe()
{
	// 与上面H0同样的问题
	Outputfe(AngleQ, BaMaterial);
	SetDlgItemText(IDC_EDIT13_FE, fe);
}

// #############获取Q值##############
// 系统显示Q
void CMFCApplication123Dlg::OnBnClickedRadio13Q()
{
	// 同样
	OutputQ(Voltage, AngleQ);
}

// 用户点击了手动输入Q
void CMFCApplication123Dlg::OnBnClickedRadio13Sdq()
{
	GetDlgItemText(IDC_EDIT14_SDQ, Q);
	// 判断q的合理性
	try
	{
		double temp = _ttof(Q);
		if (temp < 0)
			MessageBox(L"请输入正数", _T("提示"), MB_OK);
	}
	catch (...)
	{
		MessageBox(L"错误的输入", _T("提示"), MB_OK);
	}

}

// 用户点击了系统显示F
void CMFCApplication123Dlg::OnBnClickedRadioF()
{
	// 与H0同样的问题
	F = OutputF();
	SetDlgItemText(IDC_EDIT18_R1, F);
}

// 用户点击了手动输入F
void CMFCApplication123Dlg::OnBnClickedRadio15F()
{
	GetDlgItemText(IDC_EDIT18_R2, F);
}

// 用户点击了系统显示D10
void CMFCApplication123Dlg::OnBnClickedRadio13D10()
{
	// TODO: 在此添加控件通知处理程序代码
	D10 = OutputD10(Q, I, fe);
	SetDlgItemText(IDC_EDIT17_D10, D10);
}
// 用户点击了系统显示漏射率
void CMFCApplication123Dlg::OnBnClickedRadioLslv()
{
	try
	{
		Hl = OutputHl(Voltage);
		H0 = OutputH0(Voltage, WindowMaterial);
		double num_Hl = _ttof(Hl);
		double num_I = _ttof(I);
		double num_H0 = _ttof(H0);

		double num_LSLV = num_Hl / (num_I * num_H0);
		CString LSLV;
		LSLV.Format(_T("%.2f"), num_LSLV);
		SetDlgItemText(IDC_EDIT8_LSL, LSLV);
	}
	catch (...)
	{
		MessageBox(L"错误", _T("提示"), MB_OK);
	}
}
// 用户点击了漏射剂量率的默认值
void CMFCApplication123Dlg::OnBnClickedRadio9Mrz()
{
	// TODO: 在此添加控件通知处理程序代码
	Hl = OutputHl(Voltage);
	SetDlgItemText(IDC_EDIT6_MRHL, Hl);
}

// 用户点击了手动输入Hl
void CMFCApplication123Dlg::OnBnClickedRadio10Sdsr()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT7_HL, Hl);
}

// 用户点击了手动输入出射角度
void CMFCApplication123Dlg::OnBnClickedRadio8Sdsr()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT5_CSJD, OutAngle);
}


// 用户单击了系统显示F1
void CMFCApplication123Dlg::OnBnClickedRadio16F1()
{
	// TODO: 在此添加控件通知处理程序代码
	F1 = OutputF();
	SetDlgItemText(IDC_EDIT17_F1, F1);
	return;


}

// 用户点击了手动输入F1
void CMFCApplication123Dlg::OnBnClickedRadio16F2()
{
	// TODO: 在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT17_SDF1, F1);
}
// 用户点击了图解法厚度计算
void CMFCApplication123Dlg::OnBnClickedRadio15Tujie()
{
	// TODO: 在此添加控件通知处理程序代码
	if (B.IsEmpty() || Voltage.IsEmpty() || DoorMaterial.IsEmpty())
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return;
	}
	else if(DoorMaterial == L"混凝土")
	{
		CString a = X2H();
		a.Format(L"图解法得出的屏蔽门厚度为：", a);
		WriteLog(a);
	}
	else
	{
		CString b = X2Q();
		b.Format(L"图解法得出的屏蔽门厚度为：", b);
		WriteLog(b);
	}
}


// #################用户单击主页面确定########################
// 用户单击了确定按钮
void CMFCApplication123Dlg::OnBnClickedButton32Ok()
{
	// 判断前三个是否为选中
	// 如果是最后一个被选择，才进行判断map中
	CString a, b, c, d, e, f;
	a.Format(L"用户选择的管电压为：%s", Voltage);
	WriteLog(a);
	b.Format(L"用户输入的电流值为：%s", I);
	WriteLog(b);
	c.Format(L"用户选择的屏蔽材料为：%s", DoorMaterial);
	WriteLog(c);
	d.Format(L"用户选择的屏蔽门数量为：%s", NumDoor);
	WriteLog(d);
	std::map<int, CString> ValueFTKSS = m_TKSS.GetValue();;  // 天空散射
	if ((panduan == 1) && (ValueFTKSS[IDC_RADIO_FSS] == L"TRUE") ) {     // 天空散射之天空反散射
		WriteLog(L"用户选择了天空反散射");
		BT1();
		e.Format(L"透射因子B=4*10-5*HM*di²*ds²/(D10*Ω1.3*μ)=：%s", B);
		WriteLog(e);
		XT1();
		f.Format(L"屏蔽门厚度X=T1+(n-1)*Te=%s", X);
		WriteLog(f);
		
	}
	else if ((panduan == 1) && (ValueFTKSS[IDC_RADIO_CXSS] == L"TRUE")) {   // 天空散射之侧向散射
		WriteLog(L"用户选择了侧向散射");
		BT2();
		e.Format(L"透射因子B=1*10-6*H*dR²/(D10*F*f(θ)*μ)=：%s", B);
		WriteLog(e);
		XT2();
		f.Format(L"屏蔽门厚度X=T1+(n-1)*Te=%s", X);
		WriteLog(f);
		
	}
	else 
	{
		// 在switch之前定义一个局部变量
		int temp = pingbi * machine;
		switch (temp)
		{
		case 4:     // 有用束+射线机
			WriteLog(L"用户选择了有用束和射线机");
			By1();
			e.Format(L"透射因子B=Hc*R²/(I*H0*μ)=：%s", B);
			WriteLog(e);
			if(DoorMaterial == L"铅")
				Xy1Q();    // 屏蔽物质为铅
			else
				Xy1H();    //屏蔽物质为混凝土
			
			break;
		case 5:		// 有用束+加速器
			WriteLog(L"用户选择了有用束和电子加速器");
			By2();
			e.Format(L"透射因子B=1*10-6*Hc*R²/(D10*μ)=：%s", B);
			WriteLog(e);
			Xy2();
			f.Format(L"屏蔽门厚度X=T1+(n-1)*Te=%s", X);
			WriteLog(f);
			break;
		case 8:    // 散射束+射线机
			WriteLog(L"用户选择了散射束和射线机");
			Bs1();
			e.Format(L"透射因子B=Hc*R1²*R0²/(I*H0*μ*F*α)=：%s", B);
			WriteLog(e);
			Xs1();
			f.Format(L"屏蔽门厚度X=-TVL*logB=%s", X);
			WriteLog(f);
			break;
		case 10:  // 散射束+加速器
			WriteLog(L"用户选择了散射束和电子加速器");
			Bs2();
			e.Format(L"透射因子B=1*10-6*Hc*R1²*R0²*(R2...Rj)²/(D10*μ*F1*α1*(F2*α2)j-1)=：%s", B);
			WriteLog(e);
			Xs2();
			f.Format(L"屏蔽门厚度X=T1+(n-1)*Te=%s", X);
			WriteLog(f);
			break;
		case 12:  // 漏射束+射线机
			WriteLog(L"用户选择了漏射束和射线机");
			Bl1();
			e.Format(L"透射因子B=Hc*R²/(Hl*μ)=：%s", B);
			WriteLog(e);
			Xl1();
			f.Format(L"屏蔽门厚度X=-TVL*logB=%s", X);
			WriteLog(f);
			break;
		case 15:  // 漏射束+加速器
			WriteLog(L"用户选择了漏射束和电子加速器");
			Bl2();
			e.Format(L"透射因子B=Hc*R²/(Hl*μ)=：%s", B);
			WriteLog(e);
			Xl2();
			f.Format(L"屏蔽门厚度X=T1+(n-1)*Te=%s", X);
			WriteLog(f);
			break;
		default:
			MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
			break;
		}
	}
	
	
}

// ####################以下是函数库的定义######################################


// X射线输出量H0
CString CMFCApplication123Dlg::OutputH0(CString Voltage, CString WindowMaterial)
{
	if (Voltage.IsEmpty() || WindowMaterial.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else {
		std::map<double, std::tuple<int, CString>> Xray =
		{
			{18.3, std::make_tuple(150, L"2mm 铝")},
			{5.2,std::make_tuple(150, L"3mm 铝")},
			{28.7,std::make_tuple(200, L"2mm 铝")},
			{8.9,std::make_tuple(200, L"3mm 铝")},
			{16.5,std::make_tuple(250, L"0.5mm 铜")},
			{13.9,std::make_tuple(250, L"3mm 铜")},
			{20.9,std::make_tuple(300, L"3mm 铝")},
			{11.3,std::make_tuple(300, L"3mm 铜")},
			{23.5,std::make_tuple(500, L"3mm 铜")}
		};

		// 逐行遍历map
		for (auto&t : Xray)
		{
			// 取出一行中的后两位数进行判断
			// 由于键盘输入的都为CString类型 ，要与函数库里的int类型进行比较，要用_ttoi()把字符串转化为整形
			if ((std::get<0>(t.second) == _ttoi(Voltage)) && (std::get<1>(t.second) == WindowMaterial))
			{
				H0.Format(_T("%.1f"), t.first);     // 把map第一列的值付给a,然后再进行小数点位数截取
				SetDlgItemText(IDC_EDIT1_XTXS, H0);
				return H0;
			}

		}

		MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
		return L"FALSE";
	}
	
}

// 漏射计量率Hl
CString CMFCApplication123Dlg::OutputHl(CString Voltage)
{
	if (Voltage.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else {
		std::map<int, int>hl =
		{
			{150,2500},
			{200,2500},
			{250,5000},
			{300,5000},
			{400,5000}
		};

		for (auto&b : hl)
		{
			if (b.first == _ttoi(Voltage))
			{
				Hl.Format(_T("%d"), b.second);      // 字符串如何取整,用%d
				return Hl;
			}
		}

		MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
		return L"FALSE";
	}
}

// 90°散射辐射最高能量
CString CMFCApplication123Dlg::OutputEn(CString Voltage)
{
	std::map<int,int>En=
	{
		{150,150},
	    {200,150},
	    {300,200},
	    {400,250}
	};

	// for (auto&c : En)
	// {
	// 	if (c.first == _ttoi(Voltage))
	// 	{
	// 		CString e = L"";
	// 		e.Format(_T("%d"), c.second);
	// 		return e;
	// 	}
	// 	else
	// 	{
	// 		MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
	// 		return L"FALSE";
	// 	}
	// }

	for (auto&c : En)
	{
		if (c.first == _ttoi(Voltage))
		{
			CString e = L"";
			e.Format(_T("%d"), c.second);
			return e;
		}
	}

	MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
	return L"FALSE";
}

// 什值层厚度TVL
CString CMFCApplication123Dlg::OutputTvl(CString Voltage, CString DoorMaterial)
{
	if (Voltage.IsEmpty() || DoorMaterial.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else {
		std::map<double, std::tuple<int, CString>>Tvl =
		{
			{0.96,std::make_tuple(150,L"铅")},
			{1.4,  std::make_tuple(200,L"铅")},
			{2.9,  std::make_tuple(250,L"铅")},
			{5.7,  std::make_tuple(300,L"铅")},
			{8.2,  std::make_tuple(400,L"铅")},
			{70, std::make_tuple(150,L"混凝土")},
			{86, std::make_tuple(200,L"混凝土")},
			{90, std::make_tuple(250,L"混凝土")},
			{100, std::make_tuple(300,L"混凝土")},
			{100, std::make_tuple(400,L"混凝土")}
		};

		for (auto&d : Tvl)
		{
			
			if ((std::get<0>(d.second) == _ttoi(Voltage)) && (std::get<1>(d.second) == DoorMaterial))
			{
				CString temp = L"";
				temp.Format(_T("%.2f"), d.first);
				return temp;
			}
		}
		
		MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
		return L"FALSE";
	}
}

// X射线发射率
CString CMFCApplication123Dlg::OutputQ(CString Voltage, CString AngleQ)
{

	GetDlgItemText(IDC_EDIT12_Z, Z);
	if (Voltage.IsEmpty() || AngleQ.IsEmpty() || Z.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else {
		std::map<double, std::tuple<double, CString>>QV =
		{
			{0.008, std::make_tuple(0.5, L"前向 0°")},
			{0.26,   std::make_tuple(1.0, L"前向 0°")},
			{1.3,   std::make_tuple(1.5, L"前向 0°")},
			{3.3,   std::make_tuple(2.0, L"前向 0°")},
			{7.0,   std::make_tuple(2.5, L"前向 0°")},
			{14.0,   std::make_tuple(3.0, L"前向 0°")},
			{30.0,   std::make_tuple(4.0, L"前向 0°")},
			{63.2,   std::make_tuple(5.0, L"前向 0°")},
			{170,   std::make_tuple(7.5, L"前向 0°")},
			{450,   std::make_tuple(10.0 ,L"前向 0°")},

			{0.07,  std::make_tuple(0.5, L"侧向 90°")},
			{0.4,  std::make_tuple(1.0, L"侧向 90°")},
			{1.0,  std::make_tuple(1.5, L"侧向 90°")},
			{1.6,  std::make_tuple(2.0, L"侧向 90°")},
			{2.5,  std::make_tuple(2.5, L"侧向 90°")},
			{3.2,  std::make_tuple(3.0, L"侧向 90°")},
			{4.8,  std::make_tuple(4.0, L"侧向 90°")},
			{6.5,  std::make_tuple(5.0, L"侧向 90°")},
			{10.0,  std::make_tuple(7.5, L"侧向 90°")},
			{13.5,  std::make_tuple(10.0, L"侧向 90°")},

		};
		if (_ttoi(Z) > 73)
		{
			for (auto&f : QV)
			{
				if ((std::get<0>(f.second) == _ttof(Voltage)) && (std::get<1>(f.second)) == AngleQ)
				{

					Q.Format(_T("%.3f"), f.first);
					SetDlgItemText(IDC_EDIT14_Q, Q);
					return Q;
				}
			}

			MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
			return L"FALSE";
		}
		else 
		{
			MessageBox(L"Z值小于73，请手动输入Q值", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}
// 分布函数
double CMFCApplication123Dlg::Outputf(CString JJ)
{
	if (JJ.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return 0.0;
	}
	else {
		std::map<double,CString> temp1 = {
			{0.38, L"20"},
		    {0.26, L"30"},
		    {0.16, L"40"},
		    {0.10, L"50"},
			{0.065, L"60"},
		    {0.035, L"70"},
		    {0.014, L"80"},
		    {0.005, L"85"}
		};

		for (auto&t : temp1) 
		{
			if (t.second == JJ)
			{
				f = t.first;
				return f;
			}
		}

		MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
		return 0.0;
	}
}

// 第一个十分之一值层厚度
CString CMFCApplication123Dlg::OutputT1(CString Voltage, CString DoorMaterial)
{
	if (Voltage.IsEmpty() || DoorMaterial.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else {
		std::map<double, std::tuple<double, CString>>Tone =
		{
			{15.2, std::make_tuple(0.5, L"混凝土")},
			{18.5, std::make_tuple(1.0, L"混凝土")},
			{20.4, std::make_tuple(1.5, L"混凝土")},
			{22.1, std::make_tuple(2.0, L"混凝土")},
			{24.2, std::make_tuple(2.5, L"混凝土")},
			{26.1, std::make_tuple(3.0, L"混凝土")},
			{30.5, std::make_tuple(4.0, L"混凝土")},
			{32.5, std::make_tuple(5.0, L"混凝土")},
			{36.8, std::make_tuple(7.5, L"混凝土")},
			{41, std::make_tuple(10.0, L"混凝土")},

			{0.5, std::make_tuple(0.5, L"铅")},
			{1.5, std::make_tuple(1.0, L"铅")},
			{2.6, std::make_tuple(1.5, L"铅")},
			{3.35, std::make_tuple(2.0, L"铅")},
			{4.7, std::make_tuple(2.5, L"铅")},
			{4.5, std::make_tuple(3.0, L"铅")},
			{5.0, std::make_tuple(4.0, L"铅")},
			{5.3, std::make_tuple(5.0, L"铅")},
			{5.6, std::make_tuple(7.5, L"铅")},
			{5.7, std::make_tuple(10.0, L"铅")},
		};

		for (auto&g : Tone)
		{
			if ((std::get<0>(g.second) == _ttof(Voltage)) && (std::get<1>(g.second)) == DoorMaterial)
			{

				T1.Format(_T("%.3f"), g.first);
				return T1;
			}
		}

		MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
		return L"FALSE";
	}
}



CString CMFCApplication123Dlg::OutputTe(CString Voltage, CString DoorMaterial)
{
	if (Voltage.IsEmpty() || DoorMaterial.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else {
		std::map<double, std::tuple<double, CString>>TeV =
		{
			 {11.9, std::make_tuple(0.5, L"混凝土")},
			 { 15.0, std::make_tuple(1.0, L"混凝土") },
			 { 18.3, std::make_tuple(1.5, L"混凝土") },
			 { 20.1, std::make_tuple(2.0, L"混凝土") },
			 { 22.5, std::make_tuple(2.5, L"混凝土") },
			 { 24.7, std::make_tuple(3.0, L"混凝土") },
			 { 30.5, std::make_tuple(4.0, L"混凝土") },
			 { 32.5, std::make_tuple(5.0, L"混凝土") },
			 { 36.8, std::make_tuple(7.5, L"混凝土") },
			 { 38.6, std::make_tuple(10.0, L"混凝土") },

			 { 1.2, std::make_tuple(0.5, L"铅") },
			 { 2.6, std::make_tuple(1.0, L"铅") },
			 { 3.65, std::make_tuple(1.5, L"铅") },
			 { 4.2, std::make_tuple(2.0, L"铅") },
			 { 4.1, std::make_tuple(2.5, L"铅") },
			 { 4.9, std::make_tuple(3.0, L"铅") },
			 { 5.3, std::make_tuple(4.0, L"铅") },
			 { 5.5, std::make_tuple(5.0, L"铅") },
			 { 5.7, std::make_tuple(7.5, L"铅") },
			 { 5.6, std::make_tuple(10.0, L"铅") }
		};

		for (auto&h : TeV)
		{
			if ((std::get<0>(h.second) == _ttof(Voltage)) && (std::get<1>(h.second)) == DoorMaterial)
			{

				Te.Format(_T("%.2f"), h.first);
				return Te;
			}
		}

		MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
		return L"FALSE";
	}
}

// 半值层厚度HVL
CString CMFCApplication123Dlg::OutputHvl(CString Voltage, CString DoorMaterial)
{
	if (Voltage.IsEmpty() || DoorMaterial.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else {
		std::map<double, std::tuple<int, CString>>hvl =
		{
			{0.29,std::make_tuple(150,L"铅")},
			{0.42,  std::make_tuple(200,L"铅")},
			{0.86,  std::make_tuple(250,L"铅")},
			{1.7,  std::make_tuple(300,L"铅")},
			{2.5,  std::make_tuple(400,L"铅")},
			{22, std::make_tuple(150,L"混凝土")},
			{26, std::make_tuple(200,L"混凝土")},
			{28, std::make_tuple(250,L"混凝土")},
			{30, std::make_tuple(300,L"混凝土")},
			{30, std::make_tuple(400,L"混凝土")}
		};

		for (auto&i : hvl)
		{
			if ((std::get<0>(i.second) == _ttoi(Voltage)) && (std::get<1>(i.second) == DoorMaterial))
			{

				HVL.Format(_T("%.2f"), i.first);
				return HVL;
			}
		}

		MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
		return L"FALSE";
	}
}
// 500kV以下散射因子
CString CMFCApplication123Dlg::Outputaw(CString Voltage)
{
	if (Voltage == L"150")
		aw = L"1.6 * 1e-3";
	else
		aw = L"1.9 * 1e-3";

	return aw;
}

// 辐射野面积F
CString CMFCApplication123Dlg::OutputF()
{
	if (OutAngle.IsEmpty()) {
		GetDlgItemText(IDC_EDIT5_CSJD, OutAngle);
		GetDlgItemText(IDC_EDIT18_R0, R0);
	}
	else {
		GetDlgItemText(IDC_EDIT18_R0, R0);
	}
	if (OutAngle.IsEmpty() || R0.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			double num_F = acos(-1) * pow( _ttof(R0) * tan(_ttoi(OutAngle) *acos(-1) / 180.0f), 2);
			F.Format(_T("%.2f"), num_F);
			return F;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}

}
// fe输出函数
CString CMFCApplication123Dlg::Outputfe(CString AngleQ, CString BaMaterial)
{
	GetDlgItemText(IDC_EDIT12_Z, Z);
	if (Z.IsEmpty() || AngleQ.IsEmpty() || BaMaterial.IsEmpty()) {
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	std::map<double, std::tuple<CString, CString> > value = {
		{0.7, std::make_tuple(L"前向 0°", L"铁、铜")},
		{0.5, std::make_tuple(L"侧向 90°", L"铁、铜")},
		{0.5, std::make_tuple(L"前向 0°", L"铝、混凝土")},
		{0.3, std::make_tuple(L"侧向 90°", L"铝、混凝土")}
	};
	int Z_num = _ttoi(Z);
	if (Z_num > 73) 
	{
		fe = L"1";
		return fe;
	}
	else
	{
		for (auto&t : value)
		{
			if ((std::get<0>(t.second) == AngleQ) && (std::get<1>(t.second) == BaMaterial))
			{

				fe.Format(_T("%.1f"), t.first);
				SetDlgItemText(IDC_EDIT13_FE, fe);
				return fe;
			}
		}

		MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
		return L"FALSE";
	}
}

// D10输出函数
CString CMFCApplication123Dlg::OutputD10(CString Q, CString I, CString fe)
{
	Q = OutputQ(Voltage, AngleQ);
	fe = Outputfe(AngleQ, BaMaterial);
	if (Q.IsEmpty() || I.IsEmpty() || fe.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			double Q_num = _ttof(Q);
			double I_num = _ttof(I);
			double fe_num = _ttof(fe);

			double D10_num = 60 * Q_num * I_num * fe_num;

			D10.Format(_T("%.2f"), D10_num);
			SetDlgItemText(IDC_EDIT17_D10, D10);
			return D10;
		}
		catch (...)
		{
			MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}

// 有用束 500kV以下：#################################
// 透射因子B函数
CString CMFCApplication123Dlg::By1()
{
	GetDlgItemText(IDC_EDIT15_HC, Hc);
	GetDlgItemText(IDC_EDIT16_R, R);
	if (Hc.IsEmpty() || R.IsEmpty() || H0.IsEmpty() || I.IsEmpty() || anquan.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			float num_Hc = (float)_ttof(Hc);
			float num_R = (float)_ttof(R);
			float num_I = (float)_ttof(I);
			float num_H0 = (float)_ttof(H0);
			float num_anquan = (float)_ttof(anquan);

			double fenzi = num_Hc * num_R * num_R;
			double fenmu = num_I * num_H0 * num_anquan;
			num_B = fenzi / fenmu;

			B = SignificantNum(num_B, 2);
			//B.Format(_T("%.02f"), num_B);
			SetDlgItemText(IDC_EDIT27_B, B);
			return B;
		}
		catch (...)
		{
			MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}

// 取小数点后有效数字
// 第一个表示原始数
// 第二个表示取小数点后有多少位效数字
// 返回取出后小数
CString CMFCApplication123Dlg::SignificantNum(double OriNum,int flag)
{
	CString SignificantNumText;
	int isBreak = 0;
	int flagT = 0;

	// 定义整数部分
	double intpart;
	// 求3.1415的小数部分,得到结果为小数部分
	double fractpart = modf(OriNum, &intpart);
	// 预初始化，写整数部分到CString
	SignificantNumText.Format(_T("%.0f"), intpart);
	SignificantNumText.Append(L".");

	while (isBreak == 0)
	{
		// 先进行一遍小数点位数进位
		fractpart *= 10;
		fractpart = modf(fractpart, &intpart);

		// 判断整数部分是否为0
		if (static_cast<int>(intpart) != 0)
		{
			SignificantNumText.AppendFormat(_T("%d"), static_cast<int>(intpart));

			flagT += 1;
			if (flagT == flag)
				isBreak = 1;
		}
		else
		{
			SignificantNumText.Append(L"0");
		}
	}

	return SignificantNumText;
}

// 当射线次数按钮摁下回车键后
void CMFCApplication123Dlg::OnSSCSBtnEnter()
{
	CString SSCS;
	GetDlgItemText(IDC_EDIT17_J, SSCS);
	if (SSCS.IsEmpty())
	{
		MessageBox(L"请重新输入正确数字", _T("错误"), MB_OK);
		return;
	}

	//m_SSCS.DoModal();
	//m_SSCS.SSCSText = SSCS;
	////if (m_SSCS.DoModal() != IDOK) return;
	//auto Fun = [this]()
	//{
	//	this->m_SSCS.DoModal();
	//};
	//std::thread m_SSCSThread(Fun);
	//m_SSCSThread.detach();
	//m_SSCS.SSCSText = SSCS;

	m_SSCS.SSCSText = SSCS;
	m_SSCS.DoModal();
}

//屏蔽物质厚度X
// 铅
CString CMFCApplication123Dlg::Xy1Q()
{
	
	int a = 0;
	if /**/ (pow(10, -5) > num_B && num_B > pow(10, -6))
		a = 1;
	else if (pow(10, -4) > num_B && num_B > pow(10, -5))
		a = 2;
	else if (pow(10, -3) > num_B && num_B > pow(10, -4))
		a = 3;
	else if (pow(10, -2) > num_B && num_B > pow(10, -3))
		a = 4;
	else if (pow(10, -1) > num_B && num_B > pow(10, -2))
		a = 5;
	else
	{
		a = 6;
	}

	std::map<double, std::tuple<CString, int>> temp = {
		{5.0, std::make_tuple(L"150", 1)},
		{4.0, std::make_tuple(L"150", 2)},
		{3.0, std::make_tuple(L"150", 3)},
		{2.0, std::make_tuple(L"150", 4)},
		{1.5, std::make_tuple(L"150", 5)},
		{0.5, std::make_tuple(L"150", 6)},
		{7.0, std::make_tuple(L"200", 1)},
		{5.5, std::make_tuple(L"200", 2)},
		{4.0, std::make_tuple(L"200", 3)},
		{3.0, std::make_tuple(L"200", 4)},
		{2.0, std::make_tuple(L"200", 5)},
		{1.0, std::make_tuple(L"200", 6)},
		{13.2, std::make_tuple(L"250", 1)},
		{10.5, std::make_tuple(L"250", 2)},
		{9.5, std::make_tuple(L"250", 3)},
		{6.0, std::make_tuple(L"250", 4)},
		{3.0, std::make_tuple(L"250", 5)},
		{2.5, std::make_tuple(L"250", 6)},
		{26.0, std::make_tuple(L"300", 1)},
		{20.0, std::make_tuple(L"300", 2)},
		{14.5, std::make_tuple(L"300", 3)},
		{9.5, std::make_tuple(L"300", 4)},
		{5.0, std::make_tuple(L"300", 5)},
		{2.0, std::make_tuple(L"300", 6)},
		{40.0, std::make_tuple(L"400", 1)},
		{33.0, std::make_tuple(L"400", 2)},
		{24.0, std::make_tuple(L"400", 3)},
		{16.5, std::make_tuple(L"400", 4)},
		{8.5, std::make_tuple(L"400", 5)},
		{3.0, std::make_tuple(L"400", 6)}
	};

	for (auto&t : temp) 
	{
		if ((std::get<0>(t.second) == Voltage) && (std::get<1>(t.second) == DoorMaterial))
		{
			X.Format(_T("%.1f"), t.first);
			SetDlgItemText(IDC_EDIT28_X, X);

			return X;

		}
	}

	MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
	return L"FALSE";
}

// 混凝土
CString CMFCApplication123Dlg::Xy1H()
{
	
	int a = 0;
	if /**/ (pow(10, -5) > num_B && num_B > pow(10, -6))
		a = 1;
	else if (pow(10, -4) > num_B && num_B > pow(10, -5))
		a = 2;
	else if (pow(10, -3) > num_B && num_B > pow(10, -4))
		a = 3;
	else if (pow(10, -2) > num_B && num_B > pow(10, -3))
		a = 4;
	else if (pow(10, -1) > num_B && num_B > pow(10, -2))
		a = 5;
	else
	{
		a = 6;
	}

	std::map<int, std::tuple<CString, int>> hun = {
		{425, std::make_tuple(L"150", 1)},
		{350, std::make_tuple(L"150", 2)},
		{280, std::make_tuple(L"150", 3)},
		{205, std::make_tuple(L"150", 4)},
		{140, std::make_tuple(L"150", 5)},
		{60, std::make_tuple(L"150", 6)},
		{500, std::make_tuple(L"200", 1)},
		{415, std::make_tuple(L"200", 2)},
		{330, std::make_tuple(L"200", 3)},
		{240, std::make_tuple(L"200", 4)},
		{160, std::make_tuple(L"200", 5)},
		{80, std::make_tuple(L"200", 6)},
		{545, std::make_tuple(L"250", 1)},
		{450, std::make_tuple(L"250", 2)},
		{360, std::make_tuple(L"250", 3)},
		{260, std::make_tuple(L"250", 4)},
		{180, std::make_tuple(L"250", 5)},
		{90, std::make_tuple(L"250", 6)},
		{550, std::make_tuple(L"300", 1)},
		{490, std::make_tuple(L"300", 2)},
		{390, std::make_tuple(L"300", 3)},
		{290, std::make_tuple(L"300", 4)},
		{190, std::make_tuple(L"300", 5)},
		{100, std::make_tuple(L"300", 6)},
		{650, std::make_tuple(L"400", 1)},
		{550, std::make_tuple(L"400", 2)},
		{450, std::make_tuple(L"400", 3)},
		{350, std::make_tuple(L"400", 4)},
		{250, std::make_tuple(L"400", 5)},
		{140, std::make_tuple(L"400", 6)}
	};

	for (auto&t : hun)
	{
		if ((std::get<0>(t.second) == Voltage) && (std::get<1>(t.second) == a))
		{
			CString abc;
			abc.Format(_T("%d"), t.first);
			SetDlgItemText(IDC_EDIT28_X, abc);
			X = abc;
			return X;
		}
	}

	MessageBox(L"未找到匹配项", _T("提示"), MB_OK);
	return L"FALSE";
}

// 有用束 10MkV ################################
// 透射因子B 输出函数
CString CMFCApplication123Dlg::By2()
{
	GetDlgItemText(IDC_EDIT15_HC, Hc);
	GetDlgItemText(IDC_EDIT16_R, R);
	if (Hc.IsEmpty() || R.IsEmpty() || D10.IsEmpty() || anquan.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}	
	else 
	{
		try
		{
			float num_Hc = (float)_ttof(Hc);
			float num_R = (float)_ttof(R);
			float num_D10 = (float)_ttof(D10);
			float num_anquan = (float)_ttof(anquan);
			double fenzi = num_Hc * num_R * num_R;
			double fenmu = num_D10 * num_anquan;
			double by2 = fenzi / fenmu;
			num_B = pow(10, -6) * by2;
			//double A = pow(10, -1);
			B.Format(_T("%.2f"), num_B);
			SetDlgItemText(IDC_EDIT27_B, B);
			return B;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}

// 屏蔽材料厚度X 的计算公式
CString CMFCApplication123Dlg::Xy2()
{
	T1 = OutputT1(Voltage, DoorMaterial);
	Te = OutputTe(Voltage, DoorMaterial);
	if (B.IsEmpty() || T1.IsEmpty() || Te.IsEmpty() || NumDoor.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			GetDlgItemText(IDC_EDIT9_DOORNUM, NumDoor);
			int num_door = _ttoi(NumDoor);
			double n = log10(1 / num_B);
			double num_X = (_ttof(T1) + (n - 1) * _ttof(Te) + 1) / num_door;
			X.Format(_T("%d"), num_X);
			SetDlgItemText(IDC_EDIT28_X, X);
			return X;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}
// 散射束500kV以下;####################
// 透射因子B
CString CMFCApplication123Dlg::Bs1()
{
	CString F  = OutputF();
	CString aw = Outputaw(Voltage);
	GetDlgItemText(IDC_EDIT18_R0, R0);
	GetDlgItemText(IDC_EDIT16_R, R);
	GetDlgItemText(IDC_EDIT15_HC, Hc);
	H0 = OutputH0(Voltage, WindowMaterial);
	
	if (Hc.IsEmpty() || R.IsEmpty() || I.IsEmpty() || H0.IsEmpty() || anquan.IsEmpty() || R0.IsEmpty() || aw.IsEmpty() || F.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			float num_Hc = (float)_ttof(Hc);
			float num_R = (float)_ttof(R);
			float num_I = (float)_ttof(I);
			float num_H0 = (float)_ttof(H0);
			float num_anquan = (float)_ttof(anquan);
			double num_R0 = _ttof(R0);
			double num_F = _ttof(F);
			double num_aw = _ttof(aw);

			double fenzi = num_Hc * num_R * num_R * pow(num_R0, 2);
			double fenmu = num_I * num_H0 * num_anquan * num_F * num_aw;
			double a = fenzi / fenmu;

			num_B = a;
			B.Format(_T("%.2f"), num_B);
			SetDlgItemText(IDC_EDIT27_B, B);
			return B;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}

// 屏蔽物质厚度X
CString CMFCApplication123Dlg::Xs1()
{
	TVL = OutputTvl(Voltage, DoorMaterial); 
	if (TVL.IsEmpty() || B.IsEmpty() || NumDoor.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			GetDlgItemText(IDC_EDIT9_DOORNUM, NumDoor);
			int num_door = _ttoi(NumDoor);
			int num_TVL = _ttoi(TVL);
			//double num_B = _ttof(B);
			double num_X = (num_TVL * log10(num_B)*(-1)) / num_door;
			X.Format(_T("%.2f"), num_X);
			SetDlgItemText(IDC_EDIT28_X, X);
			return X;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}

// 散射束10MkV以下#########################
// 透射因子B
CString CMFCApplication123Dlg::Bs2()
{
	GetDlgItemText(IDC_EDIT15_HC, Hc);
	GetDlgItemText(IDC_EDIT16_R, R);
	GetDlgItemText(IDC_EDIT18_R0, R0);
	D10 = OutputD10(Q, I, fe);
	//CString RRR;
	//GetDlgItemText(IDC_EDIT17_RRR, RRR);
	std::map<int, CString> SSCSValue = m_SSCS.SSCS_Value;
	
	CString F2;
	GetDlgItemText(IDC_EDIT17_F2, F2);
	CString j;
	GetDlgItemText(IDC_EDIT17_J, j);
	CString a1;
	GetDlgItemText(IDC_EDIT17_a1, a1);
	CString a2;
	GetDlgItemText(IDC_EDIT17_a2, a2);
	if (Hc.IsEmpty() || R.IsEmpty() || D10.IsEmpty() || R0.IsEmpty() || anquan.IsEmpty() || (SSCSValue[2]).IsEmpty() || F1.IsEmpty() || F2.IsEmpty() || j.IsEmpty() || a1.IsEmpty() || a2.IsEmpty())
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			double num_Hc = _ttof(Hc);
			double num_R = _ttof(R);
			double num_R0 = _ttof(R0);
			double num_D10 = _ttof(D10);
			// 计算R2到RJ
			double num_RRR;
			{
				//double num_RRR = _ttof(RRR);
				double RCount;
				for (auto &s : SSCSValue)
				{
					//CString temp = s.second();
					RCount *= _ttoi(s.second);
				}
				num_RRR = RCount;
			}
			double num_F1 = _ttof(F1);
			double num_F2 = _ttof(F2);
			int num_j = _ttoi(j);
			double num_a1 = _ttof(a1);
			double num_a2 = _ttof(a2);
			double num_anquan = _ttof(anquan);
			double fenzi = num_Hc * num_R*num_R*num_R0*num_R0*num_RRR*num_RRR*pow(10, -6);
			double fenmu = num_D10 * num_anquan*num_F1*num_a1*pow(num_F2*num_a2, (num_j - 1));
			num_B = fenzi / fenmu;
			B.Format(_T("%.2f"), num_B);
			SetDlgItemText(IDC_EDIT27_B, B);
			return B;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}

}

//屏蔽物质厚度X
CString CMFCApplication123Dlg::Xs2()
{
	T1 = OutputT1(Voltage, DoorMaterial);
	Te = OutputTe(Voltage, DoorMaterial);
	if (B.IsEmpty() || T1.IsEmpty() || Te.IsEmpty() || NumDoor.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			GetDlgItemText(IDC_EDIT9_DOORNUM, NumDoor);
			int num_door = _ttoi(NumDoor);
			double n = log10(1 / num_B);
			double num_X = (_ttof(T1) + (n - 1) * _ttof(Te) + 1) / num_door;
			X.Format(_T("%.0f"), num_X);
			SetDlgItemText(IDC_EDIT28_X, X);
			return X;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}

// 漏射束在500kV以下#########################
// 透射因子B
CString CMFCApplication123Dlg::Bl1()
{
	GetDlgItemText(IDC_EDIT15_HC, Hc);
	GetDlgItemText(IDC_EDIT16_R, R);
	Hl = OutputHl(Voltage);
	if (Hc.IsEmpty() || R.IsEmpty() || Hl.IsEmpty() || anquan.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			double num_Hc = _ttof(Hc);
			double num_R = _ttof(R);
			double num_Hl = _ttof(Hl);
			double num_anquan = _ttof(anquan);

			num_B = num_Hc * pow(num_R, 2) / (num_Hl * num_anquan);

			B.Format(_T("%.2f"), num_B);
			SetDlgItemText(IDC_EDIT27_B, B);
			return B;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}
// 屏蔽物质厚度X
CString CMFCApplication123Dlg::Xl1()
{
	TVL = OutputTvl(Voltage, DoorMaterial);
	if (TVL.IsEmpty() || B.IsEmpty() || NumDoor.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			GetDlgItemText(IDC_EDIT9_DOORNUM, NumDoor);
			int num_door = _ttoi(NumDoor);
			double num_TVL = _ttof(TVL);
			//double num_B = _ttof(B);
			double num_X = (num_TVL * log10(num_B)*(-1)) / num_door;
			X.Format(_T("%.2f"), num_X);
			SetDlgItemText(IDC_EDIT28_X, X);
			return X;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}
// 漏射束在10MkV下#########################
// 透射因子B
CString CMFCApplication123Dlg::Bl2()
{
	GetDlgItemText(IDC_EDIT15_HC, Hc);
	GetDlgItemText(IDC_EDIT16_R, R);
	GetDlgItemText(IDC_EDIT7_HL, Hl);
	if (Hc.IsEmpty() || R.IsEmpty() || Hl.IsEmpty() || anquan.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			double num_Hc = _ttof(Hc);
			double num_R = _ttof(R);
			double num_Hl = _ttof(Hl);
			double num_anquan = _ttof(anquan);

			num_B = num_Hc * pow(num_R, 2) / (num_Hl * num_anquan);

			B.Format(_T("%.2f"), num_B);
			SetDlgItemText(IDC_EDIT27_B, B);
			return B;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}
// 屏蔽物质厚度X
CString CMFCApplication123Dlg::Xl2()
{
	T1 = OutputT1(Voltage, DoorMaterial);
	Te = OutputTe(Voltage, DoorMaterial);
	if (B.IsEmpty() || T1.IsEmpty() || Te.IsEmpty() || NumDoor.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			GetDlgItemText(IDC_EDIT9_DOORNUM, NumDoor);
			int num_door = _ttoi(NumDoor);
			double n = log10(1 / num_B);
			double num_X = (_ttof(T1) + (n - 1) * _ttof(Te) + 1) / num_door;
			X.Format(_T("%d"), num_X);
			SetDlgItemText(IDC_EDIT28_X, X);
			return X;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}
// 天空散射#############################
// 反散射
// 透射因子B
CString CMFCApplication123Dlg::BT1()
{
	D10 = OutputD10(Q, I, fe);
	std::map<int, CString> TKSS_Value = m_TKSS.GetValue();
	if (D10.IsEmpty() || TKSS_Value[IDC_EDIT_LTJ].IsEmpty() || TKSS_Value[IDC_EDIT_DI].IsEmpty() || 
		TKSS_Value[IDC_EDIT_DS].IsEmpty() || TKSS_Value[IDC_EDIT_HM].IsEmpty())
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			CString LTJ, DI, DS, HM;

			double num_LTJ = _ttof(TKSS_Value[IDC_EDIT_LTJ]);
			double num_DI = _ttof(TKSS_Value[IDC_EDIT_DI]);
			double num_DS = _ttof(TKSS_Value[IDC_EDIT_DS]);
			double num_HM = _ttof(TKSS_Value[IDC_EDIT_HM]);

			num_B = 4 * pow(10, -5) * num_HM * pow(num_DI, 2) * pow(num_DS, 2) / (_ttof(D10) * pow(num_LTJ, 1.3) * _ttof(anquan));
			B.Format(_T("%.2f"), num_B);
			SetDlgItemText(IDC_EDIT27_B, B);
			return B;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}

// 屏蔽物质厚度X
CString CMFCApplication123Dlg::XT1()
{
	T1 = OutputT1(Voltage, DoorMaterial);
	Te = OutputTe(Voltage, DoorMaterial);
	if (B.IsEmpty() || T1.IsEmpty() || Te.IsEmpty() || NumDoor.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			GetDlgItemText(IDC_EDIT9_DOORNUM, NumDoor);
			int num_door = _ttoi(NumDoor);
			double n = log10(1 / num_B);
			double num_X = (_ttof(T1) + (n - 1) * _ttof(Te) + 1) / num_door;
			X.Format(_T("%.0f"), num_X);
			SetDlgItemText(IDC_EDIT28_X, X);
			return X;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}

// 侧向散射################################
// 透射因子B
CString CMFCApplication123Dlg::BT2()
{
	D10 = OutputD10(Q, I, fe);
	
	std::map<int, CString> TKSS_Value = m_TKSS.GetValue();
	if (TKSS_Value[IDC_EDIT_H].IsEmpty() || TKSS_Value[IDC_EDIT_F].IsEmpty() || 
		TKSS_Value[IDC_EDIT_JJ].IsEmpty() || TKSS_Value[IDC_EDIT_DR].IsEmpty())
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			double num_H = _ttof(TKSS_Value[IDC_EDIT_H]);
			double num_F = _ttof(TKSS_Value[IDC_EDIT_F]);
			//double num_JJ = _ttof(TKSS_Value[IDC_EDIT_JJ]);
			double num_DR = _ttof(TKSS_Value[IDC_EDIT_DR]);
			JJ = TKSS_Value[IDC_EDIT_JJ];
			double f = Outputf(JJ);
			num_B = pow(10, -6) * num_H * pow(num_DR, 2) / (_ttof(D10) * num_F * f * _ttof(anquan));
			B.Format(_T("%.2f"), num_B);
			SetDlgItemText(IDC_EDIT27_B, B);
			return B;
		}
		catch (...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}

}

// 屏蔽物质厚度X
CString CMFCApplication123Dlg::XT2()
{
	T1 = OutputT1(Voltage, DoorMaterial);
	Te = OutputTe(Voltage, DoorMaterial);
	if (B.IsEmpty() || T1.IsEmpty() || Te.IsEmpty() || NumDoor.IsEmpty()) 
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else 
	{
		try
		{
			GetDlgItemText(IDC_EDIT9_DOORNUM, NumDoor);
			int num_door = _ttoi(NumDoor);
			double n = log10(1 / num_B);
			double num_X = (_ttof(T1) + (n - 1) * _ttof(Te) + 1) / num_door;
			X.Format(_T("%d"), num_X);
			SetDlgItemText(IDC_EDIT28_X, X);
			return X;
		}
		catch(...)
		{
			MessageBox(L"错误", _T("提示"), MB_OK);
			return L"FALSE";
		}
	}
}

// 电子加速器的图解法厚度
// 混凝土
CString CMFCApplication123Dlg::X2H()
{
	GetDlgItemText(IDC_EDIT9_DOORNUM, NumDoor);
	if (B.IsEmpty() || NumDoor.IsEmpty() || Voltage.IsEmpty())
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else {
		//double num_B = _ttof(B);
		int a = 0;
		if /**/ ((pow(10, -5) > num_B) && (num_B > pow(10, -6)))
			a = 1;
		else if ((pow(10, -4) > num_B) && (num_B > pow(10, -5)))
			a = 2;
		else if ((pow(10, -3) > num_B) && (num_B > pow(10, -4)))
			a = 3;
		else if ((pow(10, -2) > num_B) && (num_B > pow(10, -3)))
			a = 4;
		else if ((pow(10, -1) > num_B) && (num_B > pow(10, -2)))
			a = 5;
		else
		{
			a = 6;
		}

		std::map<int, std::tuple<CString, int>> temp = {
			{750, std::make_tuple(L"0.5", 1)},
			{700, std::make_tuple(L"0.5", 2)},
			{600, std::make_tuple(L"0.5", 3)},
			{450, std::make_tuple(L"0.5", 4)},
			{320, std::make_tuple(L"0.5", 5)},
			{250, std::make_tuple(L"0.5", 6)},
			{850, std::make_tuple(L"1.0", 1)},
			{800, std::make_tuple(L"1.0", 2)},
			{700, std::make_tuple(L"1.0", 3)},
			{490, std::make_tuple(L"1.0", 4)},
			{350, std::make_tuple(L"1.0", 5)},
			{255, std::make_tuple(L"1.0", 6)},
			{1050, std::make_tuple(L"2.0", 1)},
			{1000, std::make_tuple(L"2.0", 2)},
			{820, std::make_tuple(L"2.0", 3)},
			{700, std::make_tuple(L"2.0", 4)},
			{400, std::make_tuple(L"2.0", 5)},
			{300, std::make_tuple(L"2.0", 6)},
			{1300, std::make_tuple(L"3.0", 1)},
			{1250, std::make_tuple(L"3.0", 2)},
			{1000, std::make_tuple(L"3.0", 3)},
			{800, std::make_tuple(L"3.0", 4)},
			{500, std::make_tuple(L"3.0", 5)},
			{320, std::make_tuple(L"3.0", 6)},
			{2000, std::make_tuple(L"10.0", 1)},
			{1820, std::make_tuple(L"10.0", 2)},
			{1500, std::make_tuple(L"10.0", 3)},
			{1200, std::make_tuple(L"10.0", 4)},
			{800, std::make_tuple(L"10.0", 5)},
			{400, std::make_tuple(L"10.0", 6)}
		};

		for (auto&t : temp)
		{
			if ((std::get<0>(t.second) == Voltage) && (std::get<1>(t.second) == a))
			{
				int Pic;
				Pic = static_cast<int>(t.first);
				double x = Pic / _ttoi(NumDoor);
				CString xx;
				xx.Format(_T("%.2f"), x);
				SetDlgItemText(IDC_EDIT28_X2, xx);
				return xx;
			}
		}
	}

	MessageBox(L"注意：只有电子加速器部分管电压值可用图解法计算", _T("提示"), MB_OK);
	return L"FALSE";
}

// 铅
CString CMFCApplication123Dlg::X2Q()
{
	GetDlgItemText(IDC_EDIT9_DOORNUM, NumDoor);
	if (B.IsEmpty() || NumDoor.IsEmpty() || Voltage.IsEmpty())
	{
		MessageBox(L"参数不全，无法计算", _T("提示"), MB_OK);
		return L"FALSE";
	}
	else
	{
		//double num_B = _ttof(B);
		int a = 0;
		if /**/ (pow(10, -5) > num_B && num_B > pow(10, -6))
			a = 1;
		else if (pow(10, -4) > num_B && num_B > pow(10, -5))
			a = 2;
		else if (pow(10, -3) > num_B && num_B > pow(10, -4))
			a = 3;
		else if (pow(10, -2) > num_B && num_B > pow(10, -3))
			a = 4;
		else if (pow(10, -1) > num_B && num_B > pow(10, -2))
			a = 5;
		else
		{
			a = 6;
		}

		std::map<int, std::tuple<CString, int>> temp = {
			{60, std::make_tuple(L"0.5", 1)},
			{50, std::make_tuple(L"0.5", 2)},
			{40, std::make_tuple(L"0.5", 3)},
			{25, std::make_tuple(L"0.5", 4)},
			{20, std::make_tuple(L"0.5", 5)},
			{10, std::make_tuple(L"0.5", 6)},
			{130, std::make_tuple(L"1.0", 1)},
			{120, std::make_tuple(L"1.0", 2)},
			{90, std::make_tuple(L"1.0", 3)},
			{70, std::make_tuple(L"1.0", 4)},
			{45, std::make_tuple(L"1.0", 5)},
			{20, std::make_tuple(L"1.0", 6)},
			{200, std::make_tuple(L"2.0", 1)},
			{180, std::make_tuple(L"2.0", 2)},
			{150, std::make_tuple(L"2.0", 3)},
			{110, std::make_tuple(L"2.0", 4)},
			{70, std::make_tuple(L"2.0", 5)},
			{30, std::make_tuple(L"2.0", 6)},
			{250, std::make_tuple(L"3.0", 1)},
			{230, std::make_tuple(L"3.0", 2)},
			{180, std::make_tuple(L"3.0", 3)},
			{130, std::make_tuple(L"3.0", 4)},
			{80, std::make_tuple(L"3.0", 5)},
			{350, std::make_tuple(L"3.0", 6)},
			{275, std::make_tuple(L"10.0", 1)},
			{260, std::make_tuple(L"10.0", 2)},
			{220, std::make_tuple(L"10.0", 3)},
			{160, std::make_tuple(L"10.0", 4)},
			{105, std::make_tuple(L"10.0", 5)},
			{55, std::make_tuple(L"10.0", 6)}
		};

		for (auto&t : temp)
		{
			if ((std::get<0>(t.second) == Voltage) && (std::get<1>(t.second) == a))
			{
				int Pic;
				Pic = t.first;
				double x = Pic / _ttoi(NumDoor);
				CString xx;
				xx.Format(_T("%.2f"), x);
				SetDlgItemText(IDC_EDIT28_X2, xx);
				return xx;
			}

		}
	}

	MessageBox(L"注意：只有电子加速器部分管电压值可用图解法计算", _T("提示"), MB_OK);
	return L"FALSE";
}

// 打开保存文件选择对话框
// 返回的即为用户选择的文件名
CString CMFCApplication123Dlg::OpenDlgChoseFile()
{
	// TODO: 在此添加控件通知处理程序代码
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	CString fileTitle;
	fileTitle.Format(_T("%4d%02d%02d%02d%02d"), sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute);
	fileTitle.Append(_T("屏蔽层厚度记录.txt"));

	CString strFileName = _T("");
	// bOpenFileDialog          为TRUE则显示打开对话框，为FALSE则显示保存对话文件对话框。
	// lpszDefExt               指定默认的文件扩展名。
	// lpszFileName             指定默认的文件名。
	// dwFlags                  指明一些特定风格。(默认OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT)
	// lpszFilter               指明可供选择的文件类型和相应的扩展名。
	// pParentWnd               为父窗口指针。
	CFileDialog    dlgFile(FALSE, NULL, fileTitle, OFN_HIDEREADONLY,
		_T("日志文件 (*.txt)|*.txt||"), NULL);

	if (dlgFile.DoModal() == IDOK)
	{
		strFileName = dlgFile.GetPathName();
	}
	else
	{
		// TODO 用户选择取消
		// 默认保存在程序运行路径
		char szFilePath[MAX_PATH] = { 0 };

		GetModuleFileNameA(NULL, szFilePath, sizeof(szFilePath));
		string strRet(szFilePath);
		int Pos = static_cast<int>(strRet.rfind("\\"));  // 反序查找 然后进行分割
		strRet = strRet.substr(0, Pos);
		strRet.append("\\");
		strFileName = strRet.c_str();

		strFileName.Append(fileTitle);
	}

	return  strFileName;
}

// 写文件
// 第一个参数为文件名，第二个参数为文件内容
// 需要包含#include <iostream>   #include <fstream>3
// 形式上的参数 或者 参数的形式
void CMFCApplication123Dlg::SaveFile2TXT(CString Cfilename, CString Ctext)
{
	std::string filename = CT2A(Cfilename.GetBuffer());
	std::string text = CT2A(Ctext.GetBuffer());
	Cfilename.ReleaseBuffer();
	Ctext.ReleaseBuffer();

	// 向文件写内容
	// std::ios:: in只读  out只写  app末尾写
	std::ofstream outfile(filename, std::ios::out);

	// 将数据输出至out.txt文件中
	outfile << text << std::endl;

	outfile.close();
}


void CMFCApplication123Dlg::WriteLog(CString s)
{
	auto now = std::chrono::system_clock::now();
	auto ms = std::chrono::duration_cast<std::chrono::microseconds>(now.time_since_epoch());

	CStringW str;
	//tmp.Format(L"%03d ", ms % 1000);
	//str.Insert(0, tmp);
	str.Insert(0, CTime::GetCurrentTime().Format(L"> %Y-%m-%d %H:%M:%S: "));
	str.Append(s);
	//str.Format(_T("\r\n"));
	//str += "\r\n";
	//str.Insert(str.GetLength(), L"\r\n");
	str.Append(_T("\r\n"));

	CEdit* pEdit = (CEdit*)GetDlgItem(IDC_EDIT29_RIZHI);
	int len = pEdit->GetWindowTextLength();
	if (len >= static_cast<int>(pEdit->GetLimitText()))
		pEdit->SetSel(0, -1);
	else
		pEdit->SetSel(-1, -1);
	pEdit->ReplaceSel(str);

	//GetDlgItem(IDC_SHOW_INFO)->SetWindowTextW(str);
}


// 用户选择导出到文件中
void CMFCApplication123Dlg::OnBnClickedButtonSurvey()
{
	// 获取日志上的内容
	CString fileText = L"";
	GetDlgItemText(IDC_EDIT29_RIZHI, fileText);
	
	if (!fileText.IsEmpty())
	{
		// 先打开选择文件地址对话框
		CString filePath = OpenDlgChoseFile();

		// 保存
		// 调用的时候需要传递一个 实际上的参数
		SaveFile2TXT(filePath, fileText);
		//MessageBox(L"保存文件完成", _T("提示"), MB_OK);
	}
	else
	{
		// TODO 空内容 不做处理
	}
}

// 弹出提示信息
void CMFCApplication123Dlg::OnBnClickedBtnShowinfo()
{
	// TODO: 在此添加控件通知处理程序代码
	//if (m_SHENGM.DoModal() != IDOK)
	//{
	//	EndDialog(IDCANCEL);
	//	return FALSE;  //弹出声明框
	//}

	//std::shared_ptr<SENGM> m_SHENGMDlg = std::make_shared<SENGM>();
	SENGM * m_SHENGMDlg = nullptr;
	if (m_SHENGMDlg == nullptr)
	{
		m_SHENGMDlg = new SENGM(this);

		if (!(m_SHENGMDlg->Create(IDD_DIALOG_SHENGM, this))) return;
	}

	int nDlgHeight = 171;
	int nDlgWidth  = 371;

	//CRect rcClient;
	//GetClientRect(&rcClient);

	//m_SHENGMDlg->MoveWindow((rcClient.Width() - nDlgWidth) / 2, (rcClient.Height() - nDlgHeight) / 2);
	
	m_SHENGMDlg->ShowWindow(SW_SHOW);
}
