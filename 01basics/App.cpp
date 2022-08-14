#include "App.h"
#include "id.h"
#include "MainWindow.h"

IMPLEMENT_APP(App) // main

App::App() {

}

App::~App() {

}

bool App::OnInit() {
    if (!wxApp::OnInit()) {
        return false;
    }

    MainWindow* pw = new MainWindow(nullptr, window::id::MAINWINDOW, _("MainWindow"));
    pw->Show();

    return true;
}
