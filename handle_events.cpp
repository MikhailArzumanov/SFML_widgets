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
            Widget* result = nullptr;
            point mouse = { event.mouseButton.x, event.mouseButton.y };
            for (let widget of widgets)
                widget->process_click(mouse, result);
            if (result != nullptr)
                result->on_click();
            break;
        }
    }
}