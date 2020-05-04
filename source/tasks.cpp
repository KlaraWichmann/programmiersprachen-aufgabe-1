
#include <iostream>
#include "tasks.hpp"
#include <exception>

/**
* Kleinstes gemeinsames Vielfaches von a und b finden
*/
  int kgv (int a, int b) {
  int min = a < b ? a : b;
  int max = a < b ? b : a;

  for (int i = max; ; i += max) {
    if (i % min == 0)
      return i;
    }
  }


  int smallestNum () {
    int max = 20;
    int result = kgv(1, 2);
    for (int i = 3; i <= max; i++) {
      result = kgv(result, i);
    }
    return result;
  }



int gcd (int a, int b) {
    int result = 0;
    
    if ((b == 0 && a == 0) || (a < 0) || (b < 0)) {
        throw std::invalid_argument ("Uebergebene Zahlen sind ungueltig");
    }
    
    if (a == 0) {
        result = b;
    } else {
        while (b != 0) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        result = a;
    }
    return result;
}


int checksum (int num) {
    if (num < 0) {
        throw std::invalid_argument ("Uebergebene Zahlen sind ungueltig");
    } else {
        int result = 0;
        while (num > 0) {
            result += num % 10;
            num /= 10;
        }
        return result;
    }
}

int lastDigit (int num) {
    int result = 0;
    while (num > 0) {
        result = num % 10;
        num /= 10;
    }
    return result;
}

int sum_multiples () {
    int result = 0;
    for (int i = 0; i <= 1000; i++) {
        if (checksum(i) % 3 == 0 || lastDigit(i) == 5 || lastDigit(i) == 0) {
            result += i;
        }
    }
    return result;
}
