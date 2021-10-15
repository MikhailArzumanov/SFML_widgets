#pragma once
#include "widget.hpp"

class RectWidget : public Widget {
private:
protected:
    sf::RectangleShape* rect;
    RectWidget();
public:
    virtual void draw(point shift);
    virtual void on_click() {}
    RectWidget(point dims_, point p_, sf::Color color_);
};