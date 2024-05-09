#include "solution.h"
#include <gtest/gtest.h>
#include <cmath>


TEST(MaxFunction, HandlesInteger) {
    ASSERT_EQ(3, Max(1, 3));
    ASSERT_EQ(5, Max(5, 2));
}

TEST(MaxFunction, HandlesFloat) {
    ASSERT_FLOAT_EQ(3.5f, Max(1.5f, 3.5f));
    ASSERT_FLOAT_EQ(2.3f, Max(2.3f, 1.1f));
}

TEST(MaxFunction, HandlesChar) {
    ASSERT_EQ('z', Max('a', 'z'));
    ASSERT_EQ('b', Max('a', 'b'));
}

class Point {
public:
    double x, y;

    Point(double x, double y) : x(x), y(y) {}

    bool operator>(const Point& other) const {
        return std::sqrt(x*x + y*y) > std::sqrt(other.x*other.x + other.y*other.y);
    }
};

TEST(MaxFunction, HandlesCustomTypePoint) {
    Point p1(1, 1);
    Point p2(2, 2);
    Point result = Max(p1, p2);

    ASSERT_EQ(result.x, p2.x);
    ASSERT_EQ(result.y, p2.y);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

