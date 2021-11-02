#include "button_widget.hpp"

ButtonWidget::ButtonWidget(){}
ButtonWidget::ButtonWidget(sf::Font& font_, int font_size_, sf::Color font_color, std::string content_,
	void (*onclick_)(Widget*), Widget* parent_, sf::Color rect_color, point dims_, point p_) {
	p = p_;	dims = dims_;

	rect = new sf::RectangleShape({ dims.x, dims.y });
	rect->setFillColor(rect_color);
	
	text = new TextWidget(font_, font_size_, font_color, "", { 0,0 }, { 0,0 });
	set_text(content_);
	add_child(text);

	onclick = onclick_;
	parent = parent_;
}