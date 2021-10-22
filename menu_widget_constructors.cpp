#include "menu_widget.hpp"

MenuWidget::MenuWidget() {
	main_page	  = new MM_MainPage(this);
	settings_page = new MM_SettingsPage(this);
}