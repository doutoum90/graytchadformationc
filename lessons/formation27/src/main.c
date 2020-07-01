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
        IMG_Init(0) != 0,
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
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              image == NULL,
                              "Erreur de chargement de l'image dans la surface");
    SDL_Surface *image2 = IMG_Load("images/tchad.jpg");
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              image2 == NULL,
                              "Erreur de chargement de l'image dans la surface");

    // creation de la texture
    SDL_Texture *matexture = SDL_CreateTextureFromSurface(rendu, image);
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              matexture == NULL,
                              "Erreur de création de la texture");
    SDL_Texture *matexture2 = SDL_CreateTextureFromSurface(rendu, image2);
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              matexture2 == NULL,
                              "Erreur de création de la texture");
    // destruction de la surface
    SDL_FreeSurface(image);
    SDL_FreeSurface(image2);

    // chargement de la texture en memoire
    int hauteur, largeur;
    SDL_Rect rect, rect2;
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_QueryTexture(matexture, NULL, NULL, &rect.w, &rect.h) != 0,
                              "Erreur de création de la texture");
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_QueryTexture(matexture2, NULL, NULL, &rect2.w, &rect2.h) != 0,
                              "Erreur de création de la texture");

    rect.x = 0;
    rect.y = 0;
    rect2.x = (LARGEUR_FENETRE - largeur) / 2;
    rect2.y = (HAUTEUR_FENETRE - hauteur) / 2;
    rect2.h /=3;
    rect2.w /=3;

    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_RenderCopy(rendu, matexture, NULL, &rect) != 0,
                              "Erreur de création de la texture");
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_RenderCopy(rendu, matexture2, NULL, &rect2) != 0,
                              "Erreur de création de la texture");

    // destruction de la texture
    SDL_DestroyTexture(matexture);
    SDL_DestroyTexture(matexture2);
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