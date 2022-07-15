#pragma once

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
    virtual double area() = 0;
    Color get_color();
    void set_color(Color inColor);
    int get_x();
    void set_x(int inX);
    int get_y();
    void set_y(int inY);
    void show_info();
};
