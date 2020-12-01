// CharStatic.cpp : implementation file
//

//#include "stdafx.h"
#include "pch.h"
#include "CharStatic.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCharStatic

CCharStatic::CCharStatic()
{
	m_fontSize = 100;
}

CCharStatic::~CCharStatic()
{
}


BEGIN_MESSAGE_MAP(CCharStatic, CStatic)
	//{{AFX_MSG_MAP(CCharStatic)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCharStatic message handlers

void CCharStatic::AddSingleChar(int pos,UINT nFormat)
{
	m_singleChar[pos] = nFormat;
	// ÖØ»æ´°¿Ú
	Invalidate(FALSE);
	OnPaint();
}

void CCharStatic::SetFontSize(UINT fontSize)
{
	m_fontSize = fontSize;
	Invalidate(FALSE);
}

void CCharStatic::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	dc.SetBkMode(TRANSPARENT);
	CRect rect;
	GetWindowRect(&rect); //get the size of the control
	int xCharPos = 0;
	int yCharPos = 0;
	CSize fontSize;
	CFont *oldFont = NULL;
	CFont newFontNormal;
	newFontNormal.CreatePointFont(m_fontSize,_T(""),NULL);
	CFont newFontSpecial;
	newFontSpecial.CreatePointFont(m_fontSize - 10,_T(""),NULL);
	
	GetWindowText(textVal); //get the text of the control
	CString charText;
	int charPosition = 0;

	for (int i = 0; i < textVal.GetLength(); ++i)
	{
		//get the english char
		if (textVal.GetAt(i) > 33 && textVal.GetAt(i) < 127)
		{
			charText = textVal.GetAt(i);
			++charPosition;
		}
		else
		{
			//chinese char
			charText.Format(_T("%c%c"),textVal.GetAt(i),textVal.GetAt(i+1));
			++i;
			++charPosition;
		}
		map<int,UINT>::iterator it = m_singleChar.find(charPosition);
		if (it != m_singleChar.end())
		{
			oldFont = dc.SelectObject(&newFontSpecial);
			fontSize = dc.GetTextExtent(charText);
			dc.DrawText(charText,
				CRect(xCharPos,yCharPos + (it->second - 2),rect.Width(),rect.Height()),
				it->second);
			xCharPos += fontSize.cx;
			if (xCharPos > (rect.Width() - fontSize.cx - 3))
			{
				xCharPos = 0;
				yCharPos += fontSize.cy;
			}
			dc.SelectObject(oldFont);
		}
		else
		{
			oldFont = dc.SelectObject(&newFontNormal);
			fontSize = dc.GetTextExtent(charText);
			dc.DrawText(charText,
				CRect(xCharPos,yCharPos,rect.Width(),rect.Height()),
				DT_LEFT);
			xCharPos += fontSize.cx;
			if (xCharPos > (rect.Width() - fontSize.cx - 3))
			{
				xCharPos = 0;
				yCharPos += (fontSize.cy + 2);
			}
			dc.SelectObject(oldFont);
		}
	}
	// Do not call CStatic::OnPaint() for painting messages
}
