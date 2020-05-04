#include <iostream>

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

/**
 * Kleinste Zahl die durch 1-20 teilbar ist
 */
  int smallestNum () {
    int max = 20;
    int result = kgv(1, 2);
    for (int i = 3; i <= max; i++) {
      result = kgv(result, i);
    }
    return result;
  }


int main()
{

  //Kleinste durch 1 - 20 teilbare Zahl
  std::cout << smallestNum () << "\n";

}