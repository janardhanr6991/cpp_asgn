#include <solution.h>

#include <iostream>

int main() {
    std::cout << "Enter width: ";
    double width;
    std::cin >> width;
    std::cout << "Enter height: ";
    double height;
    std::cin >> height;
    Rectangle rect(width, height);
    rect.setHeight(height);
    rect.printDimensions();
    std::cout << "Area: " << rect.getArea() << std::endl;
    std::cout << "Perimeter: " << rect.getPerimeter() << std::endl;
    return 0;
}

