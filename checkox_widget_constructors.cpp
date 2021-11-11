#include "checkbox_widget.hpp"

CheckboxWidget::CheckboxWidget() {}

void init_lines(sf::Vertex*& left, sf::Vertex*& right, point dims, point p) {
	left = new sf::Vertex[2];
	left[0].position = sf::Vector2f({ p.x,p.y - dims.y / 4.f });
	left[1].position = sf::Vector2f({ p.x + dims.x / 2.f,p.y + dims.y / 2.f });
	right = new sf::Vertex[2];
	right[0].position = sf::Vector2f({ p.x + dims.x / 2.f,p.y + dims.y / 2.f });
	right[1].position = sf::Vector2f({ p.x + dims.x, p.y - dims.y / 2.f });
	for (int i = 0; i < 2; i++) {
		left[i].color = sf::Color::Black;
		right[i].color = sf::Color::Black;
	}
}
CheckboxWidget::CheckboxWidget(Widget* parent_, void (*onchange_)(Widget*, bool), point dims_, point p_) {
	dims = dims_; p = p_; parent = parent; onchange = onchange_;
	init_lines(left_line, right_line, dims, p);
	box = new sf::RectangleShape({ dims.x,dims.y });
}