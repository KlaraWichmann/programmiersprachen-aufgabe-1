
#include "catch.hpp"
#include "tasks.hpp"
#include <cmath>
#include <iostream>


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
    REQUIRE (sum_multiples (1, 1000) == 234168);
}

TEST_CASE ("describe_fract", "[fract]") {
    REQUIRE (fract (1.0) == Approx(0.0));
    REQUIRE (fract (1.123) == Approx(0.123));
    REQUIRE (fract (123.123) == Approx(0.123));
    REQUIRE (fract (-1.123) == Approx(0.123));
    REQUIRE (fract (1.003) == Approx(0.003));
}

TEST_CASE ("describe_volume_cylinder", "[volume_cylinder]") {
    REQUIRE (volume_cylinder (2, 1) == Approx(12.56));
    REQUIRE (volume_cylinder (1, 1) == Approx(3.14));
    REQUIRE (volume_cylinder (12, 13) == Approx(5881.06));
    REQUIRE (volume_cylinder (0, 0) == Approx(0.00));
}

TEST_CASE ("describe_surface_cylinder", "[surface_cylinder]") {
    REQUIRE (surface_cylinder (2, 1) == Approx(37.69));
    REQUIRE (surface_cylinder (1, 1) == Approx(12.56));
    REQUIRE (surface_cylinder (12, 13) == Approx(1884.95));
    REQUIRE (surface_cylinder (0, 0) == Approx(0.00));
}

TEST_CASE ("describe_factorial", "[factorial]") {
    REQUIRE (factorial (2) == 2);
    REQUIRE (factorial (1) == 1);
    REQUIRE (factorial (6) == 720);
    REQUIRE (factorial (0) == 1);
}

TEST_CASE ("describe_is_prime", "[is_prime]") {
    REQUIRE (is_prime (2) == true);
    REQUIRE (is_prime (3) == true);
    REQUIRE (is_prime (4) == false);
    REQUIRE (is_prime (5) == true);
    REQUIRE (is_prime (6) == false);
    REQUIRE (is_prime (7) == true);
    REQUIRE (is_prime (8) == false);
}

TEST_CASE ("describe_mile_to_kilometer", "[mile_to_kilometer]") {
    REQUIRE (mile_to_kilometer (1) == Approx(1.609));
    REQUIRE (mile_to_kilometer (6.5) == Approx(10.4585));
    REQUIRE (mile_to_kilometer (0) == Approx(0));
}
