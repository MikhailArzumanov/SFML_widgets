#include "mm_game_page.hpp"
#include "environment.hpp"

MM_GamePage::MM_GamePage(Widget* parent_) {
	parent = parent_;
	label = new TextWidget(fonts[0], 12, sf::Color::Cyan, "Game name is:", { 0,0 }, { 400,380 });
	add_child(label);

}