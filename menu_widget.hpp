#pragma once
#include "widget.hpp"
#include "mm_main_page.hpp"

class MenuWidget : public Widget {
	MM_MainPage* main_page;
	MenuWidget();
public:
	void main_to_settings();
};

void menu_event_mtos(Widget* menu) {
	auto menu_ = (MenuWidget*)menu;
	menu_->main_to_settings();
}