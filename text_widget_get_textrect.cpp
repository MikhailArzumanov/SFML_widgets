#include "text_widget.hpp"

sf::FloatRect TextWidget::getTextRect() {
	return text->getLocalBounds();
}