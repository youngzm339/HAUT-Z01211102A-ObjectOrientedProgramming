// Rectangle.h
// Copyright Brian Yang 2023-01-01
#include <iostream>
using namespace std;
#ifndef RECTANGLE_H
#define RECTANGLE_H
// Declare Class Rectangle
class Rectangle {
public:
  Rectangle(double length = 1.0, int width = 1.0);
  double getPerimeter();
  double getArea();
  void setLength(double length);
  void setWidth(double width);
  double getLength();
  double getWitdth();

private:
  double length;
  double width;
};
#endif
