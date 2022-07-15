#include <iostream>
#include "../include/figure.h"

Color Figure::get_color() {
    return color;
}

void Figure::set_color(Color inColor) {
    if (inColor <= 4 && inColor >= 0) 
    color = inColor;
    else 
        color = NONE;
}

int Figure::get_x() {
    return x;
}

void Figure::set_x(int inX) {
    x = inX;
}

int Figure::get_y() {
    return y;
}

void Figure::set_y(int inY) {
    y = inY;
}

void Figure::show_info() {
    std::cout << "Color: " << color << std::endl << "Center: "
        << "(" << x << ", " << y << ")" << std::endl;
}
