#include "raylib.h"
#include "Game.h"

Game gamecontext;

int main(void)
{
    gamecontext.GameInit(800, 450, "my game", 60);

    while (gamecontext.isRunning())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 0, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
