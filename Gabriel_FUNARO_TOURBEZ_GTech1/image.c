#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <SDL.h>
#include <SDL_image.h>
#include <string.h>
#include "image.h"

void init();
void window();
void renderer();
void afficher_image() {
    fond = IMG_Load("C:/Users/gfunarotourbez/Pictures/img_epreuve/terre.bmp"); /* A modifier en fonction de l'emplacement du fichier*/
    if (!fond)
    {
        printf("Erreur de chargement de l'image : %s", SDL_GetError());
        return -1;
    }
    texture_fond = SDL_CreateTextureFromSurface(render, fond);
    if (!texture_fond)
    {
        printf("Erreur de création de la texture : %s", SDL_GetError());
        SDL_FreeSurface(fond);
        return -1;
    }
    SDL_Rect background = { 0,0,800,600 };
    SDL_RenderCopy(render, texture_fond, NULL, &background);
    SDL_FreeSurface(fond);
}