#include <solution.h>

#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;
    std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl;
    return 0;
}
