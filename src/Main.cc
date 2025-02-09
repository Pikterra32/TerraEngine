#include "Game.h"
#include "Objects/ObjectTypes.h"
#include "Objects/SolidObject.h"
#include "Renderer/ApparenceContext.h"
#include "Renderer/RenderTypes.h"
#include "Utility/Colors.h"
#include <cmath>
#include <iostream>

Game gamecontext;

int main(void)
{
    gamecontext.GameInit(800, 450, "my game", 60);

    ApparenceContext ok;
    ok.posX = 800/2; ok.posY = 450/2;
    ok.type = Shape_Circle;
    ok.size = 20;
    ok.hexColor = 0xffffffff;

    int circle = gamecontext.createObject(T_SolidObject, "WhiteOrb", &ok);

    long int tick = 0;
    while (gamecontext.isRunning())
    {
        tick = gamecontext.getTick();
        std::cout << tick << '\n';

        // problem, the moveto function should work but isnt, i suspect the renderQueue actually contains copys of renderelements
        // and not references, so thats why they seem like they arent moving, i tried putting references but if i do that
        // nothing will render on screen
        ((SolidObject*)gamecontext.accessObject(circle))->moveTo(1, 1);

        gamecontext.handleEvents();

        gamecontext.getInputs();
        gamecontext.physicStep();
        gamecontext.render();
    }

    gamecontext.closeGame();

    return 0;
}
