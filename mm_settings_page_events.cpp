#include "mm_settings_page.hpp"
#include "window.hpp"

#include <iostream>

void fs_chckbx_event(Widget* parent, bool new_val) {
	delete window;
	if (new_val) window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "Test Window");
	else window = new sf::RenderWindow(sf::VideoMode(1280, 720), "Test Window");
}
void dffclty_event(Widget* parent, std::string new_val) {
	std::cout << new_val;
}
void volume_event(Widget* parent, float new_val) {
	auto prnt = (MM_SettingsPage*)parent;
	prnt->set_volume(new_val);
}