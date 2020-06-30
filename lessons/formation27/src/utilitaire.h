#ifndef __UTILITAIRE__H__
#define __UTILITAIRE__H__

#define COORDONNES_X 0
#define COORDONNES_Y 0
#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600
#define LoggerMessageErreur(test, message) \
    {                                      \
        if (test)                          \
        {                                  \
            SDL_Log("%s", message);        \
            exit(EXIT_FAILURE);            \
        }                                  \
    }

#endif