#pragma once
#include<SDL.h>
#include "CuttingBoard.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <SDL_ttf.h>


class health_and_score{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
    int totalHealth;
    // std::map<std::TTF_Font*>
    public:
    void health_status();
    void update(SDL_Renderer *, SDL_Texture *);
    // void printing_score();
    health_and_score(int);
    void updateHealth(int);
    int getHealth();
};