#include <SDL.h>
#include <string>
#ifndef klasy_h
#define klasy_h

class Postac
{
private :
    SDL_Rect wlasciwosci ;
    int animacja ;
    int kierunek  ;
    SDL_Surface* obraz ;
public :
    void zaladuj (std::string) ;
    bool poruszanie (int) ;
    void wyswietlanie (SDL_Surface*, SDL_Window*);
    void wypisz (bool) ;
};

class mapa
{
private:
    int rozmiarx ;
    int rozmiary ;
    SDL_Surface* tlo ;
public :
    void zaladuj (std::string) ;
    void wyswietlanie (SDL_Surface*, SDL_Window*);
};

#endif
