#include "main_programm.hpp"
#include "widgets.hpp"

#define let auto
#define of :

void widgets_tick() {
    for (let widget of widgets)
        widget->tick();
}
void tick() {
    handle_events();
    widgets_tick();
    draw_window();
}