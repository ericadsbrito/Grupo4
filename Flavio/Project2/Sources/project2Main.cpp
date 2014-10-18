/***************************************************************
 * Name:      project2Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    FLAVIO HENRIQUE ()
 * Created:   2014-10-18
 * Copyright: FLAVIO HENRIQUE ()
 * License:
 **************************************************************/

#include "project2Main.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(project2Frame)
#include <wx/settings.h>
#include <wx/font.h>
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

//(*IdInit(project2Frame)
const long project2Frame::ID_TEXTCTRL1 = wxNewId();
const long project2Frame::ID_TEXTCTRL2 = wxNewId();
const long project2Frame::ID_TEXTCTRL3 = wxNewId();
const long project2Frame::ID_BUTTON1 = wxNewId();
const long project2Frame::ID_TEXTCTRL4 = wxNewId();
const long project2Frame::ID_TEXTCTRL5 = wxNewId();
const long project2Frame::ID_TEXTCTRL6 = wxNewId();
const long project2Frame::ID_STATICTEXT1 = wxNewId();
const long project2Frame::ID_STATICTEXT2 = wxNewId();
const long project2Frame::ID_STATICTEXT3 = wxNewId();
const long project2Frame::ID_STATICTEXT4 = wxNewId();
const long project2Frame::ID_STATICTEXT5 = wxNewId();
const long project2Frame::ID_STATICTEXT6 = wxNewId();
const long project2Frame::ID_STATICTEXT7 = wxNewId();
const long project2Frame::idMenuQuit = wxNewId();
const long project2Frame::idMenuAbout = wxNewId();
const long project2Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(project2Frame,wxFrame)
    //(*EventTable(project2Frame)
    //*)
END_EVENT_TABLE()

project2Frame::project2Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(project2Frame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(490,450));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNFACE));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(56,232), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(56,328), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(336,160), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Calcular"), wxPoint(208,272), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    TextCtrl4 = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxPoint(336,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl5 = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxPoint(336,296), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl6 = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxPoint(336,360), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("CALCULADORA BASICA"), wxPoint(144,48), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Calibri"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Soma"), wxPoint(368,136), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Subtração"), wxPoint(360,208), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Multiplicação"), wxPoint(352,272), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Divisão"), wxPoint(368,336), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Digite o primeiro valor"), wxPoint(56,200), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Digite o segundo valor"), wxPoint(56,304), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
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

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&project2Frame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&project2Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&project2Frame::OnAbout);
    //*)
}

project2Frame::~project2Frame()
{
    //(*Destroy(project2Frame)
    //*)
}

void project2Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void project2Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void project2Frame::OnButton1Click(wxCommandEvent& event)
{
    long x=0, y=0;
    wxString res1=wxT("");
    wxString res2=wxT("");
    wxString res3=wxT("");
    wxString res4=wxT("");
    if(TextCtrl1->GetValue().ToLong((&x)) and TextCtrl2->GetValue().ToLong((&y)))
    {
        res1 << x+y;
        TextCtrl3 ->SetValue(res1);

        res2 << x-y;
        TextCtrl4 ->SetValue(res2);

        res3 << x*y;
        TextCtrl5 ->SetValue(res3);

        res4 << x/y;
        TextCtrl6 ->SetValue(res4);
    }

    else wxMessageBox((wxT("There is an error!")));

}
