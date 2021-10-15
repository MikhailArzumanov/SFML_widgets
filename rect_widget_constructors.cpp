#include "rect_widget.hpp"

RectWidget::RectWidget() {
	rect = new sf::RectangleShape({0,0});
}
RectWidget::RectWidget(point dims_, point p_, sf::Color color_) {
	rect = new sf::RectangleShape({ dims_.x, dims_.y });
	rect->setFillColor(color_);
	p = p_;
}