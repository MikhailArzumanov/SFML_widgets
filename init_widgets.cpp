#include "animated_close.hpp"
#include "main_programm.hpp"
#include "button_widget.hpp"
#include "image_widget.hpp"
#include "rect_widget.hpp"
#include "text_widget.hpp"
#include "menu_widget.hpp"
#include "widgets.hpp"
#include "widget.hpp"

#include <iostream>

void test_event(Widget* null) {
    std::cout << "Test output\n";
}

void init_widgets() {
    widgets.push_back(new AnimatedClose(point{1216, 0}));
    widgets.push_back(new MenuWidget());
}