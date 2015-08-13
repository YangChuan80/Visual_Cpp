// CurveDoc.h : interface of the CCurveDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CURVEDOC_H__459AEEF1_39AA_4192_893E_4220E4A87907__INCLUDED_)
#define AFX_CURVEDOC_H__459AEEF1_39AA_4192_893E_4220E4A87907__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCurveDoc : public CDocument
{
protected: // create from serialization only
	CCurveDoc();
	DECLARE_DYNCREATE(CCurveDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCurveDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCurveDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCurveDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CURVEDOC_H__459AEEF1_39AA_4192_893E_4220E4A87907__INCLUDED_)
