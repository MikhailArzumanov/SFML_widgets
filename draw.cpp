#include "main_programm.hpp"
#include "window.hpp"
#include "widgets.hpp"

#define of :
#define let auto

void draw_widgets() {
    for (let widget of widgets)
        widget->draw(sfWgts::point{ 0,0 });
}
void draw_window() {
    window->clear();
    ///////////////////////
    /**/draw_widgets();/**/
    ///////////////////////
    window->display();
}