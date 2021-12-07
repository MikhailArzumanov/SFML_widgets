#include "mm_start_game_page.hpp"
namespace sfWgts {
	void set_name_event(Widget* parent, std::string name) {
		auto parent_ = (MM_StartGamePage*)parent;
		parent_->set_name(name);
	}
}