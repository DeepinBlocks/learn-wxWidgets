#ifndef INC_01BASICS_APP_H
#define INC_01BASICS_APP_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif


class App: public wxApp{
public:
    App();
    ~App();

    bool OnInit();
};

DECLARE_APP(App); // wxGetApp();

#endif //INC_01BASICS_APP_H
