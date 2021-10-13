#pragma once
#include <SFML/Graphics.hpp>
#include "widget.hpp"

extern const int sprites_amount;

enum SpriteNames {
	pier,
	close_animated,
};

extern sf::Clock the_clock;
extern std::vector<Widget*> widgets;
extern std::string* paths;
extern sf::Texture* textures;
extern sf::Sprite* sprites;