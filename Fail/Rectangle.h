#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
    float m_width;
    float m_height;
public:
    Rectangle(float w, float h) {
        m_width = w;
        m_height = h;
    }

    float Area() override {
        return m_width * m_height;
    }

    float GetRadius() override { return 0.0f; }

    void SetHeight(float height) { m_height = height; }
    float GetHeight() { return m_height; }
    void SetWidth(float width) { m_width = width; }
    float GetWidth() { return m_width; }

    eType GetType() override {
        return eType::Rectangle;
    }
};