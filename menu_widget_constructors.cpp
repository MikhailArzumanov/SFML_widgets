#include "menu_widget.hpp"

MenuWidget::MenuWidget() {
	p = { 0,0 };
	dims = { 1080,720 };

	main_page	  = new MM_MainPage(this);
	settings_page = new MM_SettingsPage(this);
	main_page->set_visibility(true);
	settings_page->set_visibility(false);
	children.push_back(main_page);
	children.push_back(settings_page );
}