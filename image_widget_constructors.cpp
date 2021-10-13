#include "image_widget.hpp"
ImageWidget::ImageWidget(){}
ImageWidget::ImageWidget(sf::Sprite& sprite_, point p_) {
    p = p_;
    sprite = &sprite_;
    auto& rect = sprite->getTextureRect();
    dims = {(float)rect.width, (float)rect.height};
}