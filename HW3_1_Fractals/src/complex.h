#pragma once

class Complex {
public:
    Complex(double a, double b); // constructor
    double abs();
    double realPart();
    double imagPart();
    friend Complex operator+(Complex m, Complex n);
    friend Complex operator*(Complex m, Complex n);

private:
    double a,b;
};
