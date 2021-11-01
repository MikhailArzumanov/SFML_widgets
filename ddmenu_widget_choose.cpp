#include "ddmenu_widget.hpp"

void DDMenuWidget::choose(int index) {
	expand_button->set_text(vals[index]);
	on_change(vals[index]);
	show_hide();
}