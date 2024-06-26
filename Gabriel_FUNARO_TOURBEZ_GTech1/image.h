#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <SDL.h>
#include <SDL_image.h>
#include <string.h>

void afficher_image();
SDL_Surface* fond;
SDL_Texture* texture_fond;
SDL_Renderer* render;