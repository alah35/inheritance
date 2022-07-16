#pragma once
#include "figure.h"
#include "rectangle.h"

class Square: public Rectangle {
    
    public:
        Square(double inEdge = 5, Color inColor = GREEN, int inX = 0, int inY = 0);
        double get_edge();
        void set_edge(double inEdge);
        void show_info();
        double area();
        Rectangle circumscribing_rectangl();
};
