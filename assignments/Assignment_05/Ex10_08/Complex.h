// Lab 4: Complex.h
// Copyright: Brian Yang 2022/12/29 edited 2023-01-01
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

/* Write class definition for Complex */
class Complex {
public:
  Complex(double real, double imaginary);
  Complex();
  Complex(const Complex &);
  Complex operator+(const Complex &);
  Complex operator-(const Complex &);
  Complex operator*(const Complex &);
  Complex &operator=(const Complex &);
  bool operator==(const Complex &);
  bool operator!=(const Complex &);
  friend ostream &operator<<(ostream &, Complex &);
  friend ostream &operator>>(ostream &, Complex &);
  void setComplexNumber(double, double);

private:
  double realPart;
  double imaginaryPart;
  void printComplex();
};

#endif