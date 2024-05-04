# Assignment 1: Introduction to C++ and its Syntax

## Objective
The objective of this assignment is to familiarize yourself with basic C++ syntax and to write a simple program.

## Task
Write a C++ program that prints "Hello, World!" followed by your name on a new line. For example, the output should look like this:

```
Hello, World!
Your_Name
```

## Checking solution
1. Set up your C++ development environment if you haven’t already.
2. Modify file `include/hello_world.h` and function in it.
2. Use `std::cout` and std::cin for printing output to the console.
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
./build/hello_test
```
4. The tests should run, and you should see the output indicating whether they passed or failed.
