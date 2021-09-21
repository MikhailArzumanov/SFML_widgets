#include <SFML/Graphics.hpp>
#include "environment.hpp"
#include "point.hpp"
#include <vector>
#include "widget.hpp"
#include "image_widget.hpp"

#define in :
#define of :
#define let auto

int main(){
    sf::Texture test_texture;
    test_texture.loadFromFile("test.png");

    sf::Sprite test_sprite(test_texture);

    let test_widget = ImageWidget(&test_sprite, point{0,0});
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        test_widget.draw();
        window.display();
    }

    return 0;
}
