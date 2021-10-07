#pragma once
#include "image_widget.hpp"

class AnimatedWidget : public ImageWidget {
protected:
    int frames_amount;
    int states_amount;
public:
    void draw(point shift);
    AnimatedWidget();
    AnimatedWidget(sf::Sprite* sprite_, point p_, point frame_size);
};