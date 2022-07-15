#pragma once
#include "figure.h"
#include "rectangle.h"

class Circle: public Figure {

    double radius;

    public: 
    Circle(double inRadius, Color inColor, int inX, int inY);
    void show_info();
    virtual double area();
    Rectangle circumscribing_rectangle();
};
