#include "slider_widget.hpp"


SliderWidget::SliderWidget(){}
SliderWidget::SliderWidget(Widget* parent_, void (*onchange_)(Widget*,float), point dims_, point p_) {
	percentage = 0;

	parent = parent_; onchange = onchange_; dims = dims_; p = p_;

	the_line   = new sf::RectangleShape(sf::Vector2f(dims.x, dims.y / 3));
	the_slider = new sf::RectangleShape(sf::Vector2f(38.f, dims.y));

	the_line->setFillColor(sf::Color::White);
	the_line->setFillColor(sf::Color::Cyan);
}
SliderWidget::SliderWidget(Widget* parent_, sf::Color slider_color, sf::Color line_color, void (*onchange_)(Widget*,float), point dims_, point p_) {
	percentage = 0;

	parent = parent_; onchange = onchange_; dims = dims_; p = p_;

	the_line   = new sf::RectangleShape(sf::Vector2f(dims.x, dims.y / 3));
	the_slider = new sf::RectangleShape(sf::Vector2f(38.f, dims.y));

	the_line->setFillColor(line_color);
	the_line->setFillColor(slider_color);
}