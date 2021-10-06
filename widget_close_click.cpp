#include "widget_close.hpp"
#include "window.hpp"

void WidgetClose::on_click() {
	window.close();
}