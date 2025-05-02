#pragma once
#ifndef SNAKE_H
#define SNAKE_H

#include "raylib.h"
#include <vector>

class Snake {
public:
    Snake();
    void Init();
    void Update();
    void Draw();
    void Grow();
    bool CheckCollisionWithFood(const class Food &food);
    bool CheckCollisionWithWalls();
    bool CheckCollisionWithSelf();

private:
    Vector2 position;
    float speed;
    std::vector<Vector2> body;
    int direction; // 0: up, 1: right, 2: down, 3: left
    void Move();
};

#endif
