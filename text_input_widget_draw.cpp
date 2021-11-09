#include "text_input_widget.hpp"
#include "window.hpp"

void TextInputWidget::draw(point shift) {
    if (!isVisible) return;
    (shift+p) >> background;
    window.draw(*background);
    Widget::draw(shift);
}