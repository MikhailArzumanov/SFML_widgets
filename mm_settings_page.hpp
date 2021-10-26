#pragma once
#include "widget.hpp"
#include "button_widget.hpp"

class MM_SettingsPage : public Widget {
	Widget* parent;
	ButtonWidget* main_menu_btn;
public:
	void on_click() {}
	MM_SettingsPage(Widget* parent_);
};