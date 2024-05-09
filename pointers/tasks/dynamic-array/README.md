# Assignment 1: Dynamic Array Manipulation Functions

## Objective
The objective of this assignment is to get experience with allocating and managing dynamic memory.

## Task
1. `createArray`: This function allocates a dynamic array of integers with a given size and initializes it with a specific value.
Signature: `int* createArray(size_t size, int initialValue)`;
2. `copyArray`: This function creates a deep copy of a given integer array.
Signature: `int* copyArray(const int* source, size_t size)`;
3. `reverseArray`: This function reverses an array in place.
Signature: `void reverseArray(int* array, size_t size)`;
4. `deleteArray`: This function deallocates array.
Signature: `void deleteArray(int* array)`;

Modify `main.cpp` to use your functions


### Guidance:

Use new and delete to manage memory.

Read about [address sanitizer](https://saliktariq.medium.com/detect-and-fix-c-memory-leaks-with-addresssanitizer-85f61e6ba852).

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

