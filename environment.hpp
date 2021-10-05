#pragma once
#include <SFML/Graphics.hpp>
#include "widget.hpp"

#define in :
#define of :
#define let auto

const int sprites_amount = 1;

extern std::vector<Widget*> widgets;
extern std::string* paths;
extern sf::Texture* textures;
extern sf::Sprite* sprites;