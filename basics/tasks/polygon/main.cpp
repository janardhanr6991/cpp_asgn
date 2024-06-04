#include <solution.h>

#include <iostream>
#include <memory>

int main() {
    std::cout << "Which polygon you want to create? (1 - Rectangle, 2 - RightTriangle)\n";
    int n;
    std::cin >> n;
    std::cout << "Enter sides lengths:\n";
    double a, b;
    std::cin >> a >> b;
    std::unique_ptr<Polygon> poly;
    if (n == 1) { // Provide a support for creating RightTriangle as well
        poly = std::make_unique<Rectangle>(a, b);
    }
    else if(n==2){
        poly = std::make_unique<RightTriangle>(a, b);
    }
     else {
        std::cerr << "Invalid choice\n";
        return 1;
    }
    // std::cout << "Area of a polygon: " << use Polygon object here << '\n';
    return 0;
}

