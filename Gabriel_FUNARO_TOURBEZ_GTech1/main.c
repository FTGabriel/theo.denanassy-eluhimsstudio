#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <SDL.h>
#include <SDL_image.h>
#include <string.h>
#include "main.h"
void init();
void window();
void renderer();
void afficher_image();
void deplacement();
int main(int argc, char* argv[]) {
    while (1)
    {
        init();
        window();
        renderer();
        afficher_image();
        deplacement();
    }
    SDL_RenderPresent(renderer);
    SDL_Delay(10);
    /*
    // position et dimension du rectangle
    int x = 200;
    int y = 100;
    int size = 50;

    // direction init movement
    int dx = 5;
    int dy = 5;

    while (1)
    {
        // Clear rendu + set white color 
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);

        // draw red quadrilateral
        SDL_Rect redQuadrilateral = { x, y, size, size };
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &redQuadrilateral);

        // update red quadrilateral pos
        x += dx;
        y += dy;

        // colliding red quadrilateral if it touched the screen border
        if (x <= 0 || x + size >= 800) {
            dx = -dx;
        }
        if (y <= 0 || y + size >= 600) {
            dy = -dy;
        }

        // update rendu
        SDL_RenderPresent(renderer);

        SDL_Delay(10);

    }
    */
    return 0;
}