#include <solution.h>

#include <gtest/gtest.h>

TEST(FactorialFunction, HandlesPositiveInput) {
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(0), 1);
}

TEST(FactorialFunction, HandlesNegativeInput) {
    EXPECT_EQ(factorial(-1), -1);
    EXPECT_EQ(factorial(-5), -1);
}

