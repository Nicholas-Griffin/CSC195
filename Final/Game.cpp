#include "Game.h"
#include "raylib.h"

Game::Game() : gameOver(false) {}

void Game::Init() {
    InitWindow(800, 600, "Snake Game");
    snake.Init();
    food.Spawn();
}

void Game::Run() {
    while (!WindowShouldClose() && !gameOver) {
        Update();
        Draw();
    }
    Shutdown();
}

void Game::Update() {
    snake.Update();
    if (snake.CheckCollisionWithFood(food)) {
        food.Spawn();
        snake.Grow();
    }
    if (snake.CheckCollisionWithWalls() || snake.CheckCollisionWithSelf()) {
        gameOver = true;
    }
}

void Game::Draw() {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    snake.Draw();
    food.Draw();
    EndDrawing();
}

void Game::Shutdown() {
    CloseWindow();
}
