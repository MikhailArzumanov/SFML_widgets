#pragma once
#include "widget.hpp"
#include "button_widget.hpp"
namespace sfWgts {
	class MM_MainPage : public Widget {
		Widget* parent;
		ButtonWidget* start_game_btn;
		ButtonWidget* settings_btn;
		ButtonWidget* credits_btn;
		ButtonWidget* exit_button;
	public:
		void on_click(point mouse) {}
		MM_MainPage(Widget* parent_);
	};

	void event_mm_leave(Widget* widget);
}