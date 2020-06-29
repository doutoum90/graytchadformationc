#include <stdio.h>
#include <SDL2/SDL.h>

int main()
{
    SDL_version version;
    SDL_VERSION(&version);
    printf("la version utilisée de SDL est %u %u %u", version.major, version.minor, version.patch);
    return 0;
}