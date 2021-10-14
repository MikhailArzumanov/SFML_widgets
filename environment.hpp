#pragma once
#include <SFML/Graphics.hpp>
#include "widget.hpp"

extern const int sprites_amount;
extern const int   fonts_amount;

enum SpriteNames {
	pier,
	close_animated,
};

extern sf::Clock the_clock;
extern std::vector<Widget*> widgets;

extern std::string* fonts_paths;
extern sf::Font* fonts;

extern std::string* textures_paths;
extern sf::Texture* textures;
extern sf::Sprite* sprites;