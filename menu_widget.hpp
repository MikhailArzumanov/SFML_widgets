#pragma once
#include "widget.hpp"
#include "mm_main_page.hpp"
#include "mm_settings_page.hpp"

class MenuWidget : public Widget {
	MM_MainPage* main_page;
	MM_SettingsPage* settings_page;

public:
	MenuWidget();
	void on_click();
	void main_to_settings();
	void settings_to_main();
};

void menu_event_mtos(Widget* menu);
void menu_event_stom(Widget* menu);