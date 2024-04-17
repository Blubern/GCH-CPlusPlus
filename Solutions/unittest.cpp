// Create a unittest for ZinsesZinsRechnung.cpp and Zinsrechnung.cpp in this file
// You can use the following code to start with
// You can add more test cases, if you want
// You can use the main function to run the tests

#include <gtest/gtest.h>
#include "ZinsesZinsRechnung.h"
#include "Zinsrechnung.h"

TEST(ZinsesZinsRechnung, Test1) {
    EXPECT_EQ(1, 1);
}

TEST(Zinsrechnung, Test1) {
    EXPECT_EQ(1, 1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
