#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include <SDL2/SDL.h>

#include "utilitaire.h"
int main()
{
    SDL_Window *fenetre = NULL;
    SDL_Renderer *rendu = NULL;
    // charger le contexte
    LoggerMessageErreur(SDL_Init(SDL_INIT_VIDEO) != 0, SDL_GetError());
    /*  // création de la fenetre
    fenetre = SDL_CreateWindow("Lalekou Giray Tchad", COORDONNES_X, COORDONNES_Y, LARGEUR_FENETRE, HAUTEUR_FENETRE, SDL_WINDOW_OPENGL);
    LoggerMessageErreur(fenetre == NULL, SDL_GetError());

    // création du container
    rendu = SDL_CreateRenderer(fenetre, -1, SDL_RENDERER_SOFTWARE);
    LoggerMessageErreur(rendu == NULL, SDL_GetError()); */
    // création de la fenetre et du container
    LoggerMessageErreur(
        SDL_CreateWindowAndRenderer(LARGEUR_FENETRE, 
            HAUTEUR_FENETRE, 
            SDL_WINDOW_OPENGL, 
            &fenetre, 
            &rendu) != 0,
        SDL_GetError());

    // indiquer la couleur
    LoggerMessageErreur(
        SDL_SetRenderDrawColor(rendu, 
        255, 
        255, 
        255, 
        255) != 0, 
        SDL_GetError());

    SDL_Rect marectangle1;
    marectangle1.h = 100;
    marectangle1.w = 200;
    marectangle1.x = 200;
    marectangle1.y = 300;
    SDL_Rect marectangle2;
    marectangle2.h = 100;
    marectangle2.w = 200;
    marectangle2.x = 500;
    marectangle2.y = 200;
    // dessiner un rectangle
    LoggerMessageErreur(SDL_RenderFillRect(rendu, &marectangle1) != 0, SDL_GetError());
    LoggerMessageErreur(SDL_RenderDrawRect(rendu, &marectangle2) != 0, SDL_GetError());

    SDL_RenderPresent(rendu);
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
    LoggerMessageErreur(SDL_RenderClear(rendu) != 0, SDL_GetError());
    // destruction du container
    SDL_DestroyRenderer(rendu);
    // destruction de la fenêtre
    SDL_DestroyWindow(fenetre);
    //liberer les ressources
    SDL_Quit();

    return 0;
}