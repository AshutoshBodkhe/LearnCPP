#include "gtest/gtest.h"
#include "calc.h"

TEST(CalcTest, AddsTwoPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(CalcTest, AddsNegativeAndPositive) {
    EXPECT_EQ(add(-1, 4), 3);
}