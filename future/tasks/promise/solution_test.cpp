#include "solution.h"
#include <gtest/gtest.h>

TEST(TokenHolderTests, SequentialTokenRetrieval) {
    TokenHolder holder;
    holder.setToken("Hello");
    auto fut1 = holder.getToken();
    EXPECT_EQ(fut1.get(), "Hello");

    holder.setToken("World");
    auto fut2 = holder.getToken();
    EXPECT_EQ(fut2.get(), "World");
}

TEST(TokenHolderTests, GetTokenBeforeSetToken) {
    using namespace std::chrono_literals;
    TokenHolder holder;
    auto fut = holder.getToken();
    EXPECT_NE(fut.wait_for(0s), std::future_status::ready);

    holder.setToken("Late Hello");
    EXPECT_EQ(fut.get(), "Late Hello");
}

TEST(TokenHolderTests, ErrorOnMultipleGetTokenCalls) {
    TokenHolder holder;
    holder.getToken();
    EXPECT_THROW(holder.getToken(), std::logic_error);

    holder.setToken("token");
    EXPECT_NO_THROW(holder.getToken());
    EXPECT_THROW(holder.getToken(), std::logic_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
