#include "raylib.h"

int main(void)
{
    InitWindow(800, 800, "hello-world");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("first window", 190, 200, 90, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}