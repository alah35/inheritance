#pragma once
#include "figure.h"

class Rectangle: public Figure {

    protected:
        double width;
        double length;

    public:
        Rectangle(double inWidth = 5, double inLength = 10, Color inColor = PURPLE, // defalut contructor
                int inX = 0, int inY = 0);
        double get_width();
        void set_width(double inWidth);
        double get_length();
        void set_length(double inLength);
        void show_info();
        double area();
        Rectangle *circumscribing_rectangl(); //return the pointer on himself
};
