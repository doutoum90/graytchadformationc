#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "utilitaire.h"
int main()
{
    SDL_Window *fenetre = NULL;
    SDL_Renderer *rendu = NULL;
    // charger le contexte
    LoggerMessageErreur(
        SDL_Init(SDL_INIT_VIDEO) != 0,
        "Erreur de chargement de contexte");
    LoggerMessageErreur(
        IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG) != 0,
        "Erreur de chargement de la bibliotheque Image");
    // création de la fenetre et du container
    LoggerMessageErreur(
        SDL_CreateWindowAndRenderer(LARGEUR_FENETRE,
                                    HAUTEUR_FENETRE,
                                    SDL_WINDOW_OPENGL,
                                    &fenetre,
                                    &rendu) != 0,
        "Erreur de creation de la fenetre ou du container");

    // creattion de la surface
    SDL_Surface *image = IMG_Load("images/gray.jpeg");
    /* SDL_Surface *image = SDL_LoadBMP("images/gray.bmp");*/
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              image == NULL,
                              "Erreur de chargement de l'image dans la surface");

    // creation de la texture
    SDL_Texture *matexture = SDL_CreateTextureFromSurface(rendu, image);
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              matexture == NULL,
                              "Erreur de création de la texture");
    // destruction de la surface
    SDL_FreeSurface(image);

    // chargement de la texture en memoire
    int hauteur, largeur;
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_QueryTexture(matexture, NULL, NULL, &largeur, &hauteur) != 0,
                              "Erreur de création de la texture");

    SDL_Rect rect = {(LARGEUR_FENETRE - largeur) / 2, (HAUTEUR_FENETRE - hauteur) / 2, largeur, hauteur};

    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_RenderCopy(rendu, matexture, NULL, &rect) != 0,
                              "Erreur de création de la texture");

    // destruction de la texture
    SDL_DestroyTexture(matexture);
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

    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_RenderClear(rendu) != 0,
                              "Erreur de netoyage du container");
    detruireContexte(fenetre, rendu);
    //liberer les ressources
    SDL_Quit();
    IMG_Quit();

    return 0;
}