#include "main_programm.hpp"
#include "widgets.hpp"
#include "sprites.hpp"
#include "window.hpp"
#include "fonts.hpp"

#define let auto
#define of :

void clear_widgets() {
    for (let widget of widgets)
        delete widget;
}
void clear_sprites() {
    delete[] sprites;
    delete[] textures;
    delete[] textures_paths;
}
void clear_fonts() {
    delete[] fonts;
    delete[] fonts_paths;
}

void clear_memory() {
    ////////////////////////
    /**/clear_widgets();/**/
    ////////////////////////
    clear_sprites();
    clear_fonts();
    delete window;
}