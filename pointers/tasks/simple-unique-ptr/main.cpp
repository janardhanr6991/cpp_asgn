#include "solution.h"
#include <iostream>

struct Test {
    int value;
    Test(int v) : value(v) {}
    void show() { std::cout << "Value: " << value << std::endl; }
};

int main() {
    SimpleUniquePtr<Test> ptr(new Test(10));
    ptr->show();
    std::cout << "The value is: " << (*ptr).value << std::endl;
    return 0;
}
