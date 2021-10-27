#include "animated_close.hpp"
#include "main_programm.hpp"
#include "button_widget.hpp"
#include "slider_widget.hpp"
#include "image_widget.hpp"
#include "rect_widget.hpp"
#include "text_widget.hpp"
#include "environment.hpp"

#include <iostream>

void test_event(Widget* nullwidget) {
    std::cout << "Test output\n";
}

void init_widgets() {
    widgets.push_back(new ImageWidget(sprites[0], point{400, 0}));
    widgets.push_back(new AnimatedClose(point{1216, 0}));
    widgets.push_back(new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "test button", test_event, nullptr, 
                                        sf::Color::White, { 325,313 }, { 12,12 }));

    widgets.push_back(new SliderWidget(nullptr, nullptr, { 230,120 }, { 12,340 }));
}