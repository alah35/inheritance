#include <iostream>
#include <cmath>
#include "../include/circle.h"

Circle::Circle(double inRadius = 3, Color inColor = RED, 
        int inX = 0, int inY = 0) {
    radius = inRadius;
    x = inX;
    y = inY;
    color = inColor;
}

void Circle::show_info() {
    std::cout << "Circle:" << std::endl << "R = " 
        << radius << std::endl;
    Figure::show_info();
}

double Circle::area() {
    return std::atan(1) * 4 * radius;
}

Rectangle Circle::circumscribing_rectangle() {
    Rectangle rect(radius, radius, color, x, y);
    return rect;
}


