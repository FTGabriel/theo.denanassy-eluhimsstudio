#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <SDL.h>
#include <SDL_image.h>
#include <string.h>
#include "window.h"

void init() {
    // init SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Failed to load SDL : %s\n", SDL_GetError());
        return -1;
    }
}
void window() {
    // create SDL window
    wind = SDL_CreateWindow("SDL Project",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        800, 600, SDL_WINDOW_SHOWN);
    if (wind == NULL) {
        printf("Failed to create window : %s\n", SDL_GetError());
        SDL_Quit();
        return -1;
    }
}
void renderer() {
    // create render 
    render = SDL_CreateRenderer(wind, -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (render == NULL) {
        printf("Failed to create renderer\n");
        SDL_DestroyWindow(wind);
        SDL_Quit();
        return -1;
    }
}