
#include "catch.hpp"
#include "tasks.hpp"
#include <cmath>


TEST_CASE ("describe_gcd", "[gcd]") {
    REQUIRE (gcd (2, 4) == 2);
    REQUIRE (gcd (9, 6) == 3);
    REQUIRE (gcd (3, 7) == 1);
}

TEST_CASE ("describe_checksum", "[checksum]") {
    REQUIRE (checksum (0) == 0);
    REQUIRE (checksum (1) == 1);
    REQUIRE (checksum (505) == 10);
    REQUIRE (checksum (121512) == 12);
}

TEST_CASE ("describe_sum_multiples", "[sum_multiples]") {
    REQUIRE (sum_multiples () == 204054);
}
