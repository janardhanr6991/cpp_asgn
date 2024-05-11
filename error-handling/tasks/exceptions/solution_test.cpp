#include "solution.h"
#include <gtest/gtest.h>

TEST(ComputeSquareRootTests, ThrowsOnNegativeInput) {
    EXPECT_THROW({
        computeSquareRoot(-1);
    }, std::domain_error);
}

TEST(ComputeSquareRootTests, NoThrowOnNonNegativeInput) {
    EXPECT_NO_THROW({
        computeSquareRoot(0);
    });

    EXPECT_NO_THROW({
        computeSquareRoot(25);
    });
}

TEST(ComputeSquareRootTests, CorrectCalculation) {
    double result;
    EXPECT_NO_THROW({
        result = computeSquareRoot(25);
    });
    ASSERT_NEAR(result, 5.0, 0.0001);

    EXPECT_NO_THROW({
        result = computeSquareRoot(0);
    });
    ASSERT_NEAR(result, 0.0, 0.0001);

    EXPECT_NO_THROW({
        result = computeSquareRoot(16);
    });
    ASSERT_NEAR(result, 4.0, 0.0001);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
