#pragma once
#include "widget.hpp"
#include "button_widget.hpp"

class MM_SettingsPage : public Widget {
	Widget* parent;
	ButtonWidget* main_menu_btn;
public:
	void on_click(point mouse) {}
	MM_SettingsPage(Widget* parent_);
};