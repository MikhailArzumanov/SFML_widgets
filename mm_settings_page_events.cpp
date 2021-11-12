#include "mm_settings_page.hpp"
#include "window.hpp"

void fs_chckbx_event(Widget* parent, bool new_val) {
	if (new_val) window.setSize(sf::Vector2u{ 1920,1080 });
	else window.setSize(sf::Vector2u{ 1280,720 });
}