#include "mm_start_game_page.hpp"

void MM_StartGamePage::set_name(std::string name) { 
	game_name = name; 
	auto menu_ = (MenuWidget*)parent;
	menu_->set_name(name);
}