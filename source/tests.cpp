
#include "catch.hpp"
#include "tasks.hpp"
#include <cmath>


TEST_CASE ("describe_gcd", "[gcd]") {
    REQUIRE (gcd (2, 4) == 2);
    REQUIRE (gcd (9, 6) == 3);
    REQUIRE (gcd (3, 7) == 1);
}

