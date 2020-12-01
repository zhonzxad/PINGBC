/*****************************************************************************/
//Class Name:		CharStatic
//Author:			pbeak
//Version:			1.0 
//Function:			Set the chars in a string to be up or down
//Copyright:		Copyright(c) 2011-2012 pbreak.All Rights Reserved
//Date:				2011.4.31
/*****************************************************************************/

#if !defined(AFX_CHARSTATIC_H__247FE33E_0603_40FA_915D_55525AB509B8__INCLUDED_)
#define AFX_CHARSTATIC_H__247FE33E_0603_40FA_915D_55525AB509B8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CharStatic.h : header file
//
#pragma warning(disable : 4786)
#include <iostream>
using namespace std;
#include <map>

/////////////////////////////////////////////////////////////////////////////
// CCharStatic window
class CCharStatic : public CStatic
{
// Construction
public:
	CCharStatic();
	void AddSingleChar(int pos,UINT nFormat);
	void SetFontSize(UINT fontSize);
// Attributes
public:

// Operations
public:

private:
	map<int,UINT> m_singleChar; //a map to store the infomation of char to be uo an down
	UINT m_fontSize;			//font size of the text
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCharStatic)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCharStatic();

	// Generated message map functions
protected:
	//{{AFX_MSG(CCharStatic)
	afx_msg void OnPaint();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()

public:
	CString textVal;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHARSTATIC_H__247FE33E_0603_40FA_915D_55525AB509B8__INCLUDED_)
