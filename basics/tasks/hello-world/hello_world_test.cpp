#include <iostream>
#include <sstream>
#include <string>
#include <random>
#include "gtest/gtest.h"

// Include your C++ program file here
#include "hello_world.h"

std::string generateRandomString(int n) {
    static const std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, charset.length() - 1);
    std::string str;
    for (int i = 0; i < n; ++i) {
        str.push_back(charset[dis(gen)]);
    }
    return str;
}

TEST(HelloWorldTest, OutputTest) {
    std::stringstream buffer;
    std::streambuf* old_out = std::cout.rdbuf(buffer.rdbuf());

    std::string input_name = generateRandomString(10);
    std::stringstream input_stream(input_name);
    std::streambuf* old_in = std::cin.rdbuf(input_stream.rdbuf());

    printHelloWorld();

    std::cout.rdbuf(old_out);
    std::cin.rdbuf(old_in);

    std::string output = buffer.str();
    std::string expected_output = "Hello, World!\n" + input_name + "\n";
    EXPECT_EQ(output, expected_output);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

