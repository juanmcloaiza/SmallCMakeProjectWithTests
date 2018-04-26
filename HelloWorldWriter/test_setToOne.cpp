#include <iostream>
#include "gtest/gtest.h"
#include "HelloWorldWriter.h"

// The fixture for testing class Project1. From google test primer.
class HelloWorldWriterTest : public ::testing::Test {
protected:
	HelloWorldWriterTest() {
		// You can do set-up work for each test here.
	}

	virtual ~HelloWorldWriterTest() {
		// You can do clean-up work that doesn't throw exceptions here.
	}

	virtual void SetUp() {
		// Code here will be called immediately after the constructor (right
		// before each test).
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test (right
		// before the destructor).
	}
	HelloWorldWriter p;
};

// Also note: use TEST_F instead of TEST to access the test fixture (from google test primer)
TEST_F(HelloWorldWriterTest, setToOneSetsToOne) {
	int i = 12344123;
	p.setToOne(i); // we have access to p, declared in the fixture
	EXPECT_EQ(1, i);
}
