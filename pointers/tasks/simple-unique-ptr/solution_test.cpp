#include "solution.h"
#include <gtest/gtest.h>

class Resource {
public:
    int value;
    explicit Resource(int v) : value(v) {}
};

static_assert(!std::is_copy_constructible<SimpleUniquePtr<Resource>>::value,
              "SimpleUniquePtr should not be copy constructible.");
static_assert(!std::is_copy_assignable<SimpleUniquePtr<Resource>>::value,
              "SimpleUniquePtr should not be copy assignable.");

TEST(SimpleUniquePtrTest, ConstructorAndDestructor) {
    struct TestResource : Resource {
        int& destructCounter;
        TestResource(int v, int& counter) : Resource(v), destructCounter(counter) {}
        ~TestResource() { ++destructCounter; }
    };

    int localCount = 0;
    {
        SimpleUniquePtr<TestResource> ptr(new TestResource(10, localCount));
        ASSERT_EQ(10, ptr->value);
    }
    ASSERT_EQ(1, localCount);
}

TEST(SimpleUniquePtrTest, MoveSemantics) {
    SimpleUniquePtr<Resource> ptr1(new Resource(10));
    SimpleUniquePtr<Resource> ptr2(std::move(ptr1));

    ASSERT_EQ(nullptr, ptr1.get());
    ASSERT_EQ(10, (*ptr2).value);

    SimpleUniquePtr<Resource> ptr3;
    ptr3 = std::move(ptr2);
    ASSERT_EQ(nullptr, ptr2.get());
    ASSERT_EQ(10, (*ptr3).value);
}

TEST(SimpleUniquePtrTest, DereferenceAndAccessOperations) {
    SimpleUniquePtr<Resource> ptr(new Resource(20));
    ASSERT_EQ(20, (*ptr).value);
    ASSERT_EQ(20, ptr->value);
}

TEST(SimpleUniquePtrTest, MoveAssignmentSelfAssignment) {
    // Set up a Resource with a known value
    struct TestResource : Resource {
        int& destructCounter;
        TestResource(int v, int& counter) : Resource(v), destructCounter(counter) {}
        ~TestResource() { ++destructCounter; }
    };
    int destructCount = 0;
    {
        auto* resource = new TestResource(30, destructCount);
        SimpleUniquePtr<TestResource> ptr(resource);

        ptr = std::move(ptr);

        ASSERT_EQ(resource, ptr.get());
        ASSERT_EQ(30, ptr->value);
    }

    ASSERT_EQ(1, destructCount);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
