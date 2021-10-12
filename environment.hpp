#pragma once
#include <SFML/Graphics.hpp>
#include "i_animatable.hpp"
#include "widget.hpp"

const int sprites_amount = 3;

enum SpriteNames {
	pier,
	close,
	close_animated,
};

extern sf::Clock the_clock;
extern std::vector<Widget*> widgets;
extern std::vector<IAnimatable*> animated;
extern std::string* paths;
extern sf::Texture* textures;
extern sf::Sprite* sprites;