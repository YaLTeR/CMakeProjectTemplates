#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "SomeLibrary/my_function.hpp"

TEST_CASE( "return_four()" ) {
	REQUIRE( SomeLibrary::return_four() == 4 );
}
