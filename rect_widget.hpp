#pragma once
#include "widget.hpp"

class RectWidget : public Widget {
public:
    sf::RectangleShape* rect;
public:
    virtual void draw(point shift);
    virtual void on_click() {}
    RectWidget();
    RectWidget(point size_, point p_, sf::Color color_);
};