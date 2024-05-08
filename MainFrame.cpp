#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title)
	: wxFrame(nullptr, wxID_ANY, title)
{

	wxPanel* panel = new wxPanel(this);

	wxTextCtrl* inputField = new wxTextCtrl(panel, wxID_ANY, "", wxDefaultPosition, wxSize(0, 100));
	wxFont font(30, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	inputField->SetFont(font);



	wxButton* clearButton = new wxButton(panel, wxID_ANY, "C", wxDefaultPosition, wxSize(50, 50));
	wxButton* divideButton = new wxButton(panel, wxID_ANY, "/", wxDefaultPosition, wxSize(50, 50));
	wxButton* multiplyButton = new wxButton(panel, wxID_ANY, "*", wxDefaultPosition, wxSize(50, 50));

	wxButton* minusButton = new wxButton(panel, wxID_ANY, "-", wxDefaultPosition, wxSize(50, 50));
	wxButton* plusButton = new wxButton(panel, wxID_ANY, "+", wxDefaultPosition, wxSize(50, 50));
	minusButton->SetOwnFont(wxFont(30, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
	plusButton->SetOwnFont(wxFont(30, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));

	wxButton* equalButton = new wxButton(panel, wxID_ANY, "=", wxDefaultPosition, wxSize(50, 50));
	wxButton* dotButton = new wxButton(panel, wxID_ANY, ".", wxDefaultPosition, wxSize(50, 50));


	wxButton* button1 = new wxButton(panel, wxID_ANY, "1", wxDefaultPosition, wxSize(50, 50));
	wxButton* button2 = new wxButton(panel, wxID_ANY, "2", wxDefaultPosition, wxSize(50, 50));
	wxButton* button3 = new wxButton(panel, wxID_ANY, "3", wxDefaultPosition, wxSize(50, 50));
	wxButton* button4 = new wxButton(panel, wxID_ANY, "4", wxDefaultPosition, wxSize(50, 50));
	wxButton* button5 = new wxButton(panel, wxID_ANY, "5", wxDefaultPosition, wxSize(50, 50));
	wxButton* button6 = new wxButton(panel, wxID_ANY, "6", wxDefaultPosition, wxSize(50, 50));
	wxButton* button7 = new wxButton(panel, wxID_ANY, "7", wxDefaultPosition, wxSize(50, 50));
	wxButton* button8 = new wxButton(panel, wxID_ANY, "8", wxDefaultPosition, wxSize(50, 50));
	wxButton* button9 = new wxButton(panel, wxID_ANY, "9", wxDefaultPosition, wxSize(50, 50));
	wxButton* button0 = new wxButton(panel, wxID_ANY, "0", wxDefaultPosition, wxSize(50, 50));



	wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
	mainSizer->Add(inputField, wxSizerFlags().Expand());

	wxBoxSizer* numpadSizer = new wxBoxSizer(wxHORIZONTAL);

	wxGridSizer* gridSizer = new wxGridSizer(5, 3, wxSize(0, 0));
	wxSizerFlags gridFlags = wxSizerFlags().Expand();

	gridSizer->Add(clearButton, gridFlags);
	gridSizer->Add(divideButton, gridFlags);
	gridSizer->Add(multiplyButton, gridFlags);
	gridSizer->Add(button7, gridFlags);
	gridSizer->Add(button8, gridFlags);
	gridSizer->Add(button9, gridFlags);
	gridSizer->Add(button4, gridFlags);
	gridSizer->Add(button5, gridFlags);
	gridSizer->Add(button6, gridFlags);
	gridSizer->Add(button1, gridFlags);
	gridSizer->Add(button2, gridFlags);
	gridSizer->Add(button3, gridFlags);
	gridSizer->Add(button0, gridFlags);
	gridSizer->Add(dotButton, gridFlags);
	gridSizer->Add(equalButton, gridFlags);


	wxFont numpadFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	for (size_t i = 0; i < gridSizer->GetItemCount(); ++i) {
		wxSizerItem* item = gridSizer->GetItem(i);
		wxWindow* widget = item->GetWindow();
		if (widget) {
			widget->SetFont(numpadFont);
		}
	}

	wxBoxSizer* rightSizer = new wxBoxSizer(wxVERTICAL);
	rightSizer->Add(minusButton, wxSizerFlags().Expand().Proportion(1));
	rightSizer->Add(plusButton, wxSizerFlags().Expand().Proportion(1));

	numpadSizer->Add(gridSizer, wxSizerFlags().Expand().Proportion(2));
	numpadSizer->Add(rightSizer, wxSizerFlags().Expand().Proportion(1));
	mainSizer->Add(numpadSizer, wxSizerFlags().Expand().Proportion(1));



	panel->SetSizer(mainSizer);
	mainSizer->SetSizeHints(this);

}