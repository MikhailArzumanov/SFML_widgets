#pragma once
#include "widget.hpp"

class ImageWidget : public Widget {
protected:
    sf::Sprite* sprite;
public:
    virtual void draw(point shift);
    virtual void draw();
    virtual void on_click();
    ImageWidget();
    ImageWidget(point p_);
    ImageWidget(sf::Sprite* sprite_, point p_);
};
