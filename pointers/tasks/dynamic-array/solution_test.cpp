#include "solution.h"
#include <gtest/gtest.h>

TEST(CreateArrayTest, CreatesNonEmptyArray) {
    int* myArray = createArray(5, 10);
    for (size_t i = 0; i < 5; i++) {
        EXPECT_EQ(myArray[i], 10);
    }
    deleteArray(myArray);
}

TEST(CreateArrayTest, HandlesZeroSize) {
    int* myArray = createArray(0, 10);
    EXPECT_EQ(myArray, nullptr);
    deleteArray(myArray);
}

TEST(CopyArrayTest, CopiesCorrectly) {
    int original[] = {1, 2, 3, 4, 5};
    int* copy = copyArray(original, 5);
    for (size_t i = 0; i < 5; i++) {
        EXPECT_EQ(copy[i], original[i]);
    }
    deleteArray(copy);
}

TEST(CopyArrayTest, HandlesZeroSize) {
    int* copy = copyArray(nullptr, 0);
    EXPECT_EQ(copy, nullptr);
    deleteArray(copy);
}

TEST(ReverseArrayTest, ReversesArrayCorrectly) {
    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    int expected[] = {5, 4, 3, 2, 1};
    for (size_t i = 0; i < 5; i++) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

