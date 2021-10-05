#include "environment.hpp"

std::string* paths = new std::string[sprites_amount]{
    "test.png",
};
sf::Texture* textures = new sf::Texture[sprites_amount];
sf::Sprite*  sprites  = new sf::Sprite[sprites_amount];