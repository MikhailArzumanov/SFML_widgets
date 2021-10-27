#include "button_widget.hpp"

void ButtonWidget::on_click(point mouse) {
	if (onclick != nullptr)
		onclick(parent);
}