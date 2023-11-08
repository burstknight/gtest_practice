#include "../submodules/googletest/googletest/include/gtest/gtest.h"
#include <algorithm>

int aiArrayA[] = {};
int aiArrayB[] = {1, 2, 3, 4, 5};

/**
 * @brief Test an array is empty.
 */
TEST(ArrayTest, Empty_Array){
	int iSize = sizeof(aiArrayA)/sizeof(aiArrayB[0]);
	EXPECT_EQ(iSize, 0);
}

/**
 * @brief Test an array is sorted.
 */
TEST(ArrayTest, SortedArray){
	int iSize = sizeof(aiArrayB)/sizeof(aiArrayB[0]);
	EXPECT_TRUE(std::is_sorted(aiArrayB, aiArrayB + iSize));
}

