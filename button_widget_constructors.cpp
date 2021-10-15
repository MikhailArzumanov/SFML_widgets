#include "button_widget.hpp"

const float LETTER_WIDTH  = 0.26;
const float LETTER_HEIGHT = 0.73;
const float UPPER_MARGIN  = 0.28;

ButtonWidget::ButtonWidget(){}
ButtonWidget::ButtonWidget(sf::Font& font_, int font_size_, sf::Color font_color, std::string content_,
	sf::Color rect_color, point dims_, point p_) {
	point pos = dims_/2.f;
	text = new TextWidget(font_, font_size_, font_color, content_, { 0,0 }, pos);
	sf::FloatRect frect = text->getTextRect();
	pos -= point{frect.width,frect.height}/2.f;
	text->set_p(pos);

	rect = new sf::RectangleShape({ dims_.x, dims_.y });
	rect->setFillColor(rect_color);
	p = p_;

	add_child(text);
}