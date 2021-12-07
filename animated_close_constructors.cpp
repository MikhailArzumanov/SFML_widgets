#include "animated_close.hpp"
#include "sprites.hpp"

namespace sfWgts {
	const int CLOSE_FRAMERATE = 23;

	AnimatedClose::AnimatedClose(point p_) {
		dims = { 64.f, 64.f };
		sprite = &(sprites[close_animated]);
		p = p_;

		sf::IntRect rect = sprite->getTextureRect();
		frames_amount = rect.width / dims.x;
		states_amount = rect.height / dims.y;
		framerate = CLOSE_FRAMERATE;

		framecounter = 0;
		current_frame = 0;
		current_state = 0;
	}
}