#include "widget.hpp"

#define let auto
#define of :

Widget::~Widget() {
	for(let child of children)
		delete child;
}