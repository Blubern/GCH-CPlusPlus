// ZinsesZinsRechnungTest.cpp
#include <gtest/gtest.h>
#include "ZinsesZinsRechnung.cpp"

TEST(ZinsesZinsRechnungTest, berechneZinsenTest) {
    double kapital = 1000.0;
    double zinssatz = 5.0;
    int laufzeit = 2;
    double erwarteteZinsen = 102.5;

    ASSERT_NEAR(berechneZinsen(kapital, zinssatz, laufzeit), erwarteteZinsen, 0.001);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}