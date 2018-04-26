#include <iostream>
#include "gtest/gtest.h"
#include "HelloWorldWriter.h"


// SetToTwoTest without fixture
TEST(SetToTwo, WithoutFixture) {
	std::cout << "Performing test TEST(SetToTwo, WithoutFixture)" << std::endl;
	int i = 3;
	HelloWorldWriter p;
	p.setToTwo(i);
	EXPECT_EQ(2, i);
}

// SetToTwoTest with fixture
class HelloWorldWriterTest : public ::testing::Test {
protected:

	HelloWorldWriterTest() {

	}

	virtual ~HelloWorldWriterTest() {

	}

	virtual void SetUp() {

	}

	virtual void TearDown() {

	}
	HelloWorldWriter p;
};

TEST_F(HelloWorldWriterTest, setToTwoWithFixture) {
	std::cout << "Performing test TEST_F(HelloWorldWriterTest, setToTwoWithFixture)" << std::endl;
	int i = 12344123;
	p.setToTwo(i); // we have access to p, declared in the fixture
	EXPECT_EQ(2, i);
}
