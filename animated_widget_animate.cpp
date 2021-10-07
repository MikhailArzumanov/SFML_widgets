#include "animated_widget.hpp"

void AnimatedWidget::animate() {
	current_frame = (current_frame+1)%frames_amount;
}