
// TestMFCDlg.h : header file
//

#pragma once
#include <WebView2.h>
#include <wrl.h> 
#include <wrl/client.h> // For Microsoft::WRL::ComPtr
#include <wil/com.h>
#include <functional>
 
// CTestMFCDlg dialog
class CTestMFCDlg : public CDialogEx
{
// Construction
public:
	CTestMFCDlg(CWnd* pParent = nullptr);	// standard constructor
	CButton m_btnURL;
	CEdit m_editURL;
// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	CString m_url;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	void initWebView();


	
public:
	afx_msg void OnBnClickedButtonUrl();
	
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
