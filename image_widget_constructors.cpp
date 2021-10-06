#include "image_widget.hpp"
ImageWidget::ImageWidget(){}

ImageWidget::ImageWidget(point p_) {
    p = p_;
    dims = { 0,0 };
}
ImageWidget::ImageWidget(sf::Sprite* sprite_, point p_) {
    p = p_;
    sprite = sprite_;
    auto& rect = sprite->getTextureRect();
    dims = {(float)rect.width, (float)rect.height };
}