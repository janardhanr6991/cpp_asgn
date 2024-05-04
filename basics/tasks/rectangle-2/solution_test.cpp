#include <solution.h>

#include <gtest/gtest.h>
#include <sstream>
#include <iostream>

class RectangleTest : public ::testing::Test {
protected:
    std::stringstream ss;
    std::streambuf* orig_cout;

    void SetUp() override {
        orig_cout = std::cout.rdbuf();     // Save old buf
        std::cout.rdbuf(ss.rdbuf());      // Redirect std::cout to ss
    }

    void TearDown() override {
        std::cout.rdbuf(orig_cout);       // Reset std::cout to original
    }
};

// Test default constructor
TEST_F(RectangleTest, DefaultConstructor) {
    {
        Rectangle rect; // Scoped to trigger destructor before EXPECT_EQ
    }
    EXPECT_EQ(ss.str(), "Rectangle created with default dimensions.\nDeleting rectangle.\n");
    ss.str(""); // Clear stringstream for the next test
}

// Test parameterized constructor
TEST_F(RectangleTest, ParameterizedConstructor) {
    {
        Rectangle rect(2.0, 5.0);
    }
    EXPECT_EQ(ss.str(), "Rectangle created with custom dimensions.\nDeleting rectangle.\n");
    ss.str(""); // Clear stringstream for the next test
}

// Test printDimensions
TEST_F(RectangleTest, PrintDimensions) {
    Rectangle rect(5.0, 3.0);
    rect.printDimensions();
    EXPECT_EQ(ss.str(), "Rectangle created with custom dimensions.\nWidth: 5, Height: 3\n");
    ss.str(""); // Clear stringstream for the next test
}

// Additional tests for setWidth, setHeight, getArea, and getPerimeter
TEST_F(RectangleTest, SetWidthAndHeight) {
    Rectangle rect;
    rect.setWidth(10);
    rect.setHeight(20);
    rect.printDimensions();
    EXPECT_EQ(ss.str(), "Rectangle created with default dimensions.\nWidth: 10, Height: 20\n");
    ss.str("");
}

TEST_F(RectangleTest, GetAreaAndPerimeter) {
    Rectangle rect(4.0, 3.0);
    EXPECT_DOUBLE_EQ(rect.getArea(), 12.0);
    EXPECT_DOUBLE_EQ(rect.getPerimeter(), 14.0);
}

