# Assignment 5: Simple Shared Pointer

## Objective
The objective of this assignment is to understand reference counting in C++ by implementing a basic version of the `std::shared_ptr`.

## Task
Develop a class template, `SimpleSharedPtr`, that mimics the essential functionality of the C++ standard library's `std::shared_ptr`. The main feature of this smart pointer is that it allows multiple pointers to share ownership of a single object, with the object being destroyed automatically once all shared pointers are out of scope.


Class Specifications:
1. Reference Counting: Implement reference counting internally to manage memory correctly when multiple `SimpleSharedPtr`s share the same object.
2. Constructor: Should be able to wrap a raw pointer.
3. Destructor: Should decrease the reference count and delete the managed object if the count reaches zero.
4. Copy Semantics: Implement copy constructor and copy assignment operator, both of which should increase the reference count.
5. Dereference and Access Operations: Provide operator* and operator-> to access the underlying object.
6. `get()` method: implement a method to get underlying pointer to object

### Guidance:

All objects need to have same counter, think about how to implement it:
1. You want two or more `SimpleSharedPtr` to have one counter, meaning that if you update it in one object - counter gets automatically updated in other objects. Maybe use references or pointers?
2. Think about managing memory for this counter


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

