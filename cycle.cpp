#include "main_programm.hpp"
#include "clock.hpp"
#include "window.hpp"


void to_cycle() {
    the_clock.restart();
    while (window->isOpen()) {
        float time = the_clock.getElapsedTime().asSeconds();
        if (time >= 1 / 60.f) {
            the_clock.restart();
            tick();
        }
    }
}