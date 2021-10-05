#include "main_programm.hpp"
#include "window.hpp"
#include "environment.hpp"

#define in :
#define of :
#define let auto

void draw_widgets() {
    for (let widget of widgets)
        widget->draw(point{ 0,0 });
}
void draw_window() {
    window.clear();
    draw_widgets();
    window.display();
}