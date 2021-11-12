#include "fonts.hpp"

const int fonts_amount = 1;

std::string* fonts_paths = new std::string[fonts_amount]{
    "fonts/bahnschrift.ttf",
};
sf::Font* fonts = new sf::Font[fonts_amount];