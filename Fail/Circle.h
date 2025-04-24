#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    Circle(float r) { m_radius = r; }

    float Area() override {
        return 3.14f * m_radius * m_radius;
    }

    void SetRadius(float radius) { m_radius = radius; }
    float GetRadius() override { return m_radius; }

    eType GetType() {
        return eType::Circle;
    }

private:
    float m_radius;
};