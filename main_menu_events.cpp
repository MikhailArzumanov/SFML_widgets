#include "menu_widget.hpp"

void MenuWidget::main_to_settings() {
	main_page->set_visibility(false);
	settings_page->set_visibility(true);
}
void MenuWidget::settings_to_main() {
	main_page->set_visibility(true);
	settings_page->set_visibility(false);
}

void MenuWidget::main_to_credits() {
	main_page->set_visibility(false);
	credits_page->set_visibility(true);
}
void MenuWidget::credits_to_main() {
	main_page->set_visibility(true);
	credits_page->set_visibility(false);
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

void menu_event_mtoc(Widget* menu) {
	auto menu_ = (MenuWidget*)menu;
	menu_->main_to_credits();
}
void menu_event_ctom(Widget* menu) {
	auto menu_ = (MenuWidget*)menu;
	menu_->credits_to_main();
}