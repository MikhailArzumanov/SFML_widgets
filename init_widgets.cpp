#include "main_programm.hpp"
#include "image_widget.hpp"
#include "animated_close.hpp"
#include "environment.hpp"

void init_widgets() {
    widgets.push_back(new ImageWidget(sprites[0], point{400, 0}));
    widgets.push_back(new AnimatedClose(point{1216, 0}));
}