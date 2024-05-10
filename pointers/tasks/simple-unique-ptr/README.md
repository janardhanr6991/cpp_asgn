# Assignment 3: Simple Unique Pointer

## Objective
The objective of this assignment is to Understand and implement resource management in C++ by creating a minimalistic version of the `std::unique_ptr`.

## Task
Develop a class template, SimpleUniquePtr, that mimics the basic functionality of the C++ standard library's std::unique_ptr. The primary goal is to enforce exclusive ownership of dynamically allocated memory through your custom smart pointer class.

Class Specifications:
1. Constructor: Initialize the pointer with a raw pointer to dynamically allocated memory.
2. Destructor: Automatically delete the object when the SimpleUniquePtr goes out of scope.
3. Move Semantics: Implement move constructor and move assignment operator. Copy semantics should be disabled to ensure uniqueness.
4. Dereference and Access Operations: Provide operator* and operator-> for accessing the underlying object.
5. `get()` method: implement a method to get underlying pointer to object

### Guidance:

Use templates to support any type of pointer.


## Instructions
1. Set up your C++ development environment if you haven’t already.
2. Modify file `solution.h` and function in it.
3. Modify `main.cpp`.
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

