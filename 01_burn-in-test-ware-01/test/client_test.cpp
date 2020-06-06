/*
 * client_test.cpp
 *
 *  Created on: Apr 10, 2020
 *      Author: root
 */

#include <iostream>
#include <gtest/gtest.h>

#include "../src/client.h"

using namespace std;

class RequesterTest: public ::testing::Test {
public:
	RequesterTest() {

	}
	virtual void SetUp() {

	}
	virtual void TearDown() {

	}
	~RequesterTest() {

	}
	Requester tcRequester;
	unsigned id = 0;
	unsigned pass_value = 0;
	int bad_value = 0;
};

TEST_F(RequesterTest, Can_add_valid_uint_id) {
	pass_value  = 3;
	tcRequester.setID(pass_value );
	id = tcRequester.getID();
	ASSERT_EQ(id, pass_value );

	pass_value  = 55555;
	tcRequester.setID(pass_value );
	id = tcRequester.getID();
	ASSERT_EQ(id, pass_value );

}


int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

