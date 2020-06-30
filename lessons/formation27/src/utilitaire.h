#ifndef __UTILITAIRE__H__
#define __UTILITAIRE__H__
#include <SDL2/SDL.h>
#define COORDONNES_X 0
#define COORDONNES_Y 0
#define LARGEUR_FENETRE 1280
#define HAUTEUR_FENETRE 780
#define LoggerMessageErreur(test, message)                     \
    {                                                          \
        if (test)                                              \
        {                                                      \
            SDL_Log("%s cause : %s", message, SDL_GetError()); \
            exit(EXIT_FAILURE);                                \
        }                                                      \
    }

void detruireContexte(SDL_Window *fenetre, SDL_Renderer *rendu);
void detruireContexteEtQuitter(SDL_Window *fenetre, SDL_Renderer *rendu, unsigned cond, char *message);
#endif