# Assignment 1: Exceptions

## Objective
The objective of this assignment is to discover implement and handle exceptions in a function that calculates the square root of a number.

## Task
Create a function that throws an exception if it receives a negative number, since the square root of a negative number is not defined in the realm of real numbers.

Try to use this function in `main.cpp`

### Guidance:

1. Define a function double computeSquareRoot(double num) that throws an exception when num is negative.
2. Catch this exception in the main function and display an appropriate error message.

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

