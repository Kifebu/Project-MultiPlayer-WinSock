#include <SDL.h>
#include <winsock2.h>
#include <windows.h>
#include "klasy.h"
#include "funkcja.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main( int argc, char* args[] )
{
    srand (time(NULL)) ;

    SDL_Window* gWindow = init_1 () ;
    SDL_Surface* gScreen = init_2 (gWindow) ;
    //SDL_Surface* Picture = SDL_LoadBMP ("obraz.bmp") ;
    SDL_Event Wydarzenia ;
    int wyjscie = false ;
    bool poruszenie = true ;
    Postac x1 ;
    mapa tlo1 ;
    tlo1.zaladuj("tlo.bmp") ;
    x1.zaladuj("obraz.bmp") ;

    while (wyjscie != 9)
    {
        wyjscie = puluj_wydarzenia( Wydarzenia ) ;
        tlo1.wyswietlanie(gScreen, gWindow) ;
        x1.wyswietlanie(gScreen, gWindow);
        poruszenie = x1.poruszanie (wyjscie) ;
        x1.wypisz (poruszenie) ;
        SDL_UpdateWindowSurface(gWindow) ;
        poruszenie = false ;
    }

    Wyjdz_z_SDL () ;

    return 0 ;
}
