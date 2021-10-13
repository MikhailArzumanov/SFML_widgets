#include "widget.hpp"

#define let auto
#define of	:

void Widget::tick(){
	for (let child of children)
		child->tick();
}