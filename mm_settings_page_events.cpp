#include "mm_settings_page.hpp"
#include "window.hpp"

void fs_chckbx_event(Widget* parent, bool new_val) {
	delete window;
	if (new_val) window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "Test Window");
	else window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Test Window");
}