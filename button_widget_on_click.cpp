#include "button_widget.hpp"

void ButtonWidget::on_click() {
	if (onclick != nullptr)
		onclick(parent);
}