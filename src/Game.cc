#include "Renderer/ApparenceContext.h"
#include "raylib.h"
#include "Game.h"

long int Game::getTick() {
    return this->tick;
}

int Game::createObject(ObjectTypes type, const char* name, ApparenceContext* context) {
    return this->objectEngine.createObject(type, name, context);
}
void Game::deleteObject(int id) {
    this->objectEngine.deleteObject(id);
}
int* Game::accessObject(int id) {
    return this->objectEngine.accessObject(id);
}
int* Game::accessLatestObject() {
    return this->objectEngine.accessLatest();
}

void Game::GameInit(const int width, const int height, const char* title, int fps) {
    InitWindow(width, height, title);
    SetTargetFPS(fps);
    this->objectEngine.renderEngine = &this->renderEngine;
    this->running = true;
};

void Game::getInputs() {};

void Game::physicStep() {};

void Game::render() {
    tick++;
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
