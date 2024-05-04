#include <solution.h>

#include <gtest/gtest.h>
#include <sstream>

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

TEST_F(SolutionTest, QuotientRegularDivision) {
    std::string input_data = "20\n4\n";
    std::istringstream input_stream(input_data);
    redirectCinFromStream(input_stream);

    solution();
    std::string expected_output = "Enter the first number: Enter the second number: Sum: 24\nDifference: 16\nProduct: 80\nQuotient: 5\n";
    EXPECT_EQ(ss.str(), expected_output);
}

TEST_F(SolutionTest, QuotientFloatingPointResult) {
    std::string input_data = "10\n4\n";
    std::istringstream input_stream(input_data);
    redirectCinFromStream(input_stream);

    solution();
    std::string expected_output = "Enter the first number: Enter the second number: Sum: 14\nDifference: 6\nProduct: 40\nQuotient: 2.5\n";
    EXPECT_EQ(ss.str(), expected_output);
}

TEST_F(SolutionTest, QuotientNegativeDivision) {
    std::string input_data = "10\n-2\n";
    std::istringstream input_stream(input_data);
    redirectCinFromStream(input_stream);

    solution();
    std::string expected_output = "Enter the first number: Enter the second number: Sum: 8\nDifference: 12\nProduct: -20\nQuotient: -5\n";
    EXPECT_EQ(ss.str(), expected_output);
}

TEST_F(SolutionTest, QuotientWithDecimalNumbers) {
    std::string input_data = "5.5\n1.1\n";
    std::istringstream input_stream(input_data);
    redirectCinFromStream(input_stream);

    solution();
    std::string expected_output = "Enter the first number: Enter the second number: Sum: 6.6\nDifference: 4.4\nProduct: 6.05\nQuotient: 5\n";
    EXPECT_EQ(ss.str(), expected_output);
}
