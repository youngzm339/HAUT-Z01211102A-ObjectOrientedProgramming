// Lab 4: Complex.h
// Copyright: Brian Yang 2022/12/29
#ifndef COMPLEX_H
#define COMPLEX_H

/* Write class definition for Complex */
class Complex {
public:
  Complex(double, double);
  Complex();
  Complex add(const Complex &);
  Complex subtract(const Complex &);
  void printComplex();
  void setComplexNumber(double, double);

private:
  double realPart;
  double imaginaryPart;
};

#endif
