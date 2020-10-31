#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <string>

#pragma comment(lib, "winmm.lib")

using namespace std;


class WavPlayer {
private:
    wstring default_sound = L"manowar.wav";


public:

    WavPlayer() {


    }

    void playMusic(wstring cancion) {

        LPCTSTR wcancion = cancion.c_str();
        PlaySound(wcancion, NULL, SND_FILENAME | SND_ASYNC);

    }

    void stopMusic() {
        PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);

    }



};
