#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <string>
#include <msclr\marshal.h>

#pragma comment(lib, "winmm.lib")

using namespace System;
using namespace System::IO;
using namespace msclr::interop;

/// <summary>
/// Funciona como reproductor de musica. Tiene la habilidad de reproducir y detener las canciones que sean seleccionadas
/// </summary>
ref class WavPlayer {
    


public:

    WavPlayer() {


    }

    ~WavPlayer() {

    }

    /// <summary>
    /// Reproduce la cancion seleccionada
    /// </summary>
    /// <param name="track">Cancion a reproducir</param>
    void playMusic(String^ track) {

        marshal_context context;
        LPCTSTR wtrack = context.marshal_as<const TCHAR*>(track);

        PlaySound(wtrack, NULL, SND_FILENAME | SND_ASYNC);


    }

    /// <summary>
    /// Detiene la cancion que esta siendo reproducida
    /// </summary>
    void stopMusic() {
        PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);

    }



};
