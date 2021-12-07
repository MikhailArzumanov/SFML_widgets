#include "main_programm.hpp"
#include "widgets.hpp"

#define let auto
#define of :

void widgets_process_click(sf::Event& event) {
    sfWgts::Widget* result = nullptr;
    sfWgts::point mouse = { event.mouseButton.x, event.mouseButton.y };
    for (let widget of widgets)
        widget->process_click(mouse, result);
    if (result != nullptr) {
        last_clicked_widget = result;
        result->on_click(mouse);
    }
}