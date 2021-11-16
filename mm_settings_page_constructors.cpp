#include "mm_settings_page.hpp"
#include "fonts.hpp"
#include "menu_widget.hpp"

MM_SettingsPage::MM_SettingsPage(Widget* parent_) {
	p = { 0,0 };
	dims = { 1080,720 };

	parent = parent_;
	main_menu_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "main menu", menu_event_stom, parent, 
										sf::Color::White, {230,120}, { 38,23 });
	checkbox = new CheckboxWidget(this, fs_chckbx_event,{ 83,83 }, { 400,400 });

	std::string* vals = new std::string[3]{ "easy","normal","hard" };

	difficulty = new DDMenuWidget(3, vals, "choose the difficulty", fonts[0], 12, sf::Color::Cyan, sf::Color::White, 
									this, dffclty_event, 23, { 230,38 }, { 400,500 });

	children.push_back(difficulty);
	children.push_back(checkbox);
	children.push_back(main_menu_btn);
}