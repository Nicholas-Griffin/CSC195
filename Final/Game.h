#pragma once
#ifndef GAME_H
#define GAME_H

#include "Snake.h"
#include "Food.h"

class Game {
public:
    Game();
    void Init();
    void Run();
    void Update();
    void Draw();
    void Shutdown();

private:
    Snake snake;
    Food food;
    bool gameOver;
};

#endif
