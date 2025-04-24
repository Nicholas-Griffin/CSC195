#pragma once

class Shape {
public:
    enum class eType {
        Circle, Rectangle
    };

    virtual float Area() = 0;
    virtual eType GetType() = 0;
    virtual float GetRadius() = 0;


};