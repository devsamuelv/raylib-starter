#include "raylib.h"

int main(void)
{
    InitWindow(800, 800, "hello-world");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Linux Raylib Template For Vscode", 190, 200, 90, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}