#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "utilitaire.h"

int main(int argc, char **argv)
{
    SDL_Window *fenetre = NULL;
    SDL_Renderer *rendu = NULL;
    TTF_Font *police = NULL;
    SDL_Surface *image1Surface = NULL, *image2Surface = NULL, *texteSurface = NULL;
    SDL_Texture *matexture = NULL, *matexture2 = NULL, *matexture3 = NULL;
    int hauteur, largeur, hauteur2, largeur2, hauteur3, largeur3;

    // charger le contexte : SDL
    LoggerMessageErreur(
        SDL_Init(SDL_INIT_VIDEO) != 0,
        "Erreur de chargement de contexte");
    // charger le contexte : SDL_TTF
    LoggerMessageErreur(
        TTF_Init() != 0,
        "Erreur de chargement de la bibliotheque TTF ");
    // charger le contexte : SDL_IMG
    LoggerMessageErreur(
        IMG_Init(0) != 0,
        "Erreur de chargement de la bibliotheque Image");
    // création de la fenetre et du renderer
    LoggerMessageErreur(
        SDL_CreateWindowAndRenderer(LARGEUR_FENETRE,
                                    HAUTEUR_FENETRE,
                                    SDL_WINDOW_OPENGL,
                                    &fenetre,
                                    &rendu) != 0,
        "Erreur de creation de la fenetre ou du container");
    // creation de la surface
    image1Surface = IMG_Load("assets/gray.jpeg");
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        image1Surface == NULL,
        "Erreur de chargement de l'image dans la surface");
    image2Surface = IMG_Load("assets/tchad.jpg");
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        image2Surface == NULL,
        "Erreur de chargement de l'image dans la surface");
    police = TTF_OpenFont("police/angelina.TTF", 354);
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        police == NULL,
        "Erreur de chargement de la police");
    SDL_Color couleurBlanche = {0, 255, 0};
    TTF_SetFontStyle(police, TTF_STYLE_ITALIC | TTF_STYLE_UNDERLINE);
    texteSurface = TTF_RenderText_Solid(police, "Lalekou Gray Tchad", couleurBlanche);
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        texteSurface == NULL,
        "Erreur de chargement de la police dans la surface");

    // creation de la texture
    matexture = SDL_CreateTextureFromSurface(rendu, image1Surface);
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        matexture == NULL,
        "Erreur de création de la texture");
    matexture2 = SDL_CreateTextureFromSurface(rendu, image2Surface);
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        matexture2 == NULL,
        "Erreur de création de la texture");
    matexture3 = SDL_CreateTextureFromSurface(rendu, texteSurface);
    largeur3 = texteSurface->w;
    hauteur3 = texteSurface->h;
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        matexture3 == NULL,
        "Erreur de création de la texture");
    // destruction de la surface
    SDL_FreeSurface(image1Surface);
    SDL_FreeSurface(image2Surface);
    SDL_FreeSurface(texteSurface);

    // chargement de la texture en memoire
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        SDL_QueryTexture(matexture, NULL, NULL, &largeur, &hauteur) != 0,
        "Erreur de création de la texture");
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        SDL_QueryTexture(matexture2, NULL, NULL, &largeur2, &hauteur2) != 0,
        "Erreur de création de la texture");
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        SDL_QueryTexture(matexture3, NULL, NULL, &largeur3, &largeur3) != 0,
        "Erreur de création de la texture");
    // affichage des textures
    SDL_Rect rect = {0, 0, largeur, hauteur};
    SDL_Rect rect2 = {(LARGEUR_FENETRE - largeur), 0, largeur, hauteur};
    SDL_Rect rect3 = {(LARGEUR_FENETRE - largeur), (HAUTEUR_FENETRE - hauteur3), largeur3, hauteur3};
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        SDL_RenderCopy(rendu, matexture, NULL, &rect) != 0,
        "Erreur de création de la texture");
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        SDL_RenderCopy(rendu, matexture2, NULL, &rect2) != 0,
        "Erreur de création de la texture");
    detruireContexteEtQuitter(
        fenetre,
        rendu,
        SDL_RenderCopy(rendu, matexture3, NULL, &rect3) != 0,
        "Erreur de création de la texture");

    // destruction de la texture
    SDL_DestroyTexture(matexture);
    SDL_DestroyTexture(matexture2);
    SDL_DestroyTexture(matexture3);
    SDL_RenderPresent(rendu);
    bool etatDemarre = true;
    SDL_Event evenement;
    while (etatDemarre)
    {
        while (SDL_PollEvent(&evenement))
        {
            switch (evenement.type)
            {
            case SDL_QUIT:
            {
                etatDemarre = false;
                break;
            }
            case SDL_KEYDOWN:
            {
                if (evenement.key.keysym.scancode == SDLK_a)
                    printf("Vous avez appuyé sur A");
                break;
            }
            case SDL_KEYUP:
            {
                if (evenement.key.keysym.scancode == SDLK_a)
                    printf("Vous avez relaché A");
                break;
            }
            case SDL_WINDOWEVENT:
            {
                if (evenement.window.event == SDL_WINDOWEVENT_LEAVE)
                    printf("la souris est en dehors");
                if (evenement.window.event == SDL_WINDOWEVENT_ENTER)
                    printf("la souris est en dedans");

                break;
            }
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