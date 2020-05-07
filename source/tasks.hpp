#ifndef TASKS_HPP
#define TASKS_HPP

/**
 * Kleinste Zahl die durch 1-20 teilbar ist
 *
 * @return kleinste durch 1-20 teilbare Zahl
*/
int smallest_num ();

/**
 * Groessten gemeinsamen Teiler von zwei Zahlen (mit Hilfe des Euklidischen Algorithmus)
 *
 * @param a Zahl von denen der geinsame Teiler gefunden wird
 * @param b Zahl von denen der geinsame Teiler gefunden wird
 * @return groesster gemeinsamer Teiler von a und b
 *
*/
int gcd (int a, int b);

/**
 * Quersumme einer ganzen Zahl berechnen
 *
 * @param num  Zahl von der die Quersumme berechnet wird
 * @return Quersumme von num
*/
int checksum (int num);

/**
 * Addiert alle Zahlen von 1-maxValue die durch 3 oder 5 teilbar sind
 *
 * @param maxValue obere Grenze des Bereichs der möglich addierten Zahlen
 * @return Summe aller Zahlen die durch 3 bzw 5 teilbar sind
 */
int sum_multiples (int maxValue);

/**
 * Gibt den Nachkommaanteil einer Gleitkommazahl aus
 */
double fract (double num);

/**
 * Gibt das Volumen eines Zylinders an, r = radius, h = hoehe
 *
 * @param r radius des Zylinders
 * @param h die Hoehe des Zylinders
 * @return Volumen des Zylinders
 */
double volume_cylinder (int r, int h);

/**
 * Gibt die Oberflaeche eines Zylinders an, r = radius, h = hoehe
 *
 * @param r radius des Zylinders
 * @param h die Hoehe des Zylinders
 * @return Oberflaeche des Zylinders
 */
double surface_cylinder (int r, int h);

/**
 * Gibt die Fakultaet einer Zahl aus
 *
 * @param i Zahl von der die Fakultaet berechnet wird
 * @return Fakultaet der Zahl
 */
int factorial (int i);

/**
 * Prueft, ob die gegebene Zahl eine Primzahl ist
 *
 * @param num Zahl die geprueft wird
 * @return true wenn Zahl eine Primzahl ist, sonst false
 */
bool is_prime (int num);

#endif
