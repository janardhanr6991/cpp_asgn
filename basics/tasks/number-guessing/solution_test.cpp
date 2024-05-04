#include <solution.h>

#include "gtest/gtest.h"
#include <sstream>

class SolutionTest : public ::testing::Test {
protected:
    std::stringstream ss;
    std::streambuf* orig_cout;
    std::streambuf* orig_cin;

    void SetUp() override {
        orig_cout = std::cout.rdbuf(ss.rdbuf()); // Redirect std::cout to ss
    }

    void TearDown() override {
        std::cout.rdbuf(orig_cout);  // Reset std::cout
        std::cin.rdbuf(orig_cin);    // Reset std::cin
    }

    void setNumberToGuess(NumberGuessingGame& game, int number) {
        game.setNumberToGuess(number);
    }

    void redirectCinFromStream(std::istringstream& input_stream) {
        orig_cin = std::cin.rdbuf(input_stream.rdbuf()); // Redirect std::cin
    }
};

TEST_F(SolutionTest, CorrectGuessFirstTry) {
    NumberGuessingGame game;
    setNumberToGuess(game, 50);
    std::istringstream input("50\n");  // Simulate user entering "50"
    redirectCinFromStream(input);
    game.playGame();
    std::string expectedOutput = "Guess the number (between 1 and 100): Correct! You took 1 guesses.\n";
    ASSERT_EQ(ss.str(), expectedOutput);
}

TEST_F(SolutionTest, MultipleGuesses) {
    NumberGuessingGame game;
    setNumberToGuess(game, 75);
    std::istringstream input("50\n100\n75\n");  // Simulate guesses
    redirectCinFromStream(input);
    game.playGame();
    std::string expectedOutput = "Guess the number (between 1 and 100): Too low!\nGuess the number (between 1 and 100): Too high!\nGuess the number (between 1 and 100): Correct! You took 3 guesses.\n";
    ASSERT_EQ(ss.str(), expectedOutput);
}

TEST_F(SolutionTest, MinimumBoundaryGuess) {
    NumberGuessingGame game;
    setNumberToGuess(game, 1);
    std::istringstream input("1\n");
    redirectCinFromStream(input);
    game.playGame();
    std::string expectedOutput = "Guess the number (between 1 and 100): Correct! You took 1 guesses.\n";
    ASSERT_EQ(ss.str(), expectedOutput);
}

TEST_F(SolutionTest, MaximumBoundaryGuess) {
    NumberGuessingGame game;
    setNumberToGuess(game, 100);
    std::istringstream input("100\n");
    redirectCinFromStream(input);
    game.playGame();
    std::string expectedOutput = "Guess the number (between 1 and 100): Correct! You took 1 guesses.\n";
    ASSERT_EQ(ss.str(), expectedOutput);
}

TEST_F(SolutionTest, RepeatedGuesses) {
    NumberGuessingGame game;
    setNumberToGuess(game, 75);
    std::istringstream input("60\n60\n75\n");  // Repeated wrong guess
    redirectCinFromStream(input);
    game.playGame();
    std::string expectedOutput = "Guess the number (between 1 and 100): Too low!\nGuess the number (between 1 and 100): Too low!\nGuess the number (between 1 and 100): Correct! You took 3 guesses.\n";
    ASSERT_EQ(ss.str(), expectedOutput);
}

TEST_F(SolutionTest, ZeroAndNegativeInput) {
    NumberGuessingGame game;
    setNumberToGuess(game, 50);
    std::istringstream input("0\n-10\n50\n");  // Zero and negative inputs
    redirectCinFromStream(input);
    game.playGame();
    std::string expectedOutput = "Guess the number (between 1 and 100): Too low!\nGuess the number (between 1 and 100): Too low!\nGuess the number (between 1 and 100): Correct! You took 3 guesses.\n";
    ASSERT_EQ(ss.str(), expectedOutput);
}
