#include "mm_game_page.hpp"
#include "fonts.hpp"
namespace sfWgts {
	MM_GamePage::MM_GamePage(Widget* parent_) {
		parent = parent_;
		label = new TextWidget(fonts[0], 12, sf::Color::Cyan, "The game's name is:", { 0,0 }, { 400,380 });
		add_child(label);

	}
}