#pragma once
#include "widget.hpp"
#include "text_widget.hpp"
#include "rect_widget.hpp"

class ButtonWidget : public RectWidget {
private:
	TextWidget* text;
	void (*onclick)();

protected:
	ButtonWidget();
public:
	
	ButtonWidget(sf::Font& font_, int font_size_, sf::Color font_color, std::string content_, 
					void (*onclick_)(), sf::Color rect_color, point dims_, point p_);
	virtual void on_click();
};