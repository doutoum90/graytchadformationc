# Leçon C 30

## Afficher notre premiere image

[Chargement de l'image](https://wiki.libsdl.org/SDL_LoadBMP)

``` c
SDL_Surface* SDL_LoadBMP(const char* file)
```

[liberation de l'image](https://wiki.libsdl.org/SDL_FreeSurface)

``` c
void SDL_FreeSurface(SDL_Surface* surface);
```

[Création d'une texture](https://wiki.libsdl.org/SDL_CreateTextureFromSurface)

``` c
SDL_Texture* SDL_CreateTextureFromSurface(SDL_Renderer* renderer,SDL_Surface*  surface);
 ```

 [Destruction d'une texture]()

``` c
void SDL_DestroyTexture(SDL_Texture* texture);
```

[chargement en memoire](https://wiki.libsdl.org/SDL_QueryTexture)

``` c
int SDL_QueryTexture(SDL_Texture* texture, Uint32* format, int* access, int*  w, int* h);
```

[afficher la copie de Texture qui contient l'image](https://wiki.libsdl.org/SDL_RenderCopy)

``` c
int SDL_RenderCopy(SDL_Renderer* renderer,SDL_Texture* texture, const SDL_Rect* srcrect, const SDL_Rect* dstrect)
 ```
