#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <SDL.h>
#include <SDL_image.h>
#include <string.h>

SDL_Window* wind;
SDL_Renderer* render;
void init();
void window();
void renderer();