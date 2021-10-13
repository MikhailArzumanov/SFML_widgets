#include "point.hpp"

point point::operator+(point right) {
    return point{x+right.x, y+right.y };
}
point point::operator-(point right) {
    return point{x-right.x, y-right.y };
}
void point::operator>>(sf::Sprite* sprite) {
    sprite->setPosition(x, y);
}
bool point::operator<(point another) {
    return x<another.x && y<another.y;
}