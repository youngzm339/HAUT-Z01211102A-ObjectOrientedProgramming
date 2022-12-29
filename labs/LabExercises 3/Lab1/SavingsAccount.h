// Lab 1: SavingsAccount.h
// Copyright: Brian Yang 2022-12-29
// Definition of SavingsAccount class.
#ifndef SAVINGS_H
#define SAVINGS_H

/* Write a directive to include the Account header file */

/* Write a line to have class SavingsAccount inherit publicly from Account */
#include "Account.h"
class SavingsAccount : public Account {
public:
  // constructor initializes balance and interest rate
  /* Declare a two-parameter constructor for SavingsAccount */
  SavingsAccount(double, double);

  /* Declare member function calculateInterest */
  double calculateInterest();

private:
  /* Declare data member interestRate */
  double interestRate;
}; // end class SavingsAccount

#endif

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
