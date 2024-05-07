# Assignment 2: Simple Vector

## Objective
The objective of this assignment is to get understanding of how dynamic arrays such as std::vector work.

## Task
Create a class IntVector that mimics some of the basic functionalities of the std::vector for storing integers. Implement member functions for adding elements, accessing elements, and getting the size of the vector.

Class Specifications:
1. Constructor: `IntVector(size_t size)`
- The constructor initializes the vector with zero size.
2. Member Functions
- `void push_back(int value)`: Adds a new element at the end of the vector.
- `int at(size_t index)`: Returns the element at the specified index. Throws `std::out_of_range` if the index is out of bounds.
- `size_t size()`: Returns the current number of elements in the vector.

### Guidance:

Use new and delete to manage memory.

Learn how to implement `push_back` efficiently.

Remember about memory leaks!

## Instructions
1. Set up your C++ development environment if you haven’t already.
2. Modify file `include/solution.h` and function in it.
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

