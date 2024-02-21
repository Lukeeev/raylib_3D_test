#include "raylib.h"

#include <stdio.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define SCREEN_FPS 60

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "The Demo");

    Camera camera = {0};
    camera.position = (Vector3){10.0f, 10.0f, 10.0f};
    camera.target = (Vector3){0};
    camera.up = (Vector3){0.0f, 1.0f, 0.0f};
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;


    SetTargetFPS(SCREEN_FPS);               // Set our game to run at 60 frames-per-second

    while(!WindowShouldClose()){
        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
        }
        EndDrawing();

    }
 
 
 
 
 
    return 0;
}