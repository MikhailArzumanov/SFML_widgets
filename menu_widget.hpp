#pragma once
#include "widget.hpp"
#include "mm_main_page.hpp"
#include "mm_settings_page.hpp"

class MenuWidget : public Widget {
	MM_MainPage* main_page;
	MM_SettingsPage* settings_page;

	MenuWidget();
public:
	void main_to_settings();
	void settings_to_main();
};

void menu_event_mtos(Widget* menu) {
	auto menu_ = (MenuWidget*)menu;
	menu_->main_to_settings();
}
void menu_event_stom(Widget* menu) {
	auto menu_ = (MenuWidget*)menu;
	menu_->settings_to_main();
}