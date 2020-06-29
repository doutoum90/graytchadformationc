# Leçon C 27
## [Bibliothèque SDL](https://www.libsdl.org/download-2.0.php)

Simple DirectMedia Layer
Bibliothéque graphique
## Installation sur ubuntu/debian
```console
sudo apt-get install sdl2
sudo yum install sdl2
```

## Installation  Mac OS
```console
brew install sdl2 sdl2_image sdl2_mixer sdl2_net sdl2_ttf sdl2_gfx
```

l'installation se trouve dans sous le dossier **/usr/local/Cellar/sdl2/2.0.12_1**.
2 - copier les dossiers `include`, `lib` et `bin` dans le projet.


3- Ajouter ces options dans notre commande makefile -I include -L lib -l SDL2-2.0.0

4 - commencer à coder.