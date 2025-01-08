#include "Game.h"

Game gamecontext;

int main(void)
{
    gamecontext.GameInit(800, 450, "my game", 60);

    while (gamecontext.isRunning())
    {
        gamecontext.handleEvents();

        gamecontext.getInputs();
        gamecontext.physicStep();
        gamecontext.render();
    }

    gamecontext.closeGame();

    return 0;
}
