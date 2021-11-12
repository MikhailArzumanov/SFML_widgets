#include "mm_start_game_page.hpp"
#include "menu_widget.hpp"
#include "environment.hpp"

MM_StartGamePage::MM_StartGamePage(Widget* parent_) {
	p = { 0,0 };
	dims = { 1080,720 };

	parent = parent_;
	main_menu_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "main menu", menu_event_gtom, parent,
		sf::Color::White, { 230,120 }, { 38,23 });
	children.push_back(main_menu_btn);
	label = new TextWidget(fonts[0], 12, sf::Color::Cyan, "Input the name", { 0,0 }, { 400,380 });
	children.push_back(label);
	input = new TextInputWidget(fonts[0],12,sf::Color::White,sf::Color::Cyan,set_name_event,this,"...", { 230,22 }, { 400,400 });
	children.push_back(input);
	start_game_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "start game", menu_event_gtoG, parent, sf::Color::White, { 230,38 }, { 400,423 });
	children.push_back(start_game_btn);
}