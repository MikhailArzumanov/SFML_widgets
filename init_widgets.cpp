#include "animated_close.hpp"
#include "main_programm.hpp"
#include "button_widget.hpp"
#include "image_widget.hpp"
#include "rect_widget.hpp"
#include "text_widget.hpp"
#include "environment.hpp"

void init_widgets() {
    widgets.push_back(new ImageWidget(sprites[0], point{400, 0}));
    widgets.push_back(new AnimatedClose(point{1216, 0}));
    widgets.push_back(new ButtonWidget(fonts[0], 12, sf::Color::Blue, "abcdefgfedcba",
                                        sf::Color::Cyan, { 120,83 }, { 0,0 }));
}