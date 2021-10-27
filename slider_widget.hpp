#pragma once
#include "widget.hpp"

class SliderWidget : public Widget {
	float percentage;
	void (*onchange)(Widget*);
	sf::RectangleShape* the_slider;
	sf::RectangleShape*	  the_line;
public:
	void on_click();
	void draw();
	SliderWidget();
	SliderWidget(void (*onchange_)(Widget*), point dims_, point p_);
	SliderWidget(sf::Color slider_color, sf::Color line_color, void (*onchange_)(Widget*), point dims_, point p_);
};