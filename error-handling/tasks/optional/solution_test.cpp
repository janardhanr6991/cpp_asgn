#include "solution.h"
#include <gtest/gtest.h>

TEST(ParseIntegerTests, ReturnsValueForValidInput) {
    ASSERT_TRUE(parseInteger("123").has_value());
    EXPECT_EQ(123, parseInteger("123").value());

    ASSERT_TRUE(parseInteger("0").has_value());
    EXPECT_EQ(0, parseInteger("0").value());

    ASSERT_TRUE(parseInteger("-100").has_value());
    EXPECT_EQ(-100, parseInteger("-100").value());
}

TEST(ParseIntegerTests, ReturnsNulloptForInvalidInput) {
    EXPECT_FALSE(parseInteger("abc").has_value());
    EXPECT_FALSE(parseInteger("").has_value());
    EXPECT_FALSE(parseInteger("-").has_value());
    EXPECT_FALSE(parseInteger("123abc").has_value()) << "Valid number followed by characters should fail";
    EXPECT_FALSE(parseInteger("abc123").has_value()) << "Characters followed by valid number should fail";
    EXPECT_FALSE(parseInteger("123.456").has_value()) << "Non integer number should fail";
    EXPECT_FALSE(parseInteger("2147483648").has_value()) << "Out of range for int number should fail";
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
