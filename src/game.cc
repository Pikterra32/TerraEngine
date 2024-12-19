#include "game.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>

Game::Game() {}
Game::~Game() {}

int Game::init(const char * title, int posX, int posY, int width, int height) {

    SDL_Surface* pTempSurface = SDL_LoadBMP("/home/gmart/Documents/Code/TerraEngine/rsrc/test.bmp");
    m_pTexture = SDL_CreateTextureFromSurface(Renderer, pTempSurface);
    SDL_FreeSurface(pTempSurface);
    SDL_QueryTexture(m_pTexture, NULL, NULL,
    &m_sourceRectangle.w, &m_sourceRectangle.h);
    m_destinationRectangle.x = m_sourceRectangle.x = 0;
    m_destinationRectangle.y = m_sourceRectangle.y = 0;
    m_destinationRectangle.w = m_sourceRectangle.w;
    m_destinationRectangle.h = m_sourceRectangle.h;

    Window = 0;
    Renderer = 0;

    if (SDL_Init(SDL_INIT_EVERYTHING) >= 0) {
      Window =
          SDL_CreateWindow(title, posX,
                           posY, width, height, SDL_WINDOW_SHOWN);
      if (Window != 0) {
        Renderer = SDL_CreateRenderer(Window, -1, 0);
      }
    } else {
      return 1;
    }

    running = true;
    return 0;
}

void Game::render() {
    SDL_SetRenderDrawColor(Renderer, 255, 0, 0, 255);
    SDL_RenderClear(Renderer);
    SDL_RenderCopy(Renderer, m_pTexture, &m_sourceRectangle,
    &m_destinationRectangle);
    SDL_RenderPresent(Renderer);
}

void Game::exit() {
    SDL_DestroyRenderer(Renderer);
    SDL_DestroyWindow(Window);
    SDL_Quit();
}

bool Game::isRunning() {
    return running;
}

void Game::pollEvents() {
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                running = false;
                break;
        }
    }
}
