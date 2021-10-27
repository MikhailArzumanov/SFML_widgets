#include "slider_widget.hpp"
#include "window.hpp"

void SliderWidget::draw(point shift) {
	the_line->setPosition(p.x, p.y + dims.y / 3);
	the_slider->setPosition(p.x + dims.x * percentage, p.y);
	window.draw(*the_line);
	window.draw(*the_slider);
	Widget::draw(shift);
}