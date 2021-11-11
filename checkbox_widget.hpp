#pragma once
#include "widget.hpp"

class CheckboxWidget : public Widget {
	bool value;
	Widget* parent;
	sf::Vertex* left_line;
	sf::Vertex* right_line;
	sf::RectangleShape* box;
	void (*onchange)(Widget*, bool);
public:
	bool getValue();
	void setValue(bool val);
	virtual void on_click(point mouse);
	void draw(point shift);
	CheckboxWidget();
	CheckboxWidget(Widget* parent_, void (*on_change)(Widget*, bool), point dims_, point p_);
};
