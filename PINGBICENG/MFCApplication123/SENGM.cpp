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
	ON_BN_CLICKED(IDOK, &SENGM::OnBnClickedOk)
END_MESSAGE_MAP()


// SENGM 消息处理程序


BOOL SENGM::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	CFont m_Font;
	m_Font.CreatePointFont(115, L"Arial", NULL);
	GetDlgItem(IDC_EDIT_USINGINFO)->SetFont(&m_Font, true);
	//m_static.SetWindowText("100");


	CString UsingInfo = L"前提标准：\r\n\r\n" \
	L"GB 50681-2011 机械工业厂房建筑设计规范\r\n" \
	L"12.0.6：\r\n" \
	L"  第3条:钢筋混凝土密度，不应小于2400kg/m3，不得留施工缝\r\n"\
	L"  第6条:除高能X射线防护门外，防护门与屏蔽体门框之间的搭接宽度，不应小于门和门框缝隙的15倍，并不应小于150mm；门扇下部应深入地槽，其深度同门与门框搭接宽度\r\n"\
	L"12.0.7：\r\n"\
	L"  第3条:电离辐射防护屏蔽体的计算防护厚度安全系数，应大于2\r\n"\
	L"GB/T 30371-2013 无损检测用电子直线加速器工程通用规范\r\n"\
	L"5.3.7.1 泄漏剂量：\r\n"\
	L"  在X射线束前向准直器±1/2准直器锥角到±180°的范围内，距靶1m处泄漏剂量率与X射线束中心轴线上剂量率的百分比应小于0.1%\r\n"\
	L"  8.1.2.5,在加速器X射线束能量大于或等于10MeV时，辐射屏蔽设计应考虑中子辐射\r\n"\
	L"  8.1.3.1,辐射屏蔽材料采用混凝土时，其强度等级应不低于C25，密度不应低于2350kg/m3\r\n"\
	L"  8.1.3.4,屏蔽门与墙体搭接合理，间隙与搭接比值不小于1/10\r\n\r\n"\
	L"剂量限值：\r\n\r\n"\
	L"《电离辐射防护与辐射源安全基本标准》（GB 18871-2002）\r\n"\
	L"  附录B规定“任何工作人员的职业照射水平连续五年的平均有效剂量不得高于20mSv/a，公众中关键人群组的成员所受的有效剂量不超过1mSv/a”\r\n"\
	L"《工业X射线探伤放射防护要求》（GBZ 117-2015）\r\n"\
	L"  第5.2.3条规定“应将控制区边界外、作业时周围剂量当量率大于2.5μSv/h的范围划为监督区，并在其边界上悬挂清晰可见的“无关人员禁止入内”警告牌，必要时设专人警戒”\r\n"\
	L"《工业X射线探伤卫生防护监测规范》（GBZ/T 150-2002）\r\n"\
	L"《粒子加速器辐射防护规定》（GB 5172-1985）\r\n"\
	L"  第2.8条规定“从事加速器工作的全体放射性工作人员，年人均剂量当量应低于5mSv”和第2.10条规定“加速器产生的杂散辐射、放射性气体和放射性废水等，对关键居民组中的个人造成的有效剂量当量应低于每年0.1mSv”\r\n"\
	L"《电子加速器辐照装置辐射安全和防护》（HJ 979-2018）\r\n"\
	L"  第4.2.1条规定“在电子加速器辐照装置的工程设计中，辐射防护的剂量约束值规定为：a）辐射工作人员个人年有效剂量为5mSv；b）公众成员个人年有效剂量为0.1mSv”\r\n"\
	L"《工业X射线探伤室辐射屏蔽规范》（GBZ/T 250-2014）\r\n"\
	L"  第5.1条规定“探伤室外表面30cm处的剂量率控制值为2.5μSv/h”，第3.1.2条规定“对不需要人员到达的探伤室顶，探伤室顶外表面30cm处的剂量率参考控制水平通常可取为100μSv/h”和第3.2.3条规定“当可能存在泄漏辐射和散射辐射的复合作用时，通常分别估算泄漏辐射和各项散射辐射，当它们的屏蔽厚度相差一个什值层厚度（TVL）或更大时，采用其中较厚的屏蔽，当相差不足一个TVL时，则在较厚的屏蔽上增加一个半值层厚度（HVL）”\r\n"\
	L"《无损检测用电子直线加速器工程通用规范》（GB/T 30371-2013）\r\n"\
	L"  第8.1.3.3条规定“在工程设计时辐射防护设计的剂量规定为：职业照射个人年有效剂量限值为5mSv；公众成员个人年有效剂量限值为0.1mSv”和第8.1.3.4条规定“屏蔽门与墙体搭接合理，间隙与搭接比值不小于1/10”\r\n"\
	L"  在计算屏蔽厚度时，需给予2倍安全系数\r\n"\
	L"\r\n";
	SetDlgItemText(IDC_EDIT_USINGINFO, UsingInfo);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void SENGM::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码

	//1.手工调用pWnd->DestroyWindow()；
	//2.DestroyWindow会发送WM_DESTROY；
	//3.WM_DESTROY对应的消息处理函数是OnDestroy()；
	//4.DestroyWindow会发送WM_NCDESTROY；
	//5.WM_NCDESTROY对应的消息处理函数是OnNcDestroy；
	//6.OnNcDestroy最后会调用PostNcDestroy；
	//7.PostNcDestroy经常被用户重载以提供释放内存操作。例如可以使用delete this；

	DestroyWindow();

	//CDialogEx::OnOK();
}

// 重载DestroyWindow后事件
void SENGM::PostNcDestroy()
{
	// TODO: 在此添加专用代码和/或调用基类

	delete this;

	CDialogEx::PostNcDestroy();
}
