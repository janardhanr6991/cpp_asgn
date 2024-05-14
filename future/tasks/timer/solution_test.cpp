#include "solution.h"
#include <gtest/gtest.h>
#include <thread>

TEST(TimerTests, TimerTriggersAfterZeroDuration) {
    Timer timer(std::chrono::seconds(0));
    timer.tick();
    auto trigger = timer.getTrigger();
    bool isReady = (trigger.wait_for(std::chrono::seconds(0)) == std::future_status::ready);
    EXPECT_TRUE(isReady);
}

TEST(TimerTests, DoubleTickAllowed) {
    Timer timer(std::chrono::seconds(0));
    timer.tick();
    EXPECT_NO_THROW(timer.tick());
}

TEST(TimerTests, FutureNotReadyBeforeTime) {
    Timer timer(std::chrono::seconds(2));
    auto trigger = timer.getTrigger();
    timer.tick();
    bool isReady = (trigger.wait_for(std::chrono::seconds(0)) == std::future_status::ready);
    EXPECT_FALSE(isReady);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    timer.tick();
    isReady = (trigger.wait_for(std::chrono::seconds(0)) == std::future_status::ready);
    EXPECT_TRUE(isReady);
}

TEST(TimerTests, ThrowsWhenGetTriggerCalledTwice) {
    Timer timer(std::chrono::seconds(1));
    auto trigger = timer.getTrigger();
    EXPECT_THROW(timer.getTrigger(), std::logic_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
