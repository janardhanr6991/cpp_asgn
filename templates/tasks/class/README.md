# Assignment 2: Class Template

## Objective
The objective of this assignment is to get try templating simple class.

## Task
Create a class template named `Holder` that stores a single value and provides access to the value with a getter method.

Try to use this class in `main.cpp`

### Guidance:

1. Define a template class `Holder` that encapsulates a single variable.
2. Implement a constructor, a getter method `getValue()`, and a setter method `setValue()`.

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

