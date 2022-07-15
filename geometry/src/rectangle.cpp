#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(double inWidth = 5, double inLength = 10, 
        Color inColor = PURPLE, int inX = 0, int inY = 0) {
    width = inWidth;
    length = inLength;
    color = inColor;
    x = inX;
    y = inY;
}

void Rectangle::show_info() {
    std::cout << "Rectangle:" << std::endl << "Width = "
        << width << std::endl << "Length = " << length;
    Figure::show_info();
}

double Rectangle::area() {
    return width * length;
}

Rectangle *Rectangle::circumscribing_rectangl() {
    return this;
}
