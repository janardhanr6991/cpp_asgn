# Assignment 2: Timer

## Objective
The objective of this assignment is to implement a simple timer interface, using `std::chrono` and `std::future`.

## Task
Create a class `Timer` with following interface:

1. Constructor `Timer(std::chrono::seconds duration)` which will start count for `duration` of seconds
2. `std::future<void> getTrigger()` will return future that will become available after `duration` of seconds after `Timer` construction. If you call `getTrigger` 2 times it should throw `std::logical_error`
3. `void tick()` will check if duration of timer has passed. If duration has passed - the future from `getTrigger()` should become available.

Example usage:
```cpp
Timer timer(5s);
std::future<void> trigger = timer.getTrigger() 
... 1 second passed
timer.tick();
bool isReady = trigger.wait_for(0s); // isReady == false
... 4 seconds passed
timer.tick();
isReady = trigger.wait_for(0s); // isReady == true
```

Experiment with your class in `main.cpp` file.

### Guidance:

Hold `std::promise`, find a place where you can set value. Find a way to check how much time has passed.

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

