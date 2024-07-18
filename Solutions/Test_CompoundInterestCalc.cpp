#include <gtest/gtest.h>
#include "CompoundInterestCalc.cpp" // Geändert von .cpp zu .h, um die Header-Datei einzubeziehen

TEST(CompoundInterestCalcTest, calculateCompoundInterestTest) {
    double principal = 1000.0;
    double interestRate = 5.0;
    int years = 2;
    double expectedAmount = 1102.5;

    ASSERT_NEAR(calculateCompoundInterest(principal, interestRate, years), expectedAmount, 0.001);
}

TEST(CompoundInterestCalcTest, calculateCompoundInterestNegativeRateTest) {
    double principal = 1000.0;
    double interestRate = -5.0;
    int years = 2;
    double expectedAmount = 902.5;

    ASSERT_NEAR(calculateCompoundInterest(principal, interestRate, years), expectedAmount, 0.001);
}

TEST(CompoundInterestCalcTest, calculateCompoundInterestZeroYearsTest) {
    double principal = 1000.0;
    double interestRate = 5.0;
    int years = 0;
    double expectedAmount = 1000.0;

    ASSERT_NEAR(calculateCompoundInterest(principal, interestRate, years), expectedAmount, 0.001);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}