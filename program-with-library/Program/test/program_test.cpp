#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "program.hpp"

TEST_CASE( "return_eight()" ) {
	REQUIRE( P::return_eight() == 8 );
}
