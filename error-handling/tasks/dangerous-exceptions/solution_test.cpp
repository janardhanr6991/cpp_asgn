#include "solution.h"
#include <gtest/gtest.h>

TEST(TransferFundsTest, SuccessfulTransfer) {
    Account from(10000);
    Account to(5000);
    transferFunds(from, to, 5000);
    ASSERT_EQ(5000, from.balance);
    ASSERT_EQ(10000, to.balance);
}

TEST(TransferFundsTest, InsufficientFunds) {
    Account from(3000);
    Account to(5000);
    EXPECT_THROW(transferFunds(from, to, 4000), std::runtime_error);
    ASSERT_EQ(3000, from.balance);
    ASSERT_EQ(5000, to.balance);
}

TEST(TransferFundsTest, AmountTooLarge) {
    Account from(20000);
    Account to(1000);
    EXPECT_THROW(transferFunds(from, to, 15000), std::runtime_error);
    ASSERT_EQ(20000, from.balance);
    ASSERT_EQ(1000, to.balance);
}

TEST(TransferFundsTest, NoLossOfFunds) {
    Account from(10000);
    Account to(5000);
    EXPECT_THROW(transferFunds(from, to, 10001), std::runtime_error);
    ASSERT_EQ(10000, from.balance);
    ASSERT_EQ(5000, to.balance);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
