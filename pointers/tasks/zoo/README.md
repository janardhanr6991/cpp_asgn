# Assignment 4: Polymorphism and Pointers in C++

## Objective
The objective of this assignment is to learn how to use pointers and polymorphism effectively by implementing a simple zoo simulation using existing class hierarchy.
## Task
Using `Animal` class hierarchy implement Zoo class with certain functionality:
  - Store all animal objects in one `vector`.
  - Implement methods to add animals and display information about all animals.
  - Ensure proper memory management to prevent memory leaks.

Refer to `animal.h` for classes definition.

Modify main.cpp after implementing `Zoo`.


### Guidance:

Use `std::unique_ptr` to safely manage memory.

Create methods:
- `addAnimal(Animal* animal)` accepts animal and stores it inside `vector`
- `showAllAnimals()` - prints info about an animal and makes sounds of animals


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

