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

int main(){

    std::string paths[amount] = {
        "test.png",
    };
    sf::Texture test_texture[amount];
    sf::Sprite test_sprite[amount];
    for (int i = 0; i < amount; i++) {
        test_texture[i].loadFromFile(paths[i]);
        test_sprite[i].setTexture(test_texture[i]);
    }

    widgets.push_back(new ImageWidget(&test_sprite[0], point{ 400,0 }));
    widgets[0]->add_child(new ImageWidget(&test_sprite[0], point{ 100,0 }));
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();

        for (let widget of widgets)
            widget->draw(point{0,0});
        window.display();
    }


    for (let widget of widgets)
        delete widget;
    return 0;
}
