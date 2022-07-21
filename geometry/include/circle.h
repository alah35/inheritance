#pragma once
#include "figure.h"
#include "rectangle.h"

class Circle: public Figure {
    
    private:
    double radius;

    public: 
    Circle(double inRadius = 3, Color inColor = RED, int inX = 0, int inY = 0); //default constructor
    double get_radius();
    void set_radius(double inRadius);
    void show_info();// we will reimplement this method for circle 
    double area();// virtual method of parent 
    Rectangle circumscribing_rectangle();
};
