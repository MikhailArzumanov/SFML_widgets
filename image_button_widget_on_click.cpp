#include "image_button_widget.hpp"

void ImageButtonWidget::on_click(point mouse) {
	if (!isVisible) return;
	if (onclick != nullptr) onclick(parent);
	AnimatedWidget::on_click(mouse);
}