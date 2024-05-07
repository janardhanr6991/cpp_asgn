#include "solution.h"
#include <gtest/gtest.h>
#include <sstream>

class ZooTest : public ::testing::Test {
protected:
    std::stringstream ss;
    std::streambuf* orig_cout;

    void SetUp() override {
        orig_cout = std::cout.rdbuf(ss.rdbuf()); // Redirect std::cout to ss
    }

    void TearDown() override {
        std::cout.rdbuf(orig_cout);  // Reset std::cout
    }
};

TEST_F(ZooTest, TestZooOutputs) {
    Zoo zoo;
    zoo.addAnimal(new Dog());
    zoo.addAnimal(new Cat());
    zoo.addAnimal(new Bird());

    zoo.showAllAnimals();

    std::string expectedOutput =
        "Dog\n"
        "Bark!\n"
        "Cat\n"
        "Meow!\n"
        "Bird\n"
        "Tweet!\n";

    ASSERT_EQ(ss.str(), expectedOutput);
}
