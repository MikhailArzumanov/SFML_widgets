#include "mm_main_page.hpp"
#include "environment.hpp"

MM_MainPage::MM_MainPage(MenuWidget* parent_){
	p = { 0,0 };
	dims = { 1920,1080 };

	parent = parent_;
	settings_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "settings",menu_event_mtos,parent, sf::Color::White, { 200,100 }, { 325,313 });
	children.push_back(settings_btn);
}