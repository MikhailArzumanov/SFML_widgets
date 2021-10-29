#include "checkbox_widget.hpp"
#include "window.hpp"

void CheckboxWidget::draw(point shift){
	(shift+p) >> box;
	window.draw(*box);
	if(value){
		window.draw(left_line,  2, sf::Lines);
		window.draw(right_line, 2, sf::Lines);
	}
	Widget::draw(shift);
}