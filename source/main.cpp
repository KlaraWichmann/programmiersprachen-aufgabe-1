#define CATCH_CONFIG_RUNNER
#include <iostream>
#include "tasks.hpp"
#include "catch.hpp"


int main (int argc, char* argv[]) {

  //Kleinste durch 1 - 20 teilbare Zahl
  std::cout << smallest_num () << "\n";
    
    return Catch::Session().run(argc, argv);

}
