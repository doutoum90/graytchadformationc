# Leçon C 31
## Manipulation images divers

[Initialisation de la librairie](https://www.libsdl.org/projects/SDL_image/docs/SDL_image_8.html)
``` c
int IMG_Init(int flags)
```
flags peut être un element de la liste

|					|			|
|-------------------|-----------|
|**IMG_INIT_JPG** 	|		jpeg| 
|**IMG_INIT_PNG** 	|		png	|
|**IMG_INIT_TIF**	|		tif	|

[destruction du contexte](https://www.libsdl.org/projects/SDL_image/docs/SDL_image_9.html)

```c
void IMG_Quit();
```

[Chargement de l'image](https://www.libsdl.org/projects/docs/SDL_image/SDL_image_7.html)

``` c
SDL_Surface * IMG_Load(const char *file)
```
