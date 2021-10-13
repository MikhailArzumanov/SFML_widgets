#include "main_programm.hpp"
#include "image_widget.hpp"
#include "widget_close.hpp"
#include "animated_close.hpp"
#include "environment.hpp"

void init_widgets() {
    widgets.push_back(new ImageWidget(sprites[0], point{400, 0}));

    auto animated_close = new AnimatedClose(point{1216, 0});
     widgets.push_back(animated_close);
    animated.push_back(animated_close);
}