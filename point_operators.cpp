#include "point.hpp"

point point::operator+(point right) {
    return point{ this->x + right.x, this->y + right.y };
}
point point::operator-(point right) {
    return point{ this->x - right.x, this->y - right.y };
}
void point::operator>(sf::Sprite* sprite) {
    sprite->setPosition(this->x, this->y);
}
bool point::operator<(point another) {
    return x < another.x && y < another.y;
}