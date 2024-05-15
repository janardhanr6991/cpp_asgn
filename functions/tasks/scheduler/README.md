# Assignment 1: Scheduler

## Objective
The objective of this assignment is to practice with using `std::function`.

## Task
Implement a Scheduler class that stores tasks and can execute them in sequence.

It should have following interface:
1. `void addTask(std::function<void()> task)`;
2. `void runAll()`; - executes all stored tasks.

Experiment with your class in `main.cpp` file.

### Guidance:

1. Define the Scheduler class with methods to add and execute tasks.
2. Tasks should be stored as `std::function<void()>`.

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

