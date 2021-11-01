#pragma once
#include "widget.hpp"
#include "button_widget.hpp"

class DDMenuWidget : public Widget {
	int vals_amount;
	std::string* vals;
	std::string plchldr;
	int tile_height;
	sf::Font* font;
	bool is_collapsed;
	ButtonWidget* expand_button;

public:
	DDMenuWidget();
	DDMenuWidget(int vals_amount_, std::string* vals_, std::string plchldr_,
				sf::Font* font_, int font_size_, sf::Color color, sf::Color bgrnd_color,
				int tile_height_, point dims_, point p_);
	virtual void show_hide();
	virtual void on_click(point mouse);
	virtual void on_change() = 0;
};

void ddmenu_event_shwhd(Widget* parent);