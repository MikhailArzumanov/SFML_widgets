#pragma once
#include "widget.hpp"
#include "mm_main_page.hpp"
#include "mm_game_page.hpp"
#include "mm_credits_page.hpp"
#include "mm_settings_page.hpp"
#include "mm_start_game_page.hpp"

class MM_StartGamePage;

class MenuWidget : public Widget {
	MM_MainPage*	 main_page;
	MM_SettingsPage* settings_page;
	MM_CreditsPage*  credits_page;
	MM_StartGamePage* start_game_page;
	MM_GamePage* game_page;
public:
	MenuWidget();
	void on_click(point mouse);
	void set_name(std::string name) { game_page->set_name(name); };

	void main_to_start();
	void start_to_main();

	void main_to_settings();
	void settings_to_main();

	void main_to_credits();
	void credits_to_main();

	void start_to_game();

};

void menu_event_mtos(Widget* menu);
void menu_event_stom(Widget* menu);

void menu_event_mtoc(Widget* menu);
void menu_event_ctom(Widget* menu);

void menu_event_mtog(Widget* menu);
void menu_event_gtom(Widget* menu);

void menu_event_gtoG(Widget* menu);