#include <iostream>
#include "../include/figure.h"

std::string Figure::get_color() {
   if (color == NONE)
       return "no color";
   if (color == RED)
       return "Red";
   if (color == GREEN)
       return "Green";
   if (color == BLUE)
       return "Blue";
   if (color == PURPLE)
       return "Purple";
   return "Wrong color";
}

Color Figure::get_color(std::string inColor) {
    if (inColor == "red" || inColor == "Red")
        return RED;
    if (inColor == "green" || inColor == "Green")
        return GREEN;
    if (inColor == "blue" || inColor == "Blue")
        return BLUE;
    if (inColor == "purple" || inColor == "Purple")
        return PURPLE;
    return NONE;
}

double Figure::area() {
    std::cerr << "You called parent's implementation" << std::endl;
    return 0;
}

void Figure::set_color(std::string inColor) {
    if (inColor == "red" || inColor == "Red")
        color = RED;
    if (inColor == "green" || inColor == "Green")
        color = GREEN;
    if (inColor == "blue" || inColor == "Blue")
        color = BLUE;
    if (inColor == "purple" || inColor == "Purple")
        color = PURPLE;
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
    std::cout << "Color: " << get_color() << std::endl << "Center: "
        << "(" << x << ", " << y << ")" << std::endl;
}
