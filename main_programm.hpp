#pragma once
#include <SFML/Graphics.hpp>

void init_widgets();
void init_sprites();
void init_fonts();
void init();

void draw_widgets();
void draw_window();

void widgets_process_click(sf::Event& event);
void handle_events();

void tick();
void to_cycle();

void clear_memory();