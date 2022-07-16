#pragma once
#include "figure.h"
#include "rectangle.h"

class Circle: public Figure {
    
    private:
    double radius;

    public: 
    Circle(double inRadius = 3, Color inColor = RED, int inX = 0, int inY = 0);
    double get_radius();
    void set_radius(double inRadius);
    void show_info();
    double area();
    Rectangle circumscribing_rectangle();
};
