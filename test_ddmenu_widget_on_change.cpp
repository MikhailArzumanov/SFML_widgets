#include "test_ddmenu_widget.hpp"
#include <iostream>

void TestDDMenuWidget::on_change(std::string new_val) {
	std::cout << new_val << "\n";
}