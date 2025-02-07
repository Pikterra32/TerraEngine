#include "Objects/ObjectManager.h"
#include "Renderer/Renderer.h"
#include <vector>
#pragma once

class Game {
public:
    void GameInit(const int width, const int height, const char* title, int fps);

    void getInputs();
    void physicStep();
    void render();

    void pause();
    void resume();

    void handleEvents();
    void closeGame();

    bool isRunning();
private:
    Renderer renderEngine;
    ObjectManager objectEngine;

    bool running;
};
