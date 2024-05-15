#include "solution.h"
#include <gtest/gtest.h>
#include <string>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

TEST(RandomizerTests, ReturnsExpectedResultsWithFixedSeed) {
    auto randomized_add = randomize(add, 42);
    auto randomized_mult = randomize(multiply, 10);

    int result1_add = randomized_add(5);
    int result2_add = randomized_add(10);

    EXPECT_EQ(result1_add, 8);
    EXPECT_EQ(result2_add, 15);

    int result1_mult = randomized_mult(5);
    int result2_mult = randomized_mult(10);

    EXPECT_EQ(result1_mult, 25);
    EXPECT_EQ(result2_mult, 20);
}

TEST(RandomizerTests, ReturnsExpectedResultsWithDefaultSeed) {
    auto randomized_add = randomize(add);

    int result1 = randomized_add(5);
    int result2 = randomized_add(10);

    EXPECT_EQ(result1, 9);
    EXPECT_EQ(result2, 14);
}

TEST(RandomizerTests, TestDistribution) {
    const int n_trials = 10000;
    std::map<int, int> counts;
    std::random_device rd;
    auto randomized_add = randomize(add, rd());

    for (int i = 0; i < n_trials; ++i) {
        int result = randomized_add(0);
        counts[result]++;
    }

    for (int i = 1; i <= 6; ++i) {
        double frequency = static_cast<double>(counts[i]) / n_trials;
        EXPECT_NEAR(frequency, 1.0 / 6, 0.01);
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
