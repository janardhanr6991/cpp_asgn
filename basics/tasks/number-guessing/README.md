# Assignment 3: Control Structures (if, for, while)

## Objective
The objective of this assignment is to understand and implement basic control structures in C++.

## Task
Write a program that implements a simple number guessing game.

The program randomly selects a number between 1 and 100.
The user is prompted to guess the number.
For each guess, the program tells the user if the guess is too high, too low, or correct.
The game continues until the user guesses the number correctly.
After the game ends, the program displays the number of guesses taken by the user.

### Example Output:


```
Guess the number (between 1 and 100): 50
Too low!
Guess the number (between 1 and 100): 75
Too high!
Guess the number (between 1 and 100): 62
Correct! You took 3 guesses.
```

### Guidance:

Use a while loop to keep the game running until the correct guess is made.
Use if statements to provide feedback about each guess.
Optionally, use a for loop to limit the number of guesses to 10.


## Instructions
1. Set up your C++ development environment if you haven’t already.
2. Modify file `include/solution.h` and function in it.
3. Use `std::cout` and std::cin for printing output to the console.
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

