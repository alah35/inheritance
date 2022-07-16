#pragma once
#include <string>

enum Color {
    NONE = 0,
    RED,
    GREEN,
    BLUE,
    PURPLE
};

class Figure {

    protected:
    int x;
    int y;
    Color color;

    public:
    std::string get_color();
    Color get_color(std::string inColor);
    virtual double area();
    void set_color(std::string inColor);
    int get_x();
    void set_x(int inX);
    int get_y();
    void set_y(int inY);
    void show_info();
};
