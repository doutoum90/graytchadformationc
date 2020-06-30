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
    // création de la fenetre et du container
    LoggerMessageErreur(
        SDL_CreateWindowAndRenderer(LARGEUR_FENETRE,
                                    HAUTEUR_FENETRE,
                                    SDL_WINDOW_OPENGL,
                                    &fenetre,
                                    &rendu) != 0,
        "Erreur de creation de la fenetre ou du container");

    // creation de la surface (objet contenant l'image)
    SDL_Surface *image = SDL_LoadBMP("src/gray.bmp");
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              image == NULL,
                              "Erreur chargement image");
    // creation de la texture(parent de la surface)
    SDL_Texture *texture = SDL_CreateTextureFromSurface(rendu, image);
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              texture == NULL,
                              "Erreur de la création texture en memoire");
    SDL_FreeSurface(image);
    // charger la texture en memoire
    int largeur, hauteur;
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_QueryTexture(texture,
                                               NULL,
                                               NULL,
                                               &largeur,
                                               &hauteur) != 0,
                              "Erreur chargement texture en memoire");

    // affichage de la texture
    SDL_Rect rect = {(LARGEUR_FENETRE - largeur) / 2, (HAUTEUR_FENETRE - hauteur) / 2, largeur, hauteur};
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_RenderCopy(rendu,
                                             texture,
                                             NULL,
                                             &rect) != 0,
                              "Erreur d'affichage de la texture");

    // indiquer la couleur
    /*     detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_SetRenderDrawColor(rendu,
                                                     255,
                                                     255,
                                                     255,
                                                     255) != 0,
                              "Erreur de changement de couleur pour le dessin"); */
    /* 
    SDL_Rect marectangle1 = {200, 300, 200, 100};
    SDL_Rect marectangle2 = {500, 300, 200, 100};

    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_RenderFillRect(rendu,
                                                 &marectangle1) != 0,
                              "Erreur de création du rectangle rempli");
    detruireContexteEtQuitter(fenetre,
                              rendu,
                              SDL_RenderDrawRect(rendu,
                                                 &marectangle2) != 0,
                              "Erreur de création du rectangle");
 */
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
    SDL_DestroyTexture(texture);
    detruireContexte(fenetre, rendu);
    //liberer les ressources
    SDL_Quit();

    return 0;
}