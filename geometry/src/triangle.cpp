#include <iostream>
#include <cmath>
#include "../include/triangle.h"

Triangle::Triangle(double inEdge, Color inColor,
        int inX, int inY) {
    edge = inEdge;
    color = inColor;
    x = inX;
    y = inY;
}

double Triangle::get_edge() {
    return edge;
}

void Triangle::set_edge(double inEdge) {
    edge = inEdge;
}

void Triangle::show_info() {
    std::cout << "Triangle:" << std::endl << "Edge = " 
        << edge << std::endl;
    Figure::show_info();
}

double Triangle::area() {
    return edge * edge * std::sqrt(3) / 4;
}

Rectangle Triangle::circumscribing_rectangle() {
    Rectangle rect( (sqrt(3)/2) * edge, edge, color, x, y); 
    return rect;
}

