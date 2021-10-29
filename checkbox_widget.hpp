#pragma once
#include "widget.hpp"

class CheckboxWidget : public Widget {
	bool value;
	sf::Vertex* left_line;
	sf::Vertex* right_line;
	sf::RectangleShape* box;
public:
	bool getValue() { return value; }
	virtual void on_click();
	void draw();
	CheckboxWidget(point shift);
	CheckboxWidget(point dims_, point p_);
};
