#pragma once
#include "widget.hpp"
#include "button_widget.hpp"
#include "menu_widget.hpp"

class MM_MainPage : public Widget {
	MenuWidget*   parent;
	ButtonWidget* settings_btn;
	ButtonWidget* credits_btn;
public:
	void on_click() {}
	MM_MainPage(MenuWidget* parent_);
};