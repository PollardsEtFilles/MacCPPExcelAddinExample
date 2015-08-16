/*
 * testadd.cpp
 *
 *  Created on: 14 Aug 2015
 *      Author: peter
 */

#include <addin.h>
#include "gtest/gtest.h"

TEST(addnum, addnum) {
	ASSERT_DOUBLE_EQ (3, addNum(1,2));
	ASSERT_DOUBLE_EQ (3.3, addNum(1.1,2.2));
}

