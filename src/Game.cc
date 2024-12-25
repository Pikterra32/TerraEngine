#include "raylib.h"
#include "Game.h"

void Game::GameInit(const int width, const int height, const char* title, int fps) {
    InitWindow(width, height, title);
    SetTargetFPS(fps);
    this->running = true;
};

void Game::getInputs() {};

void Game::physicSetp() {};

void Game::render() {};

void Game::handleEvents() {
    if (WindowShouldClose()) {
        this->running = false;
    }
}

bool Game::isRunning() {
    return this->running;
}
