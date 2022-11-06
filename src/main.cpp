#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>

#include "RenderWindow.hpp"
#include "Entity.hpp"
#include "Math.hpp"

int main(int argc, char *args[])
{
    if (SDL_Init(SDL_INIT_VIDEO) > 0)
        std::cout << "SDL_Init FAILED LOADING. SDL_ERROR: " << SDL_GetError() << std::endl;

    if (!(IMG_Init(IMG_INIT_PNG)))
        std::cout << "IMG_Init FAILED LOADING. SDL_ERROR: " << SDL_GetError() << std::endl;

    RenderWindow window("GAME v1.0", 1280, 720);

    SDL_Texture *wallTexture = window.loadTexture("res/gfx/wall.png");
    SDL_Texture *bgTexture = window.loadTexture("res/gfx/background.png");

    std::vector<Entity> board;

    for (int i = 0; i < 1280; i += 16)
    {
        for (int j = 0; j < 720; j += 16)
        {
            if (i == 0 || i == 1280 - 16 || j == 0 || j == 720 - 16)
                board.push_back(Entity(Vector2f(i, j), wallTexture));
            else
                board.push_back(Entity(Vector2f(i, j), bgTexture));
        }
    }

    bool gameRunning = true;

    SDL_Event event;

    while (gameRunning)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
                gameRunning = false;
        }

        window.clear();

        for (Entity &cell : board)
        {
            window.render(cell);
        }

        window.display();
    }

    window.cleanUp();
    SDL_Quit();
    return 0;
}