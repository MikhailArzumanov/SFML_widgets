#include "widget.hpp"

#define in :
#define of :
#define let auto

void Widget::draw(point shift) {
    for (let child of children)
        child->draw(shift + p);
}
