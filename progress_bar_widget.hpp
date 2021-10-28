#pragma once
#include "widget.hpp"

class ProgressBarWidget : public Widget {
	sf::RectangleShape* the_bar;
	sf::RectangleShape* bground;
	point paddings;
	float ratio;


public:
	void set_ratio(float ratio_);
	void draw(point shift);
	ProgressBarWidget();
	ProgressBarWidget(sf::Color bground_color, sf::Color bar_color, point paddings_, point dims_, point p_);
};