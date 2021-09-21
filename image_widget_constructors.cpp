#include "image_widget.hpp"

ImageWidget::ImageWidget(point p_) {
    Widget::Widget(p_);
}
ImageWidget::ImageWidget(sf::Sprite* sprite_, point p_) {
    Widget::Widget(p_);
    sprite = sprite_;
}