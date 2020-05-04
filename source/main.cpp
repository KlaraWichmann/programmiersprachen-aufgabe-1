#define CATCH_CONFIG_RUNNER
#include <iostream>
#include "tasks.hpp"
#include "catch.hpp"
#include <cmath>


int main (int argc, char* argv[]) {

  //Kleinste durch 1 - 20 teilbare Zahl
  std::cout << smallestNum () << "\n";
    
    return Catch::Session().run(argc, argv);

}
