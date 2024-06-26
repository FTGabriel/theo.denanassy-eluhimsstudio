#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <SDL.h>
#include <SDL_image.h>
#include <string.h>
#include "mouvement.h"

void deplacement() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_KEYDOWN) {
            if (event.key.keysym.sym == SDLK_UP) {
                if (yquadrilateral - 80 >= 0) {
                    yquadrilateral -= 30;
                }
                break;
            }
            if (event.key.keysym.sym == SDLK_DOWN) {
                if (yquadrilateral + 80 <= 600) {
                    yquadrilateral += 30;
                }
                break;
            }
            if (event.key.keysym.sym == SDLK_LEFT) {
                if (xquadrilateral - 60 >= 0) {
                    xquadrilateral -= 20;
                }
                break;
            }
            if (event.key.keysym.sym == SDLK_RIGHT) {
                if (xquadrilateral + 60 <= 800) {
                    xquadrilateral += 20;
                }
                break;
            }
        }
    }
}