#include "vertical_slider_widget.hpp"

void VerticalSliderWidget::on_click(point mouse) {
	point rel = mouse - p - parent->get_p();
	float prcnt = rel.y/dims.y;
	percentage = prcnt;
	if (onchange != nullptr)
		onchange(parent, percentage);
}