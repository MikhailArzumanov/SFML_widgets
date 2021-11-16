#pragma once
#include "widget.hpp"
#include "button_widget.hpp"
#include "checkbox_widget.hpp"
#include "ddmenu_widget.hpp"
#include "slider_widget.hpp"
#include "progress_bar_widget.hpp"
#include "scrollbox_widget.hpp"

class MM_SettingsPage : public Widget {
	Widget* parent;
	CheckboxWidget* checkbox;
	DDMenuWidget* difficulty;
	ButtonWidget* main_menu_btn;
	SliderWidget* volume_slider;
	ProgressBarWidget* volume_bar;
	ScrollboxWidget* scrollbox;

public:
	void set_volume(float val) { volume_bar->set_ratio(val);}
	void on_click(point mouse) {}
	MM_SettingsPage(Widget* parent_);
};

void fs_chckbx_event(Widget* parent, bool new_val);
void dffclty_event(Widget* parent, std::string new_val);
void volume_event(Widget* parent, float new_val);