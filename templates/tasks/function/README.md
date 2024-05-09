# Assignment 1: Function Template

## Objective
The objective of this assignment is to discover what templates are and get experience with templating functions.

## Task
Write a template function named `Max` that accepts two arguments of the same type and returns the greater of the two.

### Guidance:

1. Define a template function `Max` that compares two parameters.
2. The function should be able to compare integers, floats, characters, and any other type that has operator >.

## Instructions
1. Set up your C++ development environment if you haven’t already.
2. Modify file `solution.h` and function in it.
3. Modify file `main.cpp`.
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

