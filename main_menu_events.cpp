#include "menu_widget.hpp"

void MenuWidget::main_to_settings() {
	main_page->set_visibility(false);
	settings_page->set_visibility(true);
}
void MenuWidget::settings_to_main() {
	main_page->set_visibility(true);
	settings_page->set_visibility(false);
}