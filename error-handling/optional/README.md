# Assignment 2: Error Handling with std::optional

## Objective
The objective of this assignment is to learn to use std::optional for handling errors.

## Task
Implement a function that attempts to parse an integer from a string. Use std::optional to return the result.

Try to use this function in `main.cpp`

### Guidance:

1. Define a function std::optional<int> parseInteger(const std::string& str) that attempts to convert str into an integer.
2. Don't use `std::stoi` or other standart functions for parsing integer. Implement it by yourself and return empty optional in case of error

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

