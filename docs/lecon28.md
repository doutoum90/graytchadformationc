# Leçon C 28
## Premiere fenêtre

[Initialisation](https://wiki.libsdl.org/SDL_Init)
``` c
int SDL_Init(Uint32 flags)
/**
Initialise la library
retourne
- 0 s'il arrive à initialiser le programme
- Un nombre negatif si erreur et (les details de l'erreur sont dispo si on appel la fonction SDL_GetError)
*/
int SDL_InitSubSystem(Uint32 flags);
// Il est possible d'utiliser la fonction ci-dessus un peu plus loin si besoin
void SDL_QuitSubSystem(Uint32 flags)
//pour liberer son contexte
```

les valeurs possible du flag sont définies dans ce tableau.
|||
|--|--|
|**SDL_INIT_TIMER**|pour la gestion du temps|
|**SDL_INIT_AUDIO**|pour la gestion du song|
|**SDL_INIT_VIDEO**|pour la gestion des videos|
|**SDL_INIT_JOYSTICK**|pour la gestion des joystick|
|**SDL_INIT_HAPTIC**|pour des choses comme la vibration des manettes|
|**SDL_INIT_GAMECONTROLLER**||
|**SDL_INIT_EVENTS**||
|**SDL_INIT_EVERYTHING**|pour avoir toutes les options ci-dessus|
|**SDL_INIT_NOPARACHUTE**|désactivation de signaux fatals|

[Quitter le programme](https://wiki.libsdl.org/SDL_Quit)
```c
void SDL_Quit();
/**
fait l'inverse de SDL_Init
*/
```

[Logger un message](https://wiki.libsdl.org/SDL_Log)
```c
void SDL_Log(const char* fmt, ...);
/**
logger une chaine de caractere en cas d'erreur
*/
```
[Récuperer un message d'erreur](https://wiki.libsdl.org/SDL_GetError)
```c
const char* SDL_GetError(void);
/**
retourne une chaine de caractere contenant le message d'erreur.
*/
```

[définir une fenetre](https://wiki.libsdl.org/SDL_CreateWindow)
```c
SDL_Window* SDL_CreateWindow(const char* title, int x, int y, int w, int h, Uint32 flags);
/**
creer et retourne une fenetre.
les entrées sont
- title pour le titre
- x et y sont les coordonnées geographique sur lesquelles la fenetre se positionnera
- w: (width) largeur de la fenetre
- h: (height) hauteur de la fenetre
- flags: mode d'ouverture
```

les valeurs possible de flags sont définies dans la tableau si dessous
|||
|--|--|
|SDL_WINDOW_FULLSCREEN|fullscreen window|
|SDL_WINDOW_FULLSCREEN_DESKTOP|fullscreen window at the current desktop resolution|
|SDL_WINDOW_OPENGL|window usable with OpenGL context|
|SDL_WINDOW_VULKAN|window usable with a Vulkan instance|
|SDL_WINDOW_HIDDEN|window is not visible|
|SDL_WINDOW_BORDERLESS|no window decoration|
|SDL_WINDOW_RESIZABLE|window can be resized|
|SDL_WINDOW_MINIMIZED|window is minimized|
|SDL_WINDOW_MAXIMIZED|window is maximized|
|SDL_WINDOW_INPUT_GRABBED |window has grabbed input focus|
|SDL_WINDOW_ALLOW_HIGHDPI | window should be created in high-DPI mode if supported (>= SDL 2.0.1)|

[destruction de la fenetre](https://wiki.libsdl.org/SDL_DestroyWindow)

```c
void SDL_DestroyWindow(SDL_Window* window)
/**
detruit la fenetre window en parametre
*/
```

[attente inactive](https://wiki.libsdl.org/SDL_Delay)

```c
void SDL_Delay(Uint32 ms);
// attend ms milliseconds avant de quitter 
```

[Evenement](https://wiki.libsdl.org/SDL_Event)

```c
int SDL_PollEvent(SDL_Event* event);
```