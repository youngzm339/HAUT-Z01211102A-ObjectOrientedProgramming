// Lab 1: String.cpp
// Copyright: Brian Yang 2022-12-29
// Member-function definitions for String.cpp
#include <iostream>
using namespace std;

#include "String.h" // String class definition
#include <cstring>  // strcpy and strcat prototypes

// conversion constructor: convert a char * to String
String::String(const char *const zPtr) {
  length = strlen(zPtr);       // compute length
  sPtr = new char[length + 1]; // allocate storage
  assert(sPtr != 0);           // terminate if memory not allocated
  strcpy(sPtr, zPtr);          // copy literal to object
} // end String conversion constructor

// copy constructor
String::String(const String &copy) {
  length = copy.length;        // copy length
  sPtr = new char[length + 1]; // allocate storage
  assert(sPtr != 0);           // ensure memory allocated
  strcpy(sPtr, copy.sPtr);     // copy string
} // end String copy constructor

// destructor
String::~String() {
  delete[] sPtr; // reclaim string
} // end destructor

// overloaded = operator; avoids self assignment
const String &String::operator=(const String &right) {
  if (&right != this) // avoid self assignment
  {
    delete[] sPtr;               // prevents memory leak
    length = right.length;       // new String length
    sPtr = new char[length + 1]; // allocate memory
    assert(sPtr != 0);           // ensure memory allocated
    strcpy(sPtr, right.sPtr);    // copy string
  } else
    cout << "Attempted assignment of a String to itself\n";

  return *this; // enables concatenated assignments
} // end function operator=

// concatenate right operand and this object and store in temp object
/* Write the header for the operator+ member function */
const String &String::operator+(const String &right) {
  /* Declare a temporary String variable named temp */
  String *temp = new String;
  /* Set temp�s length to be the sum of the two argument Strings� lengthes */
  temp->length = length + right.length;
  /* Allocate memory for temp.length + 1 chars and assign the pointer to
   * temp.sPtr */
  temp->sPtr = new char[temp->length + 1];
  assert(sPtr != 0); // terminate if memory not allocated
  /* Copy the left String argument�s contents into temp.sPtr */
  strcpy(temp->sPtr, sPtr);
  /* Write a call to strcat to concatenate the string in right
     onto the end of the string in temp */
  strcat(temp->sPtr, right.sPtr);
  /* Return the temporary String */
  return *temp;

} // end function operator+

// overloaded output operator
ostream &operator<<(ostream &output, const String &s) {
  output << s.sPtr;
  return output; // enables concatenation
} // end function operator<<

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
