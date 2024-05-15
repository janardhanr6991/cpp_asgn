#include "solution.h"
#include <gtest/gtest.h>
#include <string>

TEST(SchedulerTests, ExecutesTasksInOrder) {
    Scheduler scheduler;
    std::vector<int> outputs;

    scheduler.addTask([&outputs]() { outputs.push_back(1); });
    scheduler.addTask([&outputs]() { outputs.push_back(2); });
    scheduler.addTask([&outputs]() { outputs.push_back(3); });

    scheduler.runAll();

    ASSERT_EQ(outputs.size(), 3u);
    EXPECT_EQ(outputs[0], 1);
    EXPECT_EQ(outputs[1], 2);
    EXPECT_EQ(outputs[2], 3);
}

TEST(SchedulerTests, RunsNoTasksIfEmpty) {
    Scheduler scheduler;
    bool ran = false;

    scheduler.runAll();

    scheduler.addTask([&ran]() { ran = true; });
    scheduler.runAll();

    EXPECT_TRUE(ran);
}

TEST(SchedulerTests, ClearsTasksAfterRun) {
    Scheduler scheduler;
    std::vector<int> outputs;

    scheduler.addTask([&outputs]() { outputs.push_back(1); });
    scheduler.runAll();


    scheduler.runAll();
    ASSERT_EQ(outputs.size(), 1u);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

