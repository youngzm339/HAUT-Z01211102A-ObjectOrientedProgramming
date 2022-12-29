// Lab 1: StringCat.cpp
// Copyright: Brian Yang 2022-12-29
// Demonstrating overloaded + operator that does not modify operands
#include <iostream>
using namespace std;

#include "String.h"

int main() {
  String string1, string2("The date is");
  String string3(" August 1, 1993");

  // test overloaded operators
  cout << "string1 = string2 + string3\n";
  /* Write a statement to concatenate string2 and string3,
     and assign the result to string1 */
  string1 = string2 + string3;
  cout << "\"" << string1 << "\" = \"" << string2 << "\" + \"" << string3
       << "\"" << endl;
} // end main

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
