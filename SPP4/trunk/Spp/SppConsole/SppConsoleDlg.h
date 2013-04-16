#pragma once
class SppConsoleDlg
{
public:
	SppConsoleDlg(void);
	SppConsoleDlg(HINSTANCE hInstance);
	virtual ~SppConsoleDlg(void);
	void Show();
	void Hide();
	void RegisterEndEvent(HANDLE * h);
	bool MsgLoop(void);

private:
	bool TaskBarAddIcon(UINT uID, LPTSTR lpszTip);
	//DWORD WINAPI  StartDlg(LPVOID hInstance);

private:
	MSG m_msg;
	HACCEL m_hAccelTable;
	HWND m_hDlg;
	HICON m_hIcon;
	HINSTANCE m_hInstance;
	NOTIFYICONDATA m_tnid;
	HANDLE	m_hEndEvent;
	HANDLE	m_hThread;
};
