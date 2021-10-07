#include "animated_widget.hpp"

AnimatedWidget::AnimatedWidget(){}
AnimatedWidget::AnimatedWidget(sf::Sprite* sprite_, point p_, point frame_size) {
	sprite = sprite_; p = p_;
	sf::IntRect rect = sprite_->getTextureRect();
	frames_amount = rect.width  / frame_size.x;
	states_amount = rect.height / frame_size.y;
}