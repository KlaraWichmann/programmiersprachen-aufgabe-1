#define CATCH_CONFIG_RUNNER
#include <iostream>
#include "tasks.hpp"
#include "catch.hpp"


int main (int argc, char* argv[]) {

  //Kleinste durch 1 - 20 teilbare Zahl
  //std::cout << smallestNum () << "\n";
    std::cout << volumeCylinder (2, 1) << "\n";
    std::cout << volumeCylinder (1, 1) << "\n";
    std::cout << volumeCylinder (12, 13) << "\n";
    std::cout << volumeCylinder (0, 0) << "\n";
    return Catch::Session().run(argc, argv);

}
