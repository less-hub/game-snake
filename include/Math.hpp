#pragma once

#include <iostream>

struct Vector2f
{
    Vector2f()
        : x(0), y(0) {}

    Vector2f(int p_x, int p_y)
        : x(p_x), y(p_y) {}

    void print()
    {
        std::cout << x << ", " << y << std::endl;
    }

    int x, y;
};