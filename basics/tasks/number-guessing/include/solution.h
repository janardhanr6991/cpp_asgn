#pragma once
#include <bits/stdc++.h>

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
        numberToGuess=rand()%100+1;
    }

    void playGame() {
        // Write your solution here, assume that numberToGuees is already set
        // Below is incorrect solution, replace it with your solution
        int count=0,guess=0;
        while(numberToGuess!=guess && count<10){
            count++;
            std::cout<<"Guess the number (between 1 and 100): ";
            std::cin>>guess;
            if(numberToGuess==guess)std::cout<<"Correct! You took "<<count<<" guesses.\n";
            else if(guess<numberToGuess)std::cout<<"Too low!\n";
            else std::cout<<"Too high!\n";
        }
    }

    friend class SolutionTest; // for testing purposes
};

