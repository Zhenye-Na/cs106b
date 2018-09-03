#include "complex.h"
#include <cmath>

/* Constructs a new imaginary number: (a + b * i) */
Complex::Complex(double a, double b) { // constructor
    this->a = a;
    this->b = b;
}

/* Returns the absolute value of the complex number */
double Complex::abs() {
   return sqrt(a*a + b*b);
}

/* Returns the real value of the complex number */
double Complex::realPart() {
    return a;
}

/* Returns the imaginary value of the complex number */
double Complex::imagPart() {
    return b;
}

/* Multiplies two complex numbers and returns
 * the result as a new complex number
 */
Complex operator*(Complex m, Complex n) {
   double realP = m.a * n.a - m.b * n.b;
   double imagP = m.b * n.a + m.a * n.b;
   return Complex(realP, imagP);
}

/* Adds two complex numbers and returns
 * the result as a new complex number
 */
Complex operator+(Complex m, Complex n) {
   double realP = m.a + n.a;
   double imagP = m.b + n.b;
   return Complex(realP, imagP);
}
