#pragma once
#include <SFML/Graphics.hpp>
struct point {
    float x, y;
    point operator+(point right);
    point operator-(point right);
    void operator>>(sf::Sprite* sprite);
    void operator>>(sf::Shape* shape);
    bool operator<(point another);
};