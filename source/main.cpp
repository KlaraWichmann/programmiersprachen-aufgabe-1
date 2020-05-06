#define CATCH_CONFIG_RUNNER
#include <iostream>
#include "tasks.hpp"
#include "catch.hpp"
#include <exception>


int main (int argc, char* argv[]) {

  //Kleinste durch 1 - 20 teilbare Zahl
  std::cout << smallest_num () << "\n";
    
    /*Miles to kilometer Werteingabe
    double valueMiles = 0.0;
    std::cout << "Bitte geben sie den Wert in Meilen an: \n";
    std::cin >> valueMiles;
    if (valueMiles < 0) {
      throw std::invalid_argument ("Uebergebener Wert muss positiv sein");
    } else {
      std::cout << mile_to_kilometer (valueMiles) << "\n";
    }
    */
    return Catch::Session().run(argc, argv);

}
