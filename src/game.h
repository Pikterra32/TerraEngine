#include <SDL2/SDL.h>
#pragma once

class Game {
public:
    Game();
    ~Game();

    int init(const char * title, int posX, int posY, int width, int height);
    void render();
    void exit();
    bool isRunning();
    void pollEvents();

private:
    bool running;
    SDL_Window *Window;
    SDL_Renderer *Renderer;
};
