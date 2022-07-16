#include "../include/rectangle.h"
#include <iostream>

Rectangle::Rectangle(double inWidth, double inLength, 
        Color inColor, int inX, int inY) {
    width = inWidth;
    length = inLength;
    color = inColor;
    x = inX;
    y = inY;
}

double Rectangle::get_width() {
    return width;
}

void Rectangle::set_width(double inWidth) {
    width = inWidth;
}

double Rectangle::get_length() {
    return length;
}

void Rectangle::set_length(double inLength) {
    length = inLength;
}

void Rectangle::show_info() {
    std::cout << "Rectangle:" << std::endl << "Width = "<< width 
        << std::endl << "Length = " << length << std::endl;
    Figure::show_info();
}

double Rectangle::area() {
    return width * length;
}

Rectangle *Rectangle::circumscribing_rectangl() {
    return this;
}
