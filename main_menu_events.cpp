#include "menu_widget.hpp"

void MenuWidget::main_to_settings() {
	main_page->set_visibility(false);
	settings_page->set_visibility(true);
}
void MenuWidget::settings_to_main() {
	main_page->set_visibility(true);
	settings_page->set_visibility(false);
}

void MenuWidget::on_click(){}

void menu_event_mtos(Widget* menu) {
	auto menu_ = (MenuWidget*)menu;
	menu_->main_to_settings();
}
void menu_event_stom(Widget* menu) {
	auto menu_ = (MenuWidget*)menu;
	menu_->settings_to_main();
}