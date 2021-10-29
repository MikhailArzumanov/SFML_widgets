#pragma once
#include "widget.hpp"

class CheckboxWidget : public Widget {
	bool value;
	sf::Vertex* left_line;
	sf::Vertex* right_line;
	sf::RectangleShape* box;
public:
	bool getValue() { return value; }
	virtual void on_click(point mouse);
	void draw(point shift);
	CheckboxWidget();
	CheckboxWidget(point dims_, point p_);
};
