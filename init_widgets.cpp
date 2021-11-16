#include "animated_close.hpp"
#include "menu_widget.hpp"
#include "widgets.hpp"
#include "fonts.hpp"

#include <iostream>

void test_event(Widget* null) {
    std::cout << "Test output\n";
}

void init_widgets() {
    widgets.push_back(new AnimatedClose(point{1216, 0}));
    widgets.push_back(new MenuWidget());
}