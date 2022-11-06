#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity
{
public:
    Entity(int p_x, int p_y, SDL_Texture *p_texture);
    int getX();
    int getY();
    SDL_Texture *getTexture();
    SDL_Rect getCurrentFrame();

private:
    int x, y;
    SDL_Rect currentFrame;
    SDL_Texture *texture;
};