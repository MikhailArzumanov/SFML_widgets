#include "ddmenu_widget.hpp"

void DDMenuWidget::show_hide() {
	if (is_collapsed) {
		dims += point{0.f, (float)vals_amount*tile_height };
		for (int i = 0; i < vals_amount; i++) {
			//Show options
		}
	}
	else {
		dims -= point{0.f, (float)vals_amount*tile_height};
		for (int i = 0; i < vals_amount; i++) {
			//Hide options
		}
	}
}