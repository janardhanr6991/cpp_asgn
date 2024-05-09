#include "solution.h"
#include <gtest/gtest.h>

TEST(HolderTest, HandlesInt) {
    Holder<int> intHolder(10);
    ASSERT_EQ(10, intHolder.getValue());
    intHolder.setValue(20);
    ASSERT_EQ(20, intHolder.getValue());
}

TEST(HolderTest, HandlesDouble) {
    Holder<double> doubleHolder(1.23);
    ASSERT_DOUBLE_EQ(1.23, doubleHolder.getValue());
    doubleHolder.setValue(2.34);
    ASSERT_DOUBLE_EQ(2.34, doubleHolder.getValue());
}

TEST(HolderTest, HandlesString) {
    Holder<std::string> stringHolder("test");
    ASSERT_EQ("test", stringHolder.getValue());
    stringHolder.setValue("hello");
    ASSERT_EQ("hello", stringHolder.getValue());
}

TEST(HolderSpecializationTest, HandlesAccessCounter) {
    AccessCounter ac;
    Holder<AccessCounter> acHolder(ac);

    acHolder.getValue();
    acHolder.getValue();
    AccessCounter result = acHolder.getValue();
    ASSERT_EQ(3, result.count);
}

TEST(HolderSpecializationTest, VerifySetValue) {
    AccessCounter ac;
    ac.count = 5;  // Initialize with a non-zero count

    Holder<AccessCounter> acHolder(ac);
    acHolder.getValue();
    acHolder.getValue();

    AccessCounter newAc;
    acHolder.setValue(newAc);

    ASSERT_EQ(1, acHolder.getValue().count);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
