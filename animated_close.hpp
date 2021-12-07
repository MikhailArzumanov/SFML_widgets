#pragma once
#include "animated_widget.hpp"
namespace sfWgts {
	class AnimatedClose : public AnimatedWidget {
	public:
		AnimatedClose(point p_);
		void on_click(point mouse);
	};
}