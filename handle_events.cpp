#include "main_programm.hpp"
#include "window.hpp"

void handle_events() {
    sf::Event event;
    while (window.pollEvent(event)) {
        switch (event.type) {
        case sf::Event::Closed:
            window.close();
            break;
        case sf::Event::MouseButtonPressed:
            /// process mouse button down
            break;
        }
    }
}