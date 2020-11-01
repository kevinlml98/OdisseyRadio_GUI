#include "pch.h"
#include "Player_GUI.h"
#include "cvclibrary.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
//array<System::String^>^ args
int main() {

    CVCLibrary libreria;

    libreria.insertNode();
    libreria.insertNode();
    libreria.insertNode();
    libreria.insertNode();

    libreria.findNode(2);

    /*
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    OdisseyRadioGUI::Player_GUI form;
    Application::Run(% form);
    */
    return 0;
}

