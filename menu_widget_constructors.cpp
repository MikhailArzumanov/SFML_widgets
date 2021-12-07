#include "menu_widget.hpp"
namespace sfWgts {
	MenuWidget::MenuWidget() {
		p = { 0,0 };
		dims = { 1080,720 };

		main_page = new MM_MainPage(this);
		start_game_page = new MM_StartGamePage(this);
		settings_page = new MM_SettingsPage(this);
		credits_page = new MM_CreditsPage(this);
		game_page = new MM_GamePage(this);
		main_page->set_visibility(true);
		start_game_page->set_visibility(false);
		settings_page->set_visibility(false);
		credits_page->set_visibility(false);
		game_page->set_visibility(false);
		children.push_back(main_page);
		children.push_back(start_game_page);
		children.push_back(settings_page);
		children.push_back(credits_page);
		children.push_back(game_page);
	}
}