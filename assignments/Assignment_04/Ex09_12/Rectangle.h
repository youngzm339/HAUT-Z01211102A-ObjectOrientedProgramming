// Rectangle.h
// Copyright Brian Yang 2023-01-01
#include "Point.h"
#include <iostream>
using namespace std;
#ifndef RECTANGLE_H
#define RECTANGLE_H
// Declare Class Rectangle
class Rectangle {
public:
  Rectangle(Point &a, Point &b, Point &c, Point &d);
  void setRectangle(Point &a, Point &b, Point &c, Point &d);
  double getPerimeter();
  double getArea();
  double getLength();
  double getWitdth();
  bool square();

private:
  Point a, b, c, d;
  double length;
  double width;
};
#endif
