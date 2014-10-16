/***************************************************************
 * Name:      TESTMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    FLAVIO HENRIQUE ()
 * Created:   2014-10-16
 * Copyright: FLAVIO HENRIQUE ()
 * License:
 **************************************************************/

#include "TESTMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(TESTFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(TESTFrame)
const long TESTFrame::ID_TEXTCTRL1 = wxNewId();
const long TESTFrame::ID_TEXTCTRL2 = wxNewId();
const long TESTFrame::ID_STATICTEXT1 = wxNewId();
const long TESTFrame::ID_STATICTEXT2 = wxNewId();
const long TESTFrame::ID_TEXTCTRL3 = wxNewId();
const long TESTFrame::ID_STATICTEXT3 = wxNewId();
const long TESTFrame::ID_BUTTON1 = wxNewId();
const long TESTFrame::ID_MENUITEM1 = wxNewId();
const long TESTFrame::idMenuAbout = wxNewId();
const long TESTFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TESTFrame,wxFrame)
    //(*EventTable(TESTFrame)
    //*)
END_EVENT_TABLE()

TESTFrame::TESTFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(TESTFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(400,272));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("34"), wxPoint(128,48), wxSize(144,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("21"), wxPoint(128,96), wxSize(144,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("X ="), wxPoint(56,48), wxSize(24,16), 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Y ="), wxPoint(56,96), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(128,200), wxSize(144,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("X+Y="), wxPoint(56,208), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Addition"), wxPoint(152,144), wxSize(96,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TESTFrame::OnButton1Click);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TESTFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TESTFrame::OnAbout);
    //*)
}

TESTFrame::~TESTFrame()
{
    //(*Destroy(TESTFrame)
    //*)
}

void TESTFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void TESTFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void TESTFrame::OnButton1Click(wxCommandEvent& event)
{
    long x=0, y=0;
    wxString res=wxT("");
    if(TextCtrl1->GetValue().ToLong((&x)) and TextCtrl2->GetValue().ToLong((&y)))
    {
        res << x+y;
        TextCtrl3 -> SetValue(res);
    }
    else wxMessageBox((wxT("There is an error!")));
}
