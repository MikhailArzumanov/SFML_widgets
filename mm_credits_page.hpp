#pragma once
#include "widget.hpp"
#include "button_widget.hpp"
#include "text_widget.hpp"
namespace sfWgts {
	class MM_CreditsPage : public Widget {
		Widget* parent;
		ButtonWidget* main_menu_btn;

		TextWidget* credits;

	public:
		void on_click(point mouse) {}
		MM_CreditsPage(Widget* parent_);
	};
}