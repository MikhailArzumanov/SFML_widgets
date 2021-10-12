#include "main_programm.hpp"
#include "environment.hpp"
#include "window.hpp"

#define let auto
#define of :

void animate() {
    for (let elem of animated)
        elem->animate();
}

void tick() {
    handle_events();
    animate();
    draw_window();
}
void to_cycle() {
    while (window.isOpen())
        tick();
}