#include "checkbox_widget.hpp"

void CheckboxWidget::on_click(point mouse) {
	value = !value;
}