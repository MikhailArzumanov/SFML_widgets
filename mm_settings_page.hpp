#pragma once
#include "widget.hpp"
#include "button_widget.hpp"
#include "checkbox_widget.hpp"

class MM_SettingsPage : public Widget {
	Widget* parent;
	CheckboxWidget* checkbox;
	ButtonWidget* main_menu_btn;
public:
	void on_click(point mouse) {}
	MM_SettingsPage(Widget* parent_);
};

void fs_chckbx_event(Widget* parent, bool new_val);