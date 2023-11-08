#include "../submodules/googletest/googletest/include/gtest/gtest.h"
#include "../includes/myMathLib.h"
#include "gtest/gtest.h"

TEST(AddTest, TwoPositiveNumbers){
	EXPECT_EQ(add(2, 3), 5);
}

TEST(AddTest, TwoNegativeNumbers){
	EXPECT_EQ(add(-2, -3), -5);
}

