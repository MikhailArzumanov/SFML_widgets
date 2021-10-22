#pragma once
#include "widget.hpp"
#include "button_widget.hpp"
#include "menu_widget.hpp"

class MM_SettingsPage : public Widget {
	MenuWidget* parent;
	ButtonWidget* main_menu_btn;
public:
	void on_click() {}
	MM_SettingsPage(MenuWidget* parent_);
};