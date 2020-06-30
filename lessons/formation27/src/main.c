#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include <SDL2/SDL.h>
#define COORDONNES_X 0
#define COORDONNES_Y 0
#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600

void LoggerMessageErreur(unsigned test, const char *message);

int main()
{
    // charger le contexte
    LoggerMessageErreur(SDL_Init(SDL_INIT_VIDEO) != 0, SDL_GetError());
    // création de la fenetre

    SDL_Window *fenetre = SDL_CreateWindow("Lalekou Giray Tchad", COORDONNES_X, COORDONNES_Y, LARGEUR_FENETRE, HAUTEUR_FENETRE, SDL_WINDOW_OPENGL);
    LoggerMessageErreur(fenetre == NULL, SDL_GetError());
    bool etatDemarre = true;
    SDL_Event evenementQuitter;
    while (etatDemarre)
    {
        while (SDL_PollEvent(&evenementQuitter))
        {
            if (evenementQuitter.type == SDL_QUIT)
            {
                etatDemarre = false;
            }
        }
    }

    // destruction
    SDL_DestroyWindow(fenetre);
    //liberer les ressources
    SDL_Quit();

    return 0;
}

void LoggerMessageErreur(unsigned test, const char *message)
{
    if (test)
    {
        SDL_Log("%s", message);
        exit(EXIT_FAILURE);
    }
}