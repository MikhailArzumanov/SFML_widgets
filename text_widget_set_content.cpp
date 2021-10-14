#include "text_widget.hpp"

void TextWidget::set_content(std::string content_) {
	content = content_;
	text->setString(content);
}