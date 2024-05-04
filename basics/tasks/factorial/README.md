# Assignment 4: Functions and Recursion

## Objective
The objective of this assignment is to understand and implement functions and recursion in C++.

## Task
Write a recursive function to calculate the factorial of a number and a main function to test this recursive function.

On invalid input your function should return -1. For and while loops are not allowed

*Note*: Here you are not allowed to use `std::cin` or `std::cout` - main.cpp file already uses them to be able to interact with your solution. 

Example Output:

```
Enter a number: 5
Factorial of 5 is 120
```

Guidance:

Define a recursive function int factorial(int n) that returns the factorial of n.
Ensure the function handles corner cases properly (e.g., the factorial of 1 and others...).


## Checking solution
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

