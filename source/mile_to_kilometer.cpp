
#include <iostream>


double mile_to_kilometer (double valueMiles) {
    double valueKm = 0.0;
    valueKm = valueMiles * 1.609;
    
    return valueKm;
}

int main () {
    //Miles to kilometer Werteingabe
    double valueMiles = 0.0;
    std::cout << "Bitte geben sie den Wert in Meilen an: \n";
    std::cin >> valueMiles;
    if (valueMiles < 0) {
        throw std::invalid_argument ("Uebergebener Wert muss positiv sein");
    } else {
        std::cout << mile_to_kilometer (valueMiles) << "\n";
    }

    return 0;
}
