#include "slider_widget.hpp"
#include "window.hpp"

void SliderWidget::draw(point shift) {
	the_line->setPosition(shift.x+p.x, shift.y+p.y + dims.y / 3);
	the_slider->setPosition(shift.x+p.x + dims.x * percentage, shift.y+p.y);
	window.draw(*the_line);
	window.draw(*the_slider);
	Widget::draw(shift);
}