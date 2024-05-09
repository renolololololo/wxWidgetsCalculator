#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
	wxTextCtrl* inputField;
private:
	void OnButtonClicked(wxCommandEvent& evt);
};

