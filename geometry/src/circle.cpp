#include <iostream>
#include <cmath>
#include "../include/circle.h"

Circle::Circle(double inRadius, Color inColor, 
        int inX, int inY) {
    radius = inRadius;
    x = inX;
    y = inY;
    color = inColor;
}

double Circle::get_radius() {
    return radius;
}

void Circle::set_radius(double inRadius) {
    radius = inRadius;
}

void Circle::show_info() {
    std::cout << "Circle:" << std::endl << "R = " 
        << radius << std::endl;
    Figure::show_info(); // it uses parent's implementation
}

double Circle::area() {
    return std::atan(1) * 4 * radius *radius;
}

Rectangle Circle::circumscribing_rectangle() {
    Rectangle rect(radius, radius, color, x, y); 
    return rect;
}


