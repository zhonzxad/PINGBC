
// MFCApplication123Dlg.h: 头文件
//

#pragma once
#include <map>
#include <vector>
#include <cmath>
#include <iostream>   
#include <iomanip>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>

#include "TKSS.h"
#include "YQXZ.h"
#include "SENGM.h"
#include "SSCS.h"


// CMFCApplication123Dlg 对话框
class CMFCApplication123Dlg : public CDialogEx
{
// 构造
public:
	CMFCApplication123Dlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION123_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	// 此项为在对话框中添加了控件事件后自动生成的.
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBnClickedRadioXtxs();
	afx_msg void OnBnClickedRadio2Sdsr();
	afx_msg void OnBnClickedRadio3Mrz5ma();
	afx_msg void OnBnClickedRadio4Sdsr();
	afx_msg void OnBnClickedRadio11Aqxs2();
	afx_msg void OnBnClickedRadio12();
	afx_msg void OnBnClickedButton32Ok();
	afx_msg void OnBnClickedRadio13fe();
	afx_msg void OnBnClickedRadio13Q();
	afx_msg void OnBnClickedRadio13Sdq();
	afx_msg void OnBnClickedButtonYqxz();
	afx_msg void OnBnClickedRadio15Sss();
	afx_msg void OnBnClickedRadio14Yys();
	afx_msg void OnBnClickedRadio16Lss();
	afx_msg void OnBnClickedRadio17();
	afx_msg void OnBnClickedRadio18Hnt();
	afx_msg void OnBnClickedRadio19Qian();
	afx_msg void OnBnClickedRadio205tong();
	afx_msg void OnBnClickedRadio213tong();
	afx_msg void OnBnClickedRadio222lv();
	afx_msg void OnBnClickedRadio23Tietong();
	afx_msg void OnBnClickedRadio25Lvh();
	afx_msg void OnBnClickedRadio26Q0();
	afx_msg void OnBnClickedRadio27Cx90();
	afx_msg void OnBnClickedRadio7Mrz20d();
	afx_msg void OnBnClickedRadioF();
	afx_msg void OnBnClickedRadio15F();
	afx_msg void OnBnClickedRadioLslv();
	afx_msg void OnBnClickedButtonSurvey();
	afx_msg void OnBnClickedRadio13D10();
	afx_msg void OnBnClickedRadio15Tujie();
	afx_msg void OnBnClickedRadio163mmlv();
	afx_msg void OnBnClickedRadio8Sdsr();
	afx_msg void OnBnClickedRadio16F1();
	afx_msg void OnBnClickedRadio16F2();
	afx_msg void OnBnClickedRadio9Mrz();
	afx_msg void OnBnClickedRadio10Sdsr();
	DECLARE_MESSAGE_MAP()


//创建窗类的对象
public:
	TKSS  m_TKSS;   //m_名称 ：为创建对象的方式
	YQXZ  m_YQXZ;
	//SENGM m_SHENGM;
	SSCS  m_SSCS;

public:
	std::map<int, CString> TkssValue;
	CString WindowMaterial;
	CString Voltage;
	CString H0;
	CString Hc;
	CString I;
	CString R;
	CString R0;
	CString OutAngle;
	CString anquan;
	CString B;
	int pingbi = 0;
	int machine = 0;
	CString BaMaterial;
	CString fe;
	CString Z;
	CString D10;
	CString T1;
	CString Te;
	CString Q;
	CString HVL;
	CString TVL;
	CString X;
	CString AngleQ;
	CString DoorMaterial;
	int changshu;
	CString Hl;
	CString NumDoor = L"1";
	CString JJ;
	double f;
	std::map<int, CString>Value;  // 天空散射
	std::tuple<CString, CString> m_YQXZValue;   // 仪器及电压
	CString Cfilename;
	CString Ctext;
	CString s;
	CString aw;
	CString F;
	int panduan = 0;
	int cejiao = 0;
	double num_B;
    CString F1;
	
	
public:
	//函数库
	CString OutputH0(CString Voltage,CString WindowMaterial);
	CString OutputHl(CString Voltage);
	CString OutputEn(CString Voltage);
	CString OutputTvl(CString Voltage, CString DoorMaterial);
	CString OutputHvl(CString Voltage, CString DoorMaterial);
	CString OutputQ(CString Voltage, CString AngleQ);
	CString OutputT1(CString Voltage, CString DoorMaterial);
	CString OutputTe(CString Voltage, CString DoorMaterial);
	CString OutputD10(CString Q, CString I, CString fe);
	CString By1();
	CString Xy1Q();
	CString Xy1H();
	CString By2();
	CString Outputfe(CString Cxangle, CString BaMaterial);
	CString Xy2();
	CString Bs1();
	CString Xs1();
	CString Bs2();
	CString Xs2();
	CString Bl1();
	CString Xl1();
	CString Bl2();
	CString Xl2();
	CString BT1();
	CString XT1();
	CString BT2();
	CString XT2();
	CString X2H();
	CString X2Q();
	double Outputf(CString JJ);
	CString Outputaw(CString Voltage);
	CString OutputF();
	CString OpenDlgChoseFile();

	
	void SaveFile2TXT(CString Cfilename, CString Ctext);
	void WriteLog(CString s);
	CString SignificantNum(double OriNum, int flag);
	void OnSSCSBtnEnter();
	

	afx_msg void OnBnClickedBtnShowinfo();
//	afx_msg void OnEnChangeEdit17J();
	afx_msg void OnBnClickedRadio5Mrz1t();
	afx_msg void OnBnClickedRadio6Sdsr();
//	afx_msg void OnEnChangeEdit14Sdq();
	afx_msg void OnEnKillfocusEdit14Sdq();
	afx_msg void OnEnKillfocusEdit17J();
//	afx_msg void OnEnChangeEdit1Xtxs();
};
