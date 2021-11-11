#include "vertical_slider_widget.hpp"
#include "window.hpp"

void VerticalSliderWidget::draw(point shift) {
	the_line->setPosition(p.x+dims.x/3, p.y);
	the_slider->setPosition(p.x, p.y + dims.y * percentage);
	window.draw(*the_line);
	window.draw(*the_slider);
	Widget::draw(shift);
}