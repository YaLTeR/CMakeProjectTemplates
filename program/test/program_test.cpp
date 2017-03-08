#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "program.hpp"

TEST_CASE( "return_four()" ) {
	REQUIRE( P::return_four() == 4 );
}
