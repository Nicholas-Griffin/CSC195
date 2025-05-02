#pragma once
#ifndef FOOD_H
#define FOOD_H

#include "raylib.h"

class Food {
public:
    void Spawn();
    void Draw();
    Vector2 GetPosition() const;

private:
    Vector2 position;
};

#endif
