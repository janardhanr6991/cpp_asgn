# Assignment 3: Template Specialization

## Objective
The objective of this assignment is to explore template specialization by creating a specialized behavior for a particular data type.

## Task
Given a struct
```cpp
struct AccessCounter {
    int count = 0;
}
```

Modify the `Holder` class template to have a specialized behavior when working with type `AccessCounter`. Each time `getValue` method is being called, count of `AccessCounter` value increases by one.

Try to use this class in `main.cpp`

### Guidance:

1. Continue using the Holder class template.
2. Add a specialization for AccessCounter that increases `counter` of holded object each time `getValue` is called.

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

