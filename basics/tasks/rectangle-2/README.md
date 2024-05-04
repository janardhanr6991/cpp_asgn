# Assignment 6: Constructors, Destructors, and Access Specifiers

## Objective
The objective of this assignment is to deepen understanding of constructors, destructors, and access control in C++.

## Task
Enhance the `Rectangle` class by adding constructors, a destructor, and experimenting with access specifiers.

### Example Output:

```
Rectangle created with custom dimensions.
Width: 5, Height: 3
Area: 15
Perimeter: 16
Deleting rectangle.
```

### Guidance:

1. Add a default constructor that initializes width and height to 1.0.
2. Add a parameterized constructor that allows setting initial values of width and height.
3. Implement a destructor that might, for example, just print a message saying the rectangle is being deleted.
4. Add an example of using const with member functions, such as a printDimensions() function that prints width and height but does not modify them.

## Instructions
1. Set up your C++ development environment if you haven’t already.
2. Modify file `include/solution.h` and function in it.
3. Use `std::cout` in constructor and destructor.
4. Compile and run your program to ensure it works correctly:
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

