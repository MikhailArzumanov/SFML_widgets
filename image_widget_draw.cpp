#include "image_widget.hpp"
#include "window.hpp"

void ImageWidget::draw(point shift) {
    if (!isVisible) return;
    (shift+p) >> sprite;
    window->draw(*sprite);
    Widget::draw(shift);
}