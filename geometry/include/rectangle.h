#pragma once
#include "figure.h"

class Rectangle: public Figure {

    protected:
        double width;
        double length;

    public:
        Rectangle(double inWidth, double inLength, Color inColor,
                int inX, int inY);
        void show_info();
        virtual double area();
        Rectangle *circumscribing_rectangl();
};
