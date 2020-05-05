
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

TEST_CASE ("describe_fract", "[fract]") {
    REQUIRE (fract (1.0) == Approx(0.0));
    REQUIRE (fract (1.123) == Approx(0.123));
    REQUIRE (fract (123.123) == Approx(0.123));
    REQUIRE (fract (-1.123) == Approx(0.123));
    REQUIRE (fract (1.003) == Approx(0.003));
}

TEST_CASE ("describe_volume_cylinder", "[volume_cylinder]") {
    REQUIRE (volumeCylinder (2, 1) == Approx(12.56));
    REQUIRE (volumeCylinder (1, 1) == Approx(3.14));
    REQUIRE (volumeCylinder (12, 13) == Approx(5881.06));
    REQUIRE (volumeCylinder (0, 0) == Approx(0.00));
}

TEST_CASE ("describe_surface_cylinder", "[surface_cylinder]") {
    REQUIRE (surfaceCylinder (2, 1) == Approx(37.69));
    REQUIRE (surfaceCylinder (1, 1) == Approx(12.56));
    REQUIRE (surfaceCylinder (12, 13) == Approx(1884.95));
    REQUIRE (surfaceCylinder (0, 0) == Approx(0.00));
}
