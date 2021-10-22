#include "mm_settings_page.hpp"
#include "environment.hpp"

MM_SettingsPage::MM_SettingsPage(MenuWidget* parent_) {
	parent = parent_;
	main_menu_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "main menu", menu_event_stom, parent, sf::Color::White, {200,100}, {325,313});
	children.push_back(main_menu_btn);
}