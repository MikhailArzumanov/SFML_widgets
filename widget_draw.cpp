#include "widget.hpp"

void Widget::draw(point shift) {
    for (let child of children)
        child->draw(shift + p);
}
