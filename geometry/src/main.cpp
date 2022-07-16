#include <iostream>
#include <string>
#include "../include/figure.h"
#include "../include/circle.h"
#include "../include/triangle.h"
#include "../include/rectangle.h"
#include "../include/square.h"

int main() {
    std::string command;
    while(command != "exit" && command != "close") {
        std::cout << "Enter a command:" << std::endl;
        std::cin >> command;
        if (command == "circle") {
            double inR;
            std::string inColor;
            int inX, inY;
            std::cout << "Enter the Radius:" << std::endl;
            std::cin >> inR;
            std::cout << "Enter the color:" << std::endl;
            std::cin >> inColor;
            std::cout << "Enter the center coordinates of the circle (x,y):" << std::endl;
            std::cin >> inX >> inY;
            Circle circle(inR, circle.get_color(inColor), inX, inY);
            circle.show_info();
            std::cout << "The area of the circle = " << circle.area() << std::endl;
            Rectangle rect = circle.circumscribing_rectangle();
            rect.show_info();
        }

        if (command == "triangle") {
            double inEdge;
            std::string inColor;
            int inX, inY;
            std::cout << "Enter the Edge:" << std::endl;
            std::cin >> inEdge;
            std::cout << "Enter the color:" << std::endl;
            std::cin >> inColor;
            std::cout << "Enter the center coordinates of the triangle (x,y):" << std::endl;
            std::cin >> inX >> inY;
            Triangle triangle(inEdge, triangle.get_color(inColor), inX, inY);
            triangle.show_info();
            std::cout << "The area of the triangle = " << triangle.area() << std::endl;
            Rectangle rect = triangle.circumscribing_rectangle();
            rect.show_info();
        }

        if (command == "square") {
            double inEdge;
            std::string inColor;
            int inX, inY;
            std::cout << "Enter the Edge:" << std::endl;
            std::cin >> inEdge;
            std::cout << "Enter the color:" << std::endl;
            std::cin >> inColor;
            std::cout << "Enter the center coordinates of the square (x,y):" << std::endl;
            std::cin >> inX >> inY;
            Square square(inEdge, square.get_color(inColor), inX, inY);
            square.show_info();
            std::cout << "The area of the square = " << square.area() << std::endl;
            Rectangle rect = square.circumscribing_rectangl();
            rect.show_info();
        }

        if (command == "rectangle") {
            double inWidth, inLength;
            std::string inColor;
            int inX, inY;
            std::cout << "Enter the width:" << std::endl;
            std::cin >> inWidth;
            std::cout << "Enter the length:" << std::endl;
            std::cin >> inLength;
            std::cout << "Enter the color:" << std::endl;
            std::cin >> inColor;
            std::cout << "Enter the center coordinates of the rectangle (x,y):" << std::endl;
            std::cin >> inX >> inY;
            Rectangle rectangle(inWidth, inLength, rectangle.get_color(inColor), inX, inY);
            rectangle.show_info();
            std::cout << "The area of the rectangle = " << rectangle.area() << std::endl;
            Rectangle *rect = rectangle.circumscribing_rectangl();
            rect->show_info();
        }
    }

    return 0;
}
