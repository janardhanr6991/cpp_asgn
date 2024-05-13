# Assignment 1: Promise

## Objective
The objective of this assignment is to understand how `std::future` and `std::promise` work together.

## Task
Create a class `TokenHolder` which will hold a token of type `std::string`.

It should have following interface:
1. `void setToken(const std::string& token)` - sets token into holder
2. `std::future<std::string> getToken()` - returns a future for a token. Following conditions apply for this method:
- If token is not in the holder, future should not be ready until next `setToken` call.
- Each `setToken` call corresponds to only one `getToken` call. Meaning that getting token from a holder - removes it. Example:
```cpp
std::future<std::string> fut;
fut = getToken();
bool isReady = fut.wait_for(0s); // isReady == false
setToken("George");
std::string s1 = fut.get(); // s1 = "George"
setToken("Bush");
fut = getToken();
std::string s2 = fut.get(); // s2 = "Bush"
```
- If `getToken()` called two consecutive times on `TokenHolder` that doesn't hold token - it should throw `std::logical_error`

Experiment with your class in `main.cpp` file.

### Guidance:

Hold `std::promise` as a class field and produce `std::future` when needed (maybe use `std::optional`?). Also you need to track whether token was requested or not.

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

