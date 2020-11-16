#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <string>
#include <msclr\marshal.h>

#pragma comment(lib, "winmm.lib")

using namespace System;
using namespace System::IO;
using namespace msclr::interop;

ref class WavPlayer {
    


public:

    WavPlayer() {


    }

    ~WavPlayer() {

    }

    void playMusic(String^ track) {

        marshal_context context;
        LPCTSTR wtrack = context.marshal_as<const TCHAR*>(track);

        PlaySound(wtrack, NULL, SND_FILENAME | SND_ASYNC);


    }

    void stopMusic() {
        PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);

    }



};
