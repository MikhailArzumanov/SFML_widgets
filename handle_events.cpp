#include "main_programm.hpp"
#include "window.hpp"
#include "environment.hpp"

#define let auto
#define of :

Widget* last_clicked_widget;

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
        case sf::Event::KeyPressed:
            if (last_clicked_widget != nullptr)
                last_clicked_widget->keypressed(event);
            break;
        }
    }
}