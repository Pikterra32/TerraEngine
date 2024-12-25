#pragma once

class Game {
public:
    void GameInit(const int width, const int height, const char* title, int fps);

    void getInputs();
    void physicSetp();
    void render();

    void handleEvents();

    bool isRunning();
private:
    bool running;
};
