/*
 * testadd.cpp
 *
 *  Created on: 14 Aug 2015
 *      Author: peter
 */

#include <bandit/bandit.h>
using namespace bandit;
#include <addin.h>


//TEST_CASE( "addnum" ) {
//
//    REQUIRE( addNum(1,2) == 3 );
//    REQUIRE( addNum(1.1,2.2) >= 3.3 );
//    REQUIRE( addNum(1.1,2.2) == Approx( 3.3 ).epsilon( 0.00001 ) );
//
//}

go_bandit([](){

  describe("our first test", [](){
    it("should pass", [&](){
      AssertThat(addNum(1,2), Equals(3));
      AssertThat(addNum(1.1,2.2), EqualsWithDelta(3.3, 0.0001));
    });
  });

});
