#if !defined(AFX_COPYRIGHT_H__805ED2F1_7775_482C_8436_95AAD3770B4C__INCLUDED_)
#define AFX_COPYRIGHT_H__805ED2F1_7775_482C_8436_95AAD3770B4C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Copyright.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCopyright dialog

class CCopyright : public CDialog
{
// Construction
public:
	CCopyright(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCopyright)
	enum { IDD = IDD_ABOUTBOX1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCopyright)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCopyright)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COPYRIGHT_H__805ED2F1_7775_482C_8436_95AAD3770B4C__INCLUDED_)
