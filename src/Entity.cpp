#include "Entity.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

Entity::Entity(int p_x, int p_y, SDL_Texture *p_texture)
    : x(p_x), y(p_y), texture(p_texture)
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 16;
    currentFrame.h = 16;
}

int Entity::getX()
{
    return x;
}

int Entity::getY()
{
    return y;
}

SDL_Texture *Entity::getTexture()
{
    return texture;
}

SDL_Rect Entity::getCurrentFrame()
{
    return currentFrame;
}