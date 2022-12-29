// Lab 2: GradeBookTest.cpp
// Copyright: Brian Yang 2022/12/29
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main() {
  // create a GradeBook object; pass a course name and instructor name
  GradeBook gradeBook("CS101 Introduction to C++ Programming", "Ma Ding");

  // display welcome message and instructor's name
  gradeBook.displayMessage();

  /* write code to change instructor's name and output changes */
  gradeBook.changeMessage();
} // end main
