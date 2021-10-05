#pragma once
#include "widget.hpp"

class ImageWidget : public Widget {
    
    sf::Sprite* sprite;
public:
    void draw(point shift);
    void draw();
    void on_click();
    ImageWidget(point p_);
    ImageWidget(sf::Sprite* sprite_, point p_);
};
