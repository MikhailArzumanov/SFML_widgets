#include "text_widget.hpp"
#include "window.hpp"

void TextWidget::draw(point shift) {
	if (!isVisible) return;
    (shift + p) >> text;
    window->draw(*text);
    Widget::draw(shift);
}