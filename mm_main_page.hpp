#pragma once
#include "widget.hpp"
#include "button_widget.hpp"

class MM_MainPage : public Widget {
	Widget*   parent;
	ButtonWidget* settings_btn;
	ButtonWidget* credits_btn;
	ButtonWidget* exit_button;
public:
	void on_click() {}
	MM_MainPage(Widget* parent_);
};

void event_mm_leave(Widget* widget);