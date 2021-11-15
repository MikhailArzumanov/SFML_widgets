#include "sprites.hpp"

const int sprites_amount = 2;

std::string* textures_paths = new std::string[sprites_amount]{
    "textures/test.png",
    "textures/close_animated.png",
};
sf::Texture* textures = new sf::Texture[sprites_amount];
sf::Sprite*  sprites  = new sf::Sprite[sprites_amount];