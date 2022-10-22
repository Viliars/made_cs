#include <gtest/gtest.h>

TEST(CS, Test1) {
    EXPECT_STREQ("hello", "hello");
}

TEST(CS, Test2) {
    EXPECT_STREQ("world", "world");
}

TEST(CS, Test3) {
    EXPECT_STREQ("blabla", "bla");
}

