#include "animated_close.hpp"
#include "window.hpp"

void AnimatedClose::on_click(point mouse) {
	window.close();
}