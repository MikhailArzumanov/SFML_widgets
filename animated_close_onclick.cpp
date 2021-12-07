#include "animated_close.hpp"
#include "window.hpp"
namespace sfWgts {
	void AnimatedClose::on_click(point mouse) {
		window->close();
	}
}