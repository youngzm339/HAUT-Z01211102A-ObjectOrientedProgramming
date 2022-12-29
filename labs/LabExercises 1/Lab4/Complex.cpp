// Lab 4: Complex.cpp
// Copyright: Brian Yang 2022/12/29
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex(double real, double imaginary) {
  setComplexNumber(real, imaginary);
} // end Complex constructor
Complex::Complex(void) {
  setComplexNumber(0.0, 0.0);
} // end Complex constructor

Complex Complex::add(const Complex &right) {
  /* Write a statement to return a Complex object. Add
     the realPart of right to the realPart of this Complex
     object and add the imaginaryPart of right to the
     imaginaryPart of this Complex object */
  Complex tmp;
  tmp.realPart = this->realPart + right.realPart;
  tmp.imaginaryPart = this->imaginaryPart + right.imaginaryPart;
  return tmp;
} // end function add

Complex Complex::subtract(const Complex &right) {
  /* Write a statement to return a Complex object. Subtract
     the realPart of right from the realPart of this Complex
     object and subtract the imaginaryPart of right from
     the imaginaryPart of this Complex object */
  Complex tmp;
  tmp.realPart = this->realPart - right.realPart;
  tmp.imaginaryPart = this->imaginaryPart - right.imaginaryPart;
  return tmp;
} // end function subtract

void Complex::printComplex() {
  cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber(double rp, double ip) {
  realPart = rp;
  imaginaryPart = ip;
} // end function setComplexNumber
