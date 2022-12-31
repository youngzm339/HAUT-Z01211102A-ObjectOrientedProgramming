// Ex09_11.cpp
// Copyright Brian Yang 2023-01-01
#include "Rectangle.h"
// Test Program
int main() {
  Rectangle tangle(2.0, 3.0);
  cout << "Length: " << tangle.getLength() << " Width: " << tangle.getWitdth()
       << endl;
  cout << "Perimeter: " << tangle.getPerimeter()
       << " Area: " << tangle.getArea() << endl;
  tangle.setLength(3.0);
  tangle.setWidth(4.0);
  cout << "Length: " << tangle.getLength() << " Width: " << tangle.getWitdth()
       << endl;
  cout << "Perimeter: " << tangle.getPerimeter()
       << " Area: " << tangle.getArea() << endl;
}