#include "animated_close.hpp"
#include "main_programm.hpp"
#include "image_widget.hpp"
#include "text_widget.hpp"
#include "environment.hpp"

void init_widgets() {
    widgets.push_back(new ImageWidget(sprites[0], point{400, 0}));
    widgets.push_back(new AnimatedClose(point{1216, 0}));
    auto t_widget = new TextWidget(fonts[0], 23, sf::Color::Cyan, {18,48}, {38,19});
    t_widget->set_content("test text");
    widgets.push_back(t_widget);
}