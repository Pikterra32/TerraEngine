#include <cstdlib>
#include "game.h"

Game game;

int main(int argc, char** args) {
    game.init("TerraEngine", 100, 100, 512, 512);

    while (game.isRunning()) {
        game.render();
        game.pollEvents();
    }

    exit(0);
}
