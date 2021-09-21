#include "widget.hpp"

void Widget::add_child(Widget* child) {
    children.push_back(child);
}