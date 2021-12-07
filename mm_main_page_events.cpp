#include "mm_main_page.hpp"
#include "window.hpp"
namespace sfWgts {
	void event_mm_leave(Widget* widget) {
		window->close();
	}
}