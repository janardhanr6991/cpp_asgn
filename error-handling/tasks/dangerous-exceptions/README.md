# Assignment 3: Dangerous exceptions

## Objective
The objective of this assignment is to understand problems of incorrect exception handling.

## Task
Identify the bug in the exception safety of the code and fix it.

### Guidance:

You are given class `Account` in `account.h` file. In `solution.h` you are given incorrect `transferFunds` function. Fix the issue with `transferFunds` such that tests will pass.

You are not allowed to modify `Account` class.

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

