// Lab 4: Complex.cpp
// Copyright: Brian Yang 2022/12/29
// Member-function definitions for class Complex.
#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(double real, double imaginary) {
  setComplexNumber(real, imaginary);
} // end Complex constructor
Complex::Complex(void) {
  setComplexNumber(0.0, 0.0);
} // end Complex constructor
// Copy Constructor
Complex::Complex(const Complex &right) {
  realPart = right.realPart;
  imaginaryPart = right.imaginaryPart;
};

Complex Complex::operator+(const Complex &right) {
  Complex tmp;
  tmp.realPart = this->realPart + right.realPart;
  tmp.imaginaryPart = this->imaginaryPart + right.imaginaryPart;
  return tmp;
} // end function add

Complex Complex::operator-(const Complex &right) {
  Complex tmp;
  tmp.realPart = this->realPart - right.realPart;
  tmp.imaginaryPart = this->imaginaryPart - right.imaginaryPart;
  return tmp;
} // end function subtract
Complex Complex::operator*(const Complex &right) {
  Complex tmp(this->realPart * right.realPart -
                  this->imaginaryPart * right.imaginaryPart,
              this->realPart * right.imaginaryPart +
                  this->imaginaryPart * right.realPart);
  return tmp;
};

void Complex::printComplex() {
  cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber(double rp, double ip) {
  realPart = rp;
  imaginaryPart = ip;
} // end function setComplexNumber
ostream &operator<<(ostream &os, Complex &right) {
  right.printComplex();
  return os;
}
ostream &operator>>(ostream &os, Complex &right) {
  cin >> right.realPart >> right.imaginaryPart;
  return os;
};

Complex &Complex::operator=(const Complex &right) {
  realPart = right.realPart;
  imaginaryPart = right.imaginaryPart;
  return *this;
}
bool Complex::operator==(const Complex &right) {
  if (realPart == right.realPart && imaginaryPart == right.imaginaryPart) {
    return true;
  } else {
    return false;
  }
}
bool Complex::operator!=(const Complex &right) { return !operator==(right); }
