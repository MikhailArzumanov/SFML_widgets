#include "fonts.hpp"

void init_fonts() {
	for (int i = 0; i < fonts_amount; i++)
		fonts[i].loadFromFile(fonts_paths[i]);
}