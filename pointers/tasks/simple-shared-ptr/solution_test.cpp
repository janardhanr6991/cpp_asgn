#include "solution.h"
#include <gtest/gtest.h>

#include <atomic>

class InstrumentedResource {
public:
    static int destructCount;
    int value;

    explicit InstrumentedResource(int v) : value(v) {}
    ~InstrumentedResource() {
        ++destructCount;
    }
};

int InstrumentedResource::destructCount{0};

class SimpleSharedPtrTest : public ::testing::Test {
protected:
    void SetUp() override {
        InstrumentedResource::destructCount = 0;
    }

    void TearDown() override {
    }
};

TEST_F(SimpleSharedPtrTest, HandlesNullPointer) {
    {
        SimpleSharedPtr<InstrumentedResource> ptr(nullptr);
        ASSERT_EQ(nullptr, ptr.get());
    }
    ASSERT_EQ(0, InstrumentedResource::destructCount);
}

TEST_F(SimpleSharedPtrTest, HandlesCopyNullPointer) {
    SimpleSharedPtr<InstrumentedResource> ptr1(new InstrumentedResource(10));
    SimpleSharedPtr<InstrumentedResource> null_ptr(nullptr);
    ptr1 = null_ptr;
    ASSERT_EQ(1, InstrumentedResource::destructCount);
}

TEST_F(SimpleSharedPtrTest, DestructorCalledCorrectly) {
    {
        SimpleSharedPtr<InstrumentedResource> ptr1(new InstrumentedResource(10));
        {
            SimpleSharedPtr<InstrumentedResource> ptr2 = ptr1;
            SimpleSharedPtr<InstrumentedResource> ptr3(ptr2);
            ASSERT_EQ(10, ptr1->value);
            ASSERT_EQ(10, ptr2->value);
            ASSERT_EQ(10, ptr3->value);
            ASSERT_EQ(0, InstrumentedResource::destructCount);
        }
        ASSERT_EQ(10, ptr1->value);
        ASSERT_EQ(0, InstrumentedResource::destructCount);
    }
    ASSERT_EQ(1, InstrumentedResource::destructCount);
}

TEST_F(SimpleSharedPtrTest, AccessOperations) {
    SimpleSharedPtr<InstrumentedResource> ptr(new InstrumentedResource(40));
    ASSERT_EQ(40, ptr->value);
    ASSERT_EQ(40, (*ptr).value);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
