#ifndef INC_01BASICS_MAINWINDOW_H
#define INC_01BASICS_MAINWINDOW_H
#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MainWindow: public wxFrame {
public:
    MainWindow(wxWindow *parent,
               wxWindowID id,
               const wxString& title,
               const wxPoint& pos = wxDefaultPosition,
               const wxSize& size = wxDefaultSize,
               long style = wxDEFAULT_FRAME_STYLE,
               const wxString& name = wxASCII_STR(wxFrameNameStr));
    ~MainWindow();
};


#endif //INC_01BASICS_MAINWINDOW_H
