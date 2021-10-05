#include "main_programm.hpp"
#include "window.hpp"

void tick() {
    handle_events();
    draw_window();
}
void to_cycle() {
    while (window.isOpen())
        tick();
}