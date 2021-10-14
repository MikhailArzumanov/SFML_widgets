#pragma once
#include "widget.hpp"

class TextWidget : public Widget {
protected:
	TextWidget(){}
	std::string content;
	sf::Text	   text;

	int	 font_size;
	sf::Font* font;
public:
	TextWidget(sf::Font* font_, int font_size_, point dims_, point p_);
};