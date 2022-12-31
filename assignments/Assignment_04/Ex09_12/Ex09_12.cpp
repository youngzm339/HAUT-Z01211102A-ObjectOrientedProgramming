// Ex09_12.cpp
// Copyright Brian Yang 2023-01-01
#include "Rectangle.h"
// Test Program
int main() {
  Point a(0, 0), b(1, 0), c(1, 1), d(0, 1);
  Rectangle tangle(a, b, c, d);
  cout << "Length: " << tangle.getLength() << " Width: " << tangle.getWitdth()
       << endl;
  cout << "Perimeter: " << tangle.getPerimeter()
       << " Area: " << tangle.getArea() << endl;
  if (tangle.square()) {
    cout << "Square!" << endl;
  } else {
    cout << "Square No!" << endl;
  }
  tangle.setRectangle(d, c, b, a);
  cout << "Length: " << tangle.getLength() << " Width: " << tangle.getWitdth()
       << endl;
  cout << "Perimeter: " << tangle.getPerimeter()
       << " Area: " << tangle.getArea() << endl;
}