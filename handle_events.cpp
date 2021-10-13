#include "main_programm.hpp"
#include "window.hpp"
#include "environment.hpp"

#define let auto
#define of :

void handle_events() {
    sf::Event event;
    while (window.pollEvent(event)) {
        switch (event.type) {
        case sf::Event::Closed:
            window.close();
            break;
        case sf::Event::MouseButtonPressed:
            widgets_process_click(event);
            break;
        }
    }
}