#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class NumberGuessingGame {
    int numberToGuess = 1;

    void setNumberToGuess(int number) { // for testing purposes
        numberToGuess = number;
    }

public:
    NumberGuessingGame() {
        // Set numberToGuess here to random number between 1 and 100
        // numberToGuess = random number between 1 and 100
        // For that lookup how to generate random numbers in C++
    }

    void playGame() {
        // Write your solution here, assume that numberToGuees is already set
        // Below is incorrect solution, replace it with your solution
        int guess;
        std::cin >> guess;
        if (numberToGuess == guess) {
            std::cout << "Correct! You took 1 guesses." << std::endl;
        } else {
            std::cout << ":(" << std::endl;
        }
    }

    friend class SolutionTest; // for testing purposes
};

