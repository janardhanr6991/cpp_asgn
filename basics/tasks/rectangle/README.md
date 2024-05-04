# Assignment 5: Introduction to OOP (Classes and Objects)

## Objective
The objective of this assignment is to practice defining and using classes and objects in C++.

## Task
Create a C++ class Rectangle to compute the area and perimeter of a rectangle.

*Note*: Here you are not allowed to use `std::cin` or `std::cout` - main.cpp file already uses them to be able to interact with your solution. 

### Example Output:

```
Enter width: 5
Enter height: 3
Area: 15
Perimeter: 16
```

### Guidance:

1. Define a class Rectangle with two private attributes: width and height.
2. Include public member functions:
3. `setWidth(double w)` and `setHeight(double h)` to set the rectangle's width and height.
4. `getArea()` to calculate and return the area of the rectangle.
5. `getPerimeter()` to calculate and return the perimeter of the rectangle.

## Instructions
1. Set up your C++ development environment if you haven’t already.
2. Modify file `include/solution.h` and function in it.
3. Compile and run your program to ensure it works correctly:
```shell
cmake -S . -B build
cmake --build build
./build/main
```

### Running the Tests
To run the tests, follow these steps:

1. Make sure you have CMake installed on your system.
2. Navigate to the directory containing your CMakeLists.txt file and open a terminal.
3. Run the following commands:
```shell
cmake -S . -B build
cmake --build build
./build/solution_test
```
4. The tests should run, and you should see the output indicating whether they passed or failed.

