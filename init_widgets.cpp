#include "main_programm.hpp"
#include "image_widget.hpp"
#include "widget_close.hpp"
#include "animated_close.hpp"
#include "environment.hpp"

void init_widgets() {
    widgets.push_back(new ImageWidget(sprites[0], point{ 400,0 }));
    widgets[0]->add_child(new ImageWidget(sprites[0], point{ 100,0 }));
    widgets.push_back(new WidgetClose(sprites[1], point{ 1000,0 }));

    auto animated_close = new AnimatedClose(point{ 1216, 0 });
     widgets.push_back(animated_close);
    animated.push_back(animated_close);
}