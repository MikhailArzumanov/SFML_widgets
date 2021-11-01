#include "ddmenu_widget.hpp"

DDMenuWidget::DDMenuWidget(){}
DDMenuWidget::DDMenuWidget(int vals_amount_, std::string* vals_, std::string plchldr_,
	sf::Font* font_, sf::Color color, sf::Color bgrnd_color,
	int tile_height_, point dims_, point p_) {
	is_collapsed = true;

	dims = dims_; p = p_; tile_height = tile_height_; font = font_;
	vals = vals_; vals_amount = vals_amount_; plchldr = plchldr_;

	for (int i = 0; i < vals_amount; i++) {
		//...
	}

}