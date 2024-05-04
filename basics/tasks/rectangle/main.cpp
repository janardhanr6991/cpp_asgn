#include <solution.h>

#include <iostream>

int main() {
    Rectangle rect;
    std::cout << "Enter width: ";
    double number;
    std::cin >> number;
    rect.setWidth(number);
    std::cout << "Enter height: ";
    std::cin >> number;
    rect.setHeight(number);
    std::cout << "Area: " << rect.getArea() << std::endl;
    std::cout << "Perimeter: " << rect.getPerimeter() << std::endl;
    return 0;
}

