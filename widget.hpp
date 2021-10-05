#pragma once
#include "point.hpp"
#include <vector>


class Widget {
protected:
    point p;
    std::vector<Widget*> children;
    bool isVisible = true;

public:
    void set_visibility(bool visibility);
    virtual void draw(point shift);
    virtual void add_child(Widget* child);

    Widget();
    Widget(point p_);
};