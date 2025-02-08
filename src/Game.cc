#include "raylib.h"
#include "Game.h"

void Game::GameInit(const int width, const int height, const char* title, int fps) {
    InitWindow(width, height, title);
    SetTargetFPS(fps);
    this->objectEngine.renderEngine = &this->renderEngine;
    this->running = true;
};

void Game::getInputs() {};

void Game::physicStep() {};

void Game::render() {
    this->renderEngine.render();
};

void Game::pause() {
    this->running = false;
}

void Game::resume() {
    this->running = true;
}

void Game::handleEvents() {
    if (WindowShouldClose()) {
        this->running = false;
    }
}

bool Game::isRunning() {
    return this->running;
}

void Game::closeGame() {
    CloseWindow();
}
