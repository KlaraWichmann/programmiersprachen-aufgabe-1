#ifndef TASKS_HPP
#define TASKS_HPP

/**
* Kleinste Zahl die durch 1-20 teilbar ist
*/
int smallest_num ();

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
int sum_multiples (int low, int high);

/**
 * Gibt den Nachkommaanteil einer Gleitkommazahl aus
 */
double fract (double num);

/**
 * Gibt das Volumen eines Zylinders an
 */
double volume_cylinder (int r, int h);

/**
 * Gibt die Oberfläche eines Zylinders an
 */
double surface_cylinder (int r, int h);

/**
 * Gibt die Fakultät einer Zahl aus
 */
int factorial (int i);

/**
 * Prueft, ob die gegebene Zahl eine Primzahl ist
 */
bool is_prime (int num);

/**
 * Rechnet Meilenwerte in Kilometer um
 */
double mile_to_kilometer (double valueMiles);

#endif
