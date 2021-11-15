#include "test_ddmenu_widget.hpp"


TestDDMenuWidget::TestDDMenuWidget(sf::Font& font_, point p_) {
	is_collapsed = true;

	dims = { 120,38 }; p = p_;
	tile_height = 38;
	font = &font_;
	vals = new std::string[]{ "val1", "val2", "val3" };
	vals_amount = 3;
	plchldr = "choose option";

	expand_button = new ButtonWidget(font_, 12, sf::Color::Cyan, plchldr, ddmenu_event_shwhd, this,
		sf::Color::White, dims, { 0, 0 });
	children.push_back(expand_button);

	options = new DDMenuOptionWidget[vals_amount];
	for (int i = 0; i < vals_amount; i++) {
		options[i] = DDMenuOptionWidget(font_, 12, sf::Color::Cyan, sf::Color::White, i, vals[i], this,
			point{ dims.x, (float)tile_height }, point{ 0.f, dims.y + tile_height * i });
		options[i].set_visibility(false);
		children.push_back(&options[i]);
	}

}