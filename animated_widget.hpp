#pragma once
#include "image_widget.hpp"
#include "i_animatable.hpp"

class AnimatedWidget : public ImageWidget, public IAnimatable {
protected:
    int current_frame;
    int current_state;

    int frames_amount;
    int states_amount;

    int framecounter;
    int framerate;
public:
    void draw(point shift);
    void animate();
    AnimatedWidget();
    AnimatedWidget(sf::Sprite* sprite_, point p_, point frame_size, int framerate_);
};