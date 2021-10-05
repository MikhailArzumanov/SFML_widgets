#include "main_programm.hpp"
#include "environment.hpp"

void init_sprites() {
    for (int i = 0; i < sprites_amount; i++) {
        textures[i].loadFromFile(paths[i]);
        sprites[i].setTexture(textures[i]);
    }
}