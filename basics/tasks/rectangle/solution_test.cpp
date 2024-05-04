#include <solution.h>

#include <gtest/gtest.h>

class RectangleTests : public ::testing::Test {
protected:
    Rectangle rect;  // Rectangle object for testing
};

// Test setting and getting width and height.
TEST_F(RectangleTests, SetAndGetDimensions) {
    rect.setWidth(5);
    rect.setHeight(10);
    ASSERT_DOUBLE_EQ(rect.getArea(), 50);
    ASSERT_DOUBLE_EQ(rect.getPerimeter(), 30);
}

// Test negative inputs for width and height.
TEST_F(RectangleTests, HandleNegativeInputs) {
    rect.setWidth(-1);
    rect.setHeight(-1);
    ASSERT_DOUBLE_EQ(rect.getArea(), 0);  // Assuming area should be 0 for negative dimensions
    ASSERT_DOUBLE_EQ(rect.getPerimeter(), 0);  // Assuming perimeter should be 0 as well
}

TEST_F(RectangleTests, HandleZeroInputs) {
    rect.setWidth(0);
    rect.setHeight(0);
    ASSERT_DOUBLE_EQ(rect.getArea(), 0);
    ASSERT_DOUBLE_EQ(rect.getPerimeter(), 0);
}

TEST_F(RectangleTests, HandleLargeInputs) {
    rect.setWidth(1e6);
    rect.setHeight(1e6);
    ASSERT_DOUBLE_EQ(rect.getArea(), 1e12);
    ASSERT_DOUBLE_EQ(rect.getPerimeter(), 4e6);
}
