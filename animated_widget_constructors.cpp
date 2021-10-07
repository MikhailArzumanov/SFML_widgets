#include "animated_widget.hpp"

AnimatedWidget::AnimatedWidget(){
	sprite = nullptr;
}
AnimatedWidget::AnimatedWidget(sf::Sprite* sprite_, point p_, point dims_) {
	sprite = sprite_; p = p_;
	dims = dims_;
	sf::IntRect rect = sprite_->getTextureRect();
	frames_amount = rect.width  / dims.x;
	states_amount = rect.height / dims.y;

	current_frame = 0;
	current_state = 0;
}