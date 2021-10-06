#include "widget_close.hpp"

WidgetClose::WidgetClose(sf::Sprite* sprite_, point p_) {
    p = p_;
    sprite = sprite_;
    auto& rect = sprite->getTextureRect();
    dims = { (float)rect.width, (float)rect.height };
}