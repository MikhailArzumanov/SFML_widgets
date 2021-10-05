#include "image_widget.hpp"
#include "window.hpp"

void ImageWidget::draw(point shift) {
    (shift + p) > sprite;
    window.draw(*sprite);
    Widget::draw(shift);
}
void ImageWidget::draw() {
    draw(point{ 0, 0 });
}