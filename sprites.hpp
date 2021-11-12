#pragma once
#include <SFML/Graphics.hpp>

enum SpriteNames {
	pier,
	close_animated,
};
extern const int sprites_amount;
extern std::string* textures_paths;
extern sf::Texture* textures;
extern sf::Sprite* sprites;