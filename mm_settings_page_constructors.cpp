#include "mm_settings_page.hpp"
#include "fonts.hpp"
#include "menu_widget.hpp"
namespace sfWgts {
	MM_SettingsPage::MM_SettingsPage(Widget* parent_) {
		p = { 0,0 };
		dims = { 1080,720 };

		parent = parent_;
		main_menu_btn = new ButtonWidget(fonts[0], 12, sf::Color::Cyan, "main menu", menu_event_stom, parent,
			sf::Color::White, { 230,120 }, { 38,23 });

		scrollbox = new ScrollboxWidget(1000, { 40,500 }, { 1200,720 }, { 0,120 });

		scrollbox->add_child(new TextWidget(fonts[0], 38, sf::Color::White, "Volume: ", { 0,0 }, { 200,260 }));

		volume_slider = new SliderWidget(this, volume_event, { 230,120 }, { 400,230 });
		volume_bar = new ProgressBarWidget(sf::Color::White, sf::Color::Green, { 12,10 }, { 230,120 }, { 653,230 });

		scrollbox->add_child(new TextWidget(fonts[0], 38, sf::Color::White, "Fullscreen: ", { 0,0 }, { 200,415 }));

		checkbox = new CheckboxWidget(this, fs_chckbx_event, { 83,83 }, { 400,400 });

		std::string* vals = new std::string[3]{ "easy","normal","hard" };

		difficulty = new DDMenuWidget(3, vals, "choose the difficulty", fonts[0], 12, sf::Color::Cyan, sf::Color::White,
			this, dffclty_event, 23, { 230,38 }, { 400,500 });

		children.push_back(scrollbox);

		scrollbox->add_child(volume_slider);
		scrollbox->add_child(volume_bar);
		scrollbox->add_child(difficulty);
		scrollbox->add_child(checkbox);
		children.push_back(main_menu_btn);
	}
}