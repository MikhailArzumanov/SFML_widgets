#include "progress_bar_widget.hpp"

ProgressBarWidget::ProgressBarWidget(){}
ProgressBarWidget::ProgressBarWidget(sf::Color bground_color, sf::Color bar_color, point paddings_, point dims_, point p_) {
	paddings = paddings_; dims = dims_; p = p_;
	bground = new sf::RectangleShape(sf::Vector2f(dims_.x, dims_.y));
	bground->setFillColor(bground_color);
	point bar_size = dims-paddings*2;
	the_bar = new sf::RectangleShape(sf::Vector2f(bar_size.x,bar_size.y));
	ratio = 1.0f;
}