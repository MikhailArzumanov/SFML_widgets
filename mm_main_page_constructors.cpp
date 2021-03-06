#include "mm_main_page.hpp"
#include "fonts.hpp"
#include "menu_widget.hpp"
namespace sfWgts {
	MM_MainPage::MM_MainPage(Widget* parent_) {
		p = { 0,0 };
		dims = { 1080,720 };

		parent = parent_;
		start_game_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "start game", menu_event_mtog, parent,
			sf::Color::White, { 230, 93 }, { 425, 125 });
		children.push_back(start_game_btn);
		settings_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "settings", menu_event_mtos, parent,
			sf::Color::White, { 230, 93 }, { 425, 225 });
		children.push_back(settings_btn);
		credits_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "credits", menu_event_mtoc, parent,
			sf::Color::White, { 230, 93 }, { 425, 325 });
		children.push_back(credits_btn);
		exit_button = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "exit", event_mm_leave, parent,
			sf::Color::White, { 230, 93 }, { 425, 425 });
		children.push_back(exit_button);
	}
}