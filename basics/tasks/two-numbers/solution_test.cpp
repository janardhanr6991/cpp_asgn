#include <gtest/gtest.h>
#include <sstream>
#include <solution.h>

class SolutionTest : public ::testing::Test {
protected:
    std::stringstream ss;
    std::streambuf* orig_cout;
    std::streambuf* orig_cin;

    // Sets up the test environment
    void SetUp() override {
        orig_cout = std::cout.rdbuf(ss.rdbuf());  // Redirect std::cout to ss
    }

    // Resets the test environment to its original state
    void TearDown() override {
        std::cout.rdbuf(orig_cout);  // Reset std::cout
        std::cin.rdbuf(orig_cin);    // Reset std::cin
    }

    // Helper function to redirect std::cin to a given input
    void redirectCinFromStream(std::istringstream& input_stream) {
        orig_cin = std::cin.rdbuf(input_stream.rdbuf());  // Redirect std::cin
    }
};

TEST_F(SolutionTest, HandlesValidInput) {
    std::string input_data = "8\n4\n";
    std::istringstream input_stream(input_data);
    redirectCinFromStream(input_stream);  // Use helper function

    solution();
    std::string expected_output = "Enter the first number: Enter the second number: Sum: 12\nDifference: 4\nProduct: 32\nQuotient: 2\n";
    EXPECT_EQ(ss.str(), expected_output);
}

TEST_F(SolutionTest, HandlesDivisionByZero) {
    std::string input_data = "10\n0\n";
    std::istringstream input_stream(input_data);
    redirectCinFromStream(input_stream);  // Use helper function

    solution();
    std::string expected_output = "Enter the first number: Enter the second number: Sum: 10\nDifference: 10\nProduct: 0\nDivision by zero error!\n";
    EXPECT_EQ(ss.str(), expected_output);
}

TEST_F(SolutionTest, HandlesInvalidInput) {
    std::string input_data = "abc\n10\n";
    std::istringstream input_stream(input_data);
    redirectCinFromStream(input_stream);  // Use helper function

    solution();
    std::string expected_output = "Enter the first number: Invalid input. Please enter a valid number.\n";
    EXPECT_EQ(ss.str(), expected_output);
}
