#include <iostream>
#include "gtest/gtest.h"
#include "HelloWorldWriter.h"


// IndependentMethod is a test case - here, we have 2 tests for this 1 test case
TEST(IndependentMethod, ResetsToZero) {
	int i = 3;
	setToZero(i);
	EXPECT_EQ(0, i);

	i = 12;
	setToZero(i);
	EXPECT_EQ(0,i);
}

TEST(IndependentMethod, ResetsToZero2) {
	int i = 0;
	setToZero(i);
	EXPECT_EQ(0, i);
}

// The fixture for testing class Project1. From google test primer.
class HelloWorldWriterTest : public ::testing::Test {
protected:
	// You can remove any or all of the following functions if its body
	// is empty.

	HelloWorldWriterTest() {
		// You can do set-up work for each test here.
	}

	virtual ~HelloWorldWriterTest() {
		// You can do clean-up work that doesn't throw exceptions here.
	}

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:
	virtual void SetUp() {
		// Code here will be called immediately after the constructor (right
		// before each test).
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test (right
		// before the destructor).
	}

	// Objects declared here can be used by all tests in the test case for Project1.
	HelloWorldWriter p;
};

// Test case must be called the class above
// Also note: use TEST_F instead of TEST to access the test fixture (from google test primer)
TEST_F(HelloWorldWriterTest, setToOneSetsToOne) {
	int i = 12344123;
	p.setToOne(i); // we have access to p, declared in the fixture
	EXPECT_EQ(i, 1);
}

TEST_F(HelloWorldWriterTest, setToTwoSetsToTwo) {
	int i = 12343210;
	p.setToTwo(i); // we have access to p, declared in the fixture
	EXPECT_EQ(i, 2);
}

// }  // namespace - could surround Project1Test in a namespace
