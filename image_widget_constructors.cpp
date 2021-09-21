#include "image_widget.hpp"

ImageWidget::ImageWidget(point p_) {
    p = p_;
}
ImageWidget::ImageWidget(sf::Sprite* sprite_, point p_) {
    p = p_;
    sprite = sprite_;
}