/*
 * testmain.cpp
 *
 *  Created on: 14 Aug 2015
 *      Author: peter
 */


#include "gtest/gtest.h"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
