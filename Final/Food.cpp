#include "Food.h"
#include "raylib.h"

void Food::Spawn() {
    position = { static_cast<float>(GetRandomValue(0, 79) * 10), static_cast<float>(GetRandomValue(0, 59) * 10) };
}

void Food::Draw() {
    DrawRectangleV(position, { 10, 10 }, RED);
}

Vector2 Food::GetPosition() const {
    return position;
}
