#pragma once
#include "point.hpp"
#include <vector>


class Widget {
protected:
    point p;
    point dims;
    std::vector<Widget*> children;
    bool isVisible = true;

public:
    void set_visibility(bool visibility);
    void process_click(point mouse_shift, Widget*& result_pointer);
    virtual void draw(point shift);
    virtual void add_child(Widget* child);
    virtual void on_click() = 0;

    Widget();
    Widget(point p_, point dims_);
};