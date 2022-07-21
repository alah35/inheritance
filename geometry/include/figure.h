#pragma once
#include <string>

enum Color {
    NONE = 0,
    RED,
    GREEN,
    BLUE,
    PURPLE
};

class Figure { //abstract class for geometry figures 

    protected: //common members for all figures
    int x;
    int y;
    Color color;

    public: // common methods
    std::string get_color();
    Color get_color(std::string inColor); // transform string to Color type;
    virtual double area(); // virtual method which implements in child classes
    void set_color(std::string inColor);
    int get_x();
    void set_x(int inX);
    int get_y();
    void set_y(int inY);
    void show_info();
};
