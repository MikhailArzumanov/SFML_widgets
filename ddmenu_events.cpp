#include "ddmenu_widget.hpp"

void ddmenu_event_shwhd(Widget* parent) {
	if (parent == nullptr) return;
	auto wdgt = (DDMenuWidget*)parent;
	wdgt->show_hide();
}