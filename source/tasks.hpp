#ifndef TASKS_HPP
#define TASKS_HPP

/**
* Kleinste Zahl die durch 1-20 teilbar ist
*/
int smallestNum ();

/**
 * Groessten gemeinsamen Teiler von zwei Zahlen (mit Hilfe des Euklidischen Algorithmus)
*/
int gcd (int a, int b);

/**
* Quersumme einer ganzen Zahl berechnen
*/
int checksum (int num);

/*
 * Addiert alle Zahlen von 1-1000 die durch 3 oder 5 teilbar sind
 */
int sum_multiples ();

/**
 * Gibt den Nachkommaanteil einer Gleitkommazahl aus
 */
double fract (double num);

/**
 * Gibt das Volumen eines Zylinders an
 */
double volumeCylinder (int r, int h);

/**
 * Gibt die Oberfläche eines Zylinders an
 */
double surfaceCylinder (int r, int h);

#endif
