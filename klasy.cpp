#include <SDL.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include "klasy.h"

void Postac::zaladuj (std::string nazwapliku)
{
    obraz = SDL_LoadBMP (nazwapliku.c_str()) ;
    wlasciwosci.x = 0 ;
    wlasciwosci.y = 0 ;
}
void Postac::wyswietlanie (SDL_Surface* tlo , SDL_Window* window)
{
    SDL_BlitSurface (obraz, NULL, tlo, &wlasciwosci) ;

}
bool Postac::poruszanie (int wyjsciowa)
{
    switch (wyjsciowa)
    {
    case 1 :
        wlasciwosci.y -=  3;
        return true ;
        break ;
    case 2 :
        wlasciwosci.x -=  3;
        return true ;
        break ;
    case 3 :
        wlasciwosci.y +=  3;
        return true ;
        break;
    case 4 :
        wlasciwosci.x +=  3;
        return true ;
        break ;
    }
    return false ;
}
void Postac::wypisz (bool a)
{
    if (a)
    {
        system("cls") ;
        std::cout << "x: " << wlasciwosci.x << "\t" ;
        std::cout << "y: " << wlasciwosci.y << "\n" ;
    }


}
void mapa::zaladuj(std::string nazwapliku)
{
    rozmiarx = 1280 ;
    rozmiary = 780 ;
    tlo = SDL_LoadBMP (nazwapliku.c_str()) ;
}
void mapa::wyswietlanie (SDL_Surface* bufor , SDL_Window* window)
{
    SDL_BlitSurface (tlo, NULL, bufor, NULL) ;
}
