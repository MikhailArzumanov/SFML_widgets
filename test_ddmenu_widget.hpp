#pragma once
#include "ddmenu_widget.hpp"

class TestDDMenuWidget : public DDMenuWidget {
public:
	TestDDMenuWidget(sf::Font& font_, point p_);
	virtual void on_change(std::string new_val);
};