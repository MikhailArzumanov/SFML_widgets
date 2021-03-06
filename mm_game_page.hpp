#pragma once
#include "widget.hpp"
#include "text_widget.hpp"

namespace sfWgts {
	class MM_GamePage : public Widget {
		Widget* parent;
		TextWidget* label;
		std::string game_name;

	public:
		void set_name(std::string name) { game_name = name; label->set_content("The game's name is:" + game_name); }
		MM_GamePage(Widget* parent_);
		void on_click(point mouse) {}
	};
}