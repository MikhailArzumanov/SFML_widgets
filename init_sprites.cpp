#include "main_programm.hpp"
#include "sprites.hpp"

void init_sprites() {
    for (int i = 0; i < sprites_amount; i++) {
        textures[i].loadFromFile(textures_paths[i]);
        sprites[i].setTexture(textures[i]);
    }
}