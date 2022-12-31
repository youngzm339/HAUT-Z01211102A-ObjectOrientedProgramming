// Point.cpp
// Copyright Brian Yang 2023-01-01
#include "Point.h"
// Define Point
Point::Point(double x, double y) {
  this->x = x;
  this->y = y;
}
void Point::setPoint(double x, double y) {
  this->x = x;
  this->y = y;
}
double Point::getPointX() { return x; }
double Point::getPointY() { return y; }