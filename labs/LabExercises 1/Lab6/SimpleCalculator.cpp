// Lab Exercise 6: SimpleCalculator.cpp
// Copyright: Brian Yang 2022/12/29

#include "SimpleCalculator.h"

/* Write definition for add member function */
double SimpleCalculator::add(double a, double b) const {
  return a + b; // +
}

// function subtract definition
double SimpleCalculator::subtract(double a, double b) const {
  return a - b;
} // end function subtract

// function multiply definition
double SimpleCalculator::multiply(double a, double b) const {
  return a * b;
} // end function multiply

/* Write definition for divide member function */
double SimpleCalculator::divide(double a, double b) const {
  return a / b; // /
}
