#include "animated_widget.hpp"

void AnimatedWidget::tick() {
	if (framecounter >= framerate) {
		current_frame = (current_frame + 1) % frames_amount;
		framecounter = 0;
	}
	else framecounter++;
	Widget::tick();
}