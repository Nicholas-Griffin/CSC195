#include "Snake.h"
#include "raylib.h"
#include "Food.h"
#include <vector>

Snake::Snake() : speed(10.0f), direction(1) {}

void Snake::Init() {
    position = { 400.0f, 300.0f };
    body.push_back(position);
}

void Snake::Update() {
    Move();
    // Update body positions
    for (int i = body.size() - 1; i > 0; --i) {
        body[i] = body[i - 1];
    }
    body[0] = position;
}

void Snake::Draw() {
    for (auto& segment : body) {
        DrawRectangleV(segment, { 10, 10 }, GREEN);
    }
}

void Snake::Move() {
    switch (direction) {
    case 0: position.y -= speed; break; // up
    case 1: position.x += speed; break; // right
    case 2: position.y += speed; break; // down
    case 3: position.x -= speed; break; // left
    }
}

bool Snake::CheckCollisionWithFood(const Food& food) {
    return (position.x == food.GetPosition().x && position.y == food.GetPosition().y);
}

bool Snake::CheckCollisionWithWalls() {
    return (position.x < 0 || position.x >= 800 || position.y < 0 || position.y >= 600);
}

bool Snake::CheckCollisionWithSelf() {
    for (size_t i = 1; i < body.size(); ++i) {
        if (position.x == body[i].x && position.y == body[i].y) {
            return true;
        }
    }
    return false;
}

void Snake::Grow() {
    body.push_back(body.back());
}
