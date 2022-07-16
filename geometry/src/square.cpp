#include "../include/square.h"
#include <iostream>

Square::Square(double inEdge, Color inColor, 
        int inX, int inY) {
    width = inEdge;
    length = inEdge;
    color = inColor;
    x = inX;
    y = inY;
}

double Square::get_edge() {
    return width;
}

void Square::set_edge(double inEdge) {
    width = length = inEdge;
}

void Square::show_info() {
    std::cout << "Square:" << std::endl << "Edge = " 
        << width << std::endl;
    Figure::show_info();
}

double Square::area() {
    return Rectangle::area();
}

Rectangle Square::circumscribing_rectangl() {
    Rectangle rect = *this;
    return rect;
}

