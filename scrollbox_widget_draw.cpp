#include "scrollbox_widget.hpp"

#define let auto
#define of :

#include <iostream>

void ScrollboxWidget::draw(point shift) {
    if (!isVisible) return;
    point scroll_shift = {0, percentage*content_height};
    for (let child of children)
        if (child != slider)
            child->draw(shift+p-scroll_shift);
        else {
            std::cout << shift.x << " " << shift.y << "\n";
            std::cout << p.x << " " << p.y << "\n\n\n";
            child->draw(shift + p);
        }
}