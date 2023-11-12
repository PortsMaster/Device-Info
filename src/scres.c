#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char* args[])
{
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr, "SDL initialization failed: %s\n", SDL_GetError());
        return 1;
    }

    // Get the current display resolution
    SDL_DisplayMode currentMode;
    if (SDL_GetCurrentDisplayMode(0, &currentMode) != 0)
    {
        fprintf(stderr, "SDL_GetCurrentDisplayMode failed: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Print the display resolution
    printf("Current Display Resolution: %dx%d\n", currentMode.w, currentMode.h);

    // Quit SDL
    SDL_Quit();

    return 0;
}
