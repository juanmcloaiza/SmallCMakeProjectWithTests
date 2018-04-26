#include <iostream>
#include "gtest/gtest.h"
#include "usefulheaders.h"

TEST(SetToZero, ThisResetsToZero) {
	int i = 3;
	setToZero(i);
	EXPECT_EQ(0, i);
}