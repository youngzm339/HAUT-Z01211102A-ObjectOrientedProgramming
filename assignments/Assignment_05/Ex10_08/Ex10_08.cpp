// Ex10_08.cpp
// Copyright: Brian Yang 2023/01/01
#include "Complex.h"
using namespace std;
int main() {
  // Test for constructor
  Complex ComplexClass1(1.0, 1.0);
  cout << "ComplexClass1: " << endl;
  cout << ComplexClass1 << endl;
  // Test for copy constuctor
  Complex ComplexClass2 = ComplexClass1;
  ComplexClass2 = ComplexClass1 + ComplexClass2;
  // Test for ==
  cout << "Test for ==" << endl;
  cout << (ComplexClass1 == ComplexClass2) << endl;
  // Test for *
  cout << "Test for *" << endl;
  Complex ComplexClass3 = ComplexClass1 * ComplexClass2;
  cout << ComplexClass3 << endl;
}