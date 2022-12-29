// Lab 3: RationalNumber.cpp
// Copyright: Brian Yang 2022-12-29
// RationalNumber member-function definitions.
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <tuple>
using namespace std;

#include "RationalNumber.h"

// RationalNumber constructor sets n and d and calls reduction
/* Implement the RationalNumber constructor. Validate d first to ensure that
   it is a positive number and set it to 1 if not. Call the reduction utility
   function at the end */
RationalNumber::RationalNumber(int Numerator, int Denominator) {
  numerator = Numerator;
  denominator = Denominator;
  this->reduction();
}

// overloaded + operator
/* Write definition for overloaded operator + */
RationalNumber RationalNumber::operator+(const RationalNumber &op2) const {
  RationalNumber temp;
  if (this->denominator == op2.denominator) {
    temp.numerator = numerator + op2.numerator;
    temp.denominator = denominator;
  } else {
    temp.numerator = numerator * op2.denominator + denominator * op2.numerator;
    temp.denominator = denominator * op2.denominator;
  }
  temp.reduction();
  return temp;
}

// overloaded - operator
/* Write definition for overloaded operator - */
RationalNumber RationalNumber::operator-(const RationalNumber &op2) const {
  RationalNumber temp;
  if (this->denominator == op2.denominator) {
    temp.numerator = numerator - op2.numerator;
    temp.denominator = denominator;
  } else {
    temp.numerator = numerator * op2.denominator - denominator * op2.numerator;
    temp.denominator = denominator * op2.denominator;
  }
  temp.reduction();
  return temp;
}
// overloaded * operator
/* Write definition for overloaded operator * */
RationalNumber RationalNumber::operator*(const RationalNumber &op2) const {
  RationalNumber temp;
  temp.denominator = denominator * op2.denominator;
  temp.numerator = numerator * op2.numerator;
  temp.reduction();
  return temp;
}

// overloaded / operator
/* Write definition for overloaded operator /. Check if the client is
   attempting to divide by zero and report an error message if so */
RationalNumber RationalNumber::operator/(const RationalNumber &op2) const {
  RationalNumber temp;
  temp.numerator = numerator * op2.denominator;
  temp.denominator = denominator * op2.numerator;
  temp.reduction();
  return temp;
}
// overloaded > operator
/* Write definition for operator > */
bool RationalNumber::operator>(const RationalNumber &op2) const {
  if (this->numerator / this->denominator > op2.numerator / op2.denominator) {
    return true;
  } else {
    return false;
  }
}

// overloaded < operator
/* Write definition for operator < */
bool RationalNumber::operator<(const RationalNumber &op2) const {
  return !RationalNumber::operator>=(op2);
}

// overloaded >= operator
/* Write definition for operator >= */
bool RationalNumber::operator>=(const RationalNumber &op2) const {
  if (RationalNumber::operator>(op2) || RationalNumber::operator==(op2)) {
    return true;
  } else {
    return false;
  }
}

// overloaded <= operator
/* Write definition for operator <= */
bool RationalNumber::operator<=(const RationalNumber &op2) const {
  return !RationalNumber::operator>(op2);
}

// overloaded == operator
/* Write definition for operator == */
bool RationalNumber::operator==(const RationalNumber &op2) const {
  if (this->denominator == op2.denominator &&
      this->numerator == op2.numerator) {
    return true;
  } else {
    return false;
  }
}
// overloaded != operator
/* Write definition for operator != */
bool RationalNumber::operator!=(const RationalNumber &op2) const {
  return !RationalNumber::operator==(op2);
}

// function printRational definition
void RationalNumber::printRational() const {
  if (numerator == 0) // print fraction as zero
    cout << numerator;
  else if (denominator == 1) // print fraction as integer
    cout << numerator;
  else
    cout << numerator << '/' << denominator;
} // end function printRational

// function reduction definition
void RationalNumber::reduction() {
  int largest, gcd = 1; // greatest common divisor;

  largest = (numerator > denominator) ? numerator : denominator;

  for (int loop = 2; loop <= largest; loop++)
    if (numerator % loop == 0 && denominator % loop == 0)
      gcd = loop;

  numerator /= gcd;
  denominator /= gcd;
} // end function reduction

// Brian Yang: Unverified code
ostream &operator<<(ostream &output, const RationalNumber &num) {
  num.printRational();
  return output;
}

/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
