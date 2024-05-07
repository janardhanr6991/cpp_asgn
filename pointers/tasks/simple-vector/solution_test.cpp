#include "solution.h"
#include <gtest/gtest.h>
#include <chrono>

class IntVectorTest : public ::testing::Test {
protected:
    IntVector vec;

    void SetUp() override {
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
    }
};

TEST_F(IntVectorTest, PushBackAndSizeTest) {
    ASSERT_EQ(vec.size(), 3);
    vec.push_back(40);
    EXPECT_EQ(vec.size(), 4);
    EXPECT_EQ(vec.at(3), 40);
}

TEST_F(IntVectorTest, AtFunctionTest) {
    EXPECT_EQ(vec.at(0), 10);
    EXPECT_EQ(vec.at(1), 20);
    EXPECT_EQ(vec.at(2), 30);
    EXPECT_THROW(vec.at(3), std::out_of_range);
}

TEST_F(IntVectorTest, HandlesZeroCapacity) {
    IntVector emptyVec;
    ASSERT_EQ(emptyVec.size(), 0);
    EXPECT_THROW(emptyVec.at(0), std::out_of_range);
}

TEST_F(IntVectorTest, PushBackPerformance) {
    const size_t largeSize = 1000000;
    auto start = std::chrono::high_resolution_clock::now();

    for (size_t i = 0; i < largeSize; ++i) {
        vec.push_back(i);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> duration = end - start;

        double allowedTime = 500;

        EXPECT_LT(duration.count(), allowedTime) << "Push_back performance test failed: Operation took too long. Made only " << i + 1 << " push_back operations out of " << largeSize;
        if (duration.count() > allowedTime) {
            break;
        }
    }
}

