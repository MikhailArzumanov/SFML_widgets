#include "image_widget.hpp"

void ImageWidget::draw(point shift) {
    Widget::draw(shift);
    (shift + p) > sprite;
    window.draw(*sprite);
}
void ImageWidget::draw() {
    draw(point{ 0, 0 });
}