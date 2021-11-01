#include "ddmenu_option_widget.hpp"

DDMenuOptionWidget::DDMenuOptionWidget(sf::Font& font_, int font_size_, sf::Color color, sf::Color bgrnd_color,
	int index_, std::string value_, DDMenuWidget* parent_, point dims_, point p_) {
	point pos = dims_ / 2.f;
	text = new TextWidget(font_, font_size_, color, value_, {0, 0}, pos);
	sf::FloatRect frect = text->getTextRect();
	pos -= point{ frect.width,frect.height } / 2.f;
	text->set_p(pos);

	rect = new sf::RectangleShape({dims_.x, dims_.y});
	rect->setFillColor(bgrnd_color);
	p = p_;

	dims = dims_;

	add_child(text);

	onclick = nullptr;

	parent = parent_;

	value = value_; index = index_;
}