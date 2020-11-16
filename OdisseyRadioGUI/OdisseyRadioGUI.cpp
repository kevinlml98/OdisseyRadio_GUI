#include "pch.h"
#include "Player_GUI.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]
//
int main(array<System::String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    OdisseyRadioGUI::Player_GUI form;
    Application::Run(% form);
    
    return 0;
}

