#pragma once
#include "image_widget.hpp"

class WidgetClose : public ImageWidget {
public:
	WidgetClose(sf::Sprite* sprite_, point p_);
	void on_click();
};