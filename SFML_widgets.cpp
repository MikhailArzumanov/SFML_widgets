#include <SFML/Graphics.hpp>
#include "environment.hpp"
#include "point.hpp"
#include <vector>
#include "widget.hpp"
#include "image_widget.hpp"

#define in :
#define of :
#define let auto

#define amount 1

std::vector<Widget*> widgets;
std::string paths[amount] = {
        "test.png",
};
sf::Texture test_texture[amount];
sf::Sprite test_sprite[amount];

void init_widgets();

void draw_widgets();
void draw_window();


void handle_events();

void tick();
void cycle();

void clear_memory();


int main(){
    init_widgets();
    cycle();
    clear_memory();

    return 0;
}

void init_widgets() {
    for (int i = 0; i < amount; i++) {
        test_texture[i].loadFromFile(paths[i]);
        test_sprite[i].setTexture(test_texture[i]);
    }
    widgets.push_back(new ImageWidget(&test_sprite[0], point{ 400,0 }));
    widgets[0]->add_child(new ImageWidget(&test_sprite[0], point{ 100,0 }));
}

void draw_widgets() {
    for (let widget of widgets)
        widget->draw(point{ 0,0 });
}
void draw_window() {
    window.clear();
    draw_widgets();
    window.display();
}


void handle_events() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void tick() {
    handle_events();
    draw_window();
}
void cycle() {
    while (window.isOpen())
        tick();
}

void clear_memory() {
    for (let widget of widgets)
        delete widget;
}