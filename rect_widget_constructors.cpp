#include "rect_widget.hpp"

RectWidget::RectWidget() {
	rect = new sf::RectangleShape({0,0});
}
RectWidget::RectWidget(point size_, point p_, sf::Color color_) {
	rect = new sf::RectangleShape({ size_.x, size_.y });
	rect->setFillColor(color_);
	p = p_;
}