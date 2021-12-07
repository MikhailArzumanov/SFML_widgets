#include "mm_credits_page.hpp"
#include "menu_widget.hpp"
#include "fonts.hpp"
namespace sfWgts {
	MM_CreditsPage::MM_CreditsPage(Widget* parent_) {
		p = { 0,0 };
		dims = { 1080,720 };

		parent = parent_;
		main_menu_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "main menu", menu_event_ctom, parent,
			sf::Color::White, { 230,120 }, { 38,23 });
		children.push_back(main_menu_btn);

		credits = new TextWidget(fonts[0], 23, sf::Color::White, "Credits to:\nA\nB\nC",
			{ 0,0 }, { 540,360 });
		children.push_back(credits);
	}
}