#include <SDL.h>
#include <iostream>
#include <cstdlib>
#include "funkcja.h"
#include "klasy.h"

int wylosuj (int a , int b)
{
    int zwracana = (rand () % (b-a +1) ) + a ;
    return zwracana ;
}
void Wyjdz_z_SDL ()
{
    SDL_Quit ();
}
SDL_Window* init_1()
{
        SDL_Window* a = SDL_CreateWindow("Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,1280, 780, SDL_WINDOW_SHOWN) ;
        return a ;
}
SDL_Surface* init_2 (SDL_Window* ha)
{
    SDL_Surface* a = SDL_GetWindowSurface(ha) ;
    return a ;
}
int puluj_wydarzenia (SDL_Event e)
{
        enum KeyPressSurfaces
    {
        PRZYCISK_DOMYSLNIE,
        PRZYCISK_ESC = 9 ,
        PRZYCISK_W = 1,
        PRZYCISK_A,
        PRZYCISK_S,
        PRZYCISK_D
    };

    while (SDL_PollEvent( &e ) != 0 )
    {
        if (e.type == SDL_QUIT)
            return 9 ;
        if (e.type == SDL_KEYDOWN)
        {
            switch (e.key.keysym.sym)
            {
            case SDLK_ESCAPE :
                return 9;
                break ;
            case SDLK_w :
                return PRZYCISK_W ;
                break ;
            case SDLK_a :
                return PRZYCISK_A ;
                break ;
            case SDLK_s :
                return PRZYCISK_S ;
                break ;
            case SDLK_d :
                return PRZYCISK_D ;
                break ;
            }
        }
    }
}
