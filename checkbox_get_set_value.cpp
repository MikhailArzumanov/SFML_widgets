#include "checkbox_widget.hpp"

bool CheckboxWidget::getValue() { return value; }
void CheckboxWidget::setValue(bool val) { value = val; on_change(); }