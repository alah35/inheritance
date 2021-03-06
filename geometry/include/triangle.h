#pragma once
#include "figure.h"
#include "rectangle.h"

class Triangle: public Figure {

    protected:
    double edge;

    public:
    Triangle(double inEdge = 3, Color inColor = BLUE, int inX = 0, int inY = 0); // default constructor 
    double get_edge();
    void set_edge(double inEdge);
    void show_info();
    double area(); //own realization
    Rectangle circumscribing_rectangle();
};
