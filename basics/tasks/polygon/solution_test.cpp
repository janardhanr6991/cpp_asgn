#include <solution.h>

#include <gtest/gtest.h>

TEST(PolygonTest, RectangleArea) {
    Rectangle rect(5, 3);
    Polygon& polyRef = rect;
    EXPECT_DOUBLE_EQ(polyRef.getArea(), 15);  // Using base class reference to call derived class method
}

TEST(PolygonTest, RightTriangleArea) {
    RightTriangle tri(4, 5);
    Polygon& polyRef = tri;
    EXPECT_DOUBLE_EQ(polyRef.getArea(), 10);  // Using base class reference to call derived class method
}
