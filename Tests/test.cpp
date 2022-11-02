#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "test.h"


TEST_CASE( "Tests1", "[T2]" ) {
    REQUIRE(test_code("Tests/input1.txt") == 17);
    REQUIRE(test_code("Tests/input2.txt") == 22);
    REQUIRE(test_code("Tests/input3.txt") == 27);
}
