#include "text_widget.hpp"

TextWidget::TextWidget(sf::Font& font_, int font_size_, sf::Color color, std::string content_, point dims_, point p_) {
	font = &font_; font_size = font_size_; dims = dims_; p = p_;
	content = content_;
	text = new sf::Text(content, *font, font_size);
	text->setFillColor(color);
}