#pragma once
#include "widget.hpp"
#include "button_widget.hpp"
#include "text_input_widget.hpp"
#include "menu_widget.hpp"
namespace sfWgts {
	class MM_StartGamePage : public Widget {
		Widget* parent;
		ButtonWidget* main_menu_btn;
		TextWidget* label;
		TextInputWidget* input;
		ButtonWidget* start_game_btn;
		std::string game_name;

	public:
		void set_name(std::string name);
		void on_click(point mouse) {}
		MM_StartGamePage(Widget* parent_);
	};

	void set_name_event(Widget* parent, std::string name);
}