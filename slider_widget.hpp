#pragma once
#include "widget.hpp"

class SliderWidget : public Widget {
	Widget* parent;
	float percentage;
	void (*onchange)(Widget*,float);
	sf::RectangleShape* the_slider;
	sf::RectangleShape*	  the_line;
public:
	float get_precentage() { return percentage };
	void on_click(point mouse);
	void draw();
	SliderWidget();
	SliderWidget(Widget* parent_, void (*onchange_)(Widget*), point dims_, point p_);
	SliderWidget(Widget* parent_, sf::Color slider_color, sf::Color line_color, void (*onchange_)(Widget*), point dims_, point p_);
};