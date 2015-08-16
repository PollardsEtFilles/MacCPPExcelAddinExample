/*
 * testadd.cpp
 *
 *  Created on: 14 Aug 2015
 *      Author: peter
 */

#include <addin.h>

#include "catch.h"


TEST_CASE( "addnum" ) {

    REQUIRE( addNum(1,2) == 3 );
    REQUIRE( addNum(1.1,2.2) >= 3.3 );
    REQUIRE( addNum(1.1,2.2) == Approx( 3.3 ).epsilon( 0.00001 ) );

}
