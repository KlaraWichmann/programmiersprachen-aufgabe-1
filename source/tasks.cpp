#define _USE_MATH_DEFINES
#include <iostream>
#include <exception>
#include <cmath>
#include "tasks.hpp"

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


  int smallest_num () {
    int max = 20;
    int result = kgv (1, 2);
    for (int i = 3; i <= max; i++) {
      result = kgv(result, i);
    }
    return result;
  }



int gcd (int a, int b) {
    int result = 0;
    
    if (b == 0 && a == 0) {
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
        throw std::invalid_argument ("Uebergebene Zahl ist ungueltig");
    } else {
        int result = 0;
        while (num > 0) {
            result += num % 10;
            num /= 10;
        }
        return result;
    }
}

int sum_multiples (int maxValue) {
    int result = 0;
    if (maxValue < 1) {
    throw std::invalid_argument ("Obere Grenze muss groesser oder gleich 1 sein");
    }
    for (int i = 1; i <= maxValue; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }
    return result;
}

double fract (double num) {
    if (num < 0) {
        num *= -1;
    }
    int numInteger = 0;
    double result = 0.0;
    numInteger = int(num);
    result = num - numInteger;
    return result;
}

double volume_cylinder (int r, int h) {
    double volume = 0.0;
    volume = M_PI * std::pow(r, 2.0) * h;
    volume = (int)(volume * 100)/100.0;
    return volume;
}

double surface_cylinder (int r, int h) {
    double surface = 0.0;
    surface = 2 * M_PI * r * (r + h);
    surface = (int)(surface * 100)/100.0;
    return surface;
}

int factorial (int num) {
    return (num > 1 ? (num * factorial (num - 1)) : 1);
}

bool is_prime (int num) {
    bool prime = false;
    if (num < 2) {
    throw std::invalid_argument ("Uebergebene Zahlen sind ungueltig");
    } else if (num == 2 ) {
        prime = true;
    } else if (num % 2 != 0) {
            for (int i = 2; i < num; i++) {
                if (num % i != 0) {
                    prime = true;
                } else {
                    prime = false;
                }
            }
    }
    return prime;
}
