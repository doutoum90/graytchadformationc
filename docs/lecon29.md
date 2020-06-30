# Leçon C 29

## Dessiner dans notre fenêtre

[Création de rendu](https://wiki.libsdl.org/SDL_CreateRenderer)

``` c
SDL_Renderer* SDL_CreateRenderer(SDL_Window* window, int index, Uint32 flags);
 ```

[destruction du rendu](https://wiki.libsdl.org/SDL_DestroyRenderer)

``` c
void SDL_DestroyRenderer(SDL_Renderer* renderer);
```

[mettre à jour la fenêtre](https://wiki.libsdl.org/SDL_RenderPresent)

``` c
void SDL_RenderPresent(SDL_Renderer* renderer)
```

[supprimer le rendu de la fenetre](https://wiki.libsdl.org/SDL_RenderClear)

``` c
int SDL_RenderClear(SDL_Renderer* renderer)
```

[dessiner dans un rendu](https://wiki.libsdl.org/SDL_SetRenderDrawColor)

``` c
int SDL_SetRenderDrawColor(SDL_Renderer* renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
 ```

[Création fenetre et rendu en une fois](https://wiki.libsdl.org/SDL_CreateWindowAndRenderer)

``` c
int SDL_CreateWindowAndRenderer(int width,int height, Uint32 window_flags, SDL_Window** window, SDL_Renderer** renderer);
```
