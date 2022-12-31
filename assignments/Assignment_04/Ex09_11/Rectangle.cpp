// Rectangle.cpp
// Copyright Brian Yang 2023-01-01
#include "Rectangle.h"
// Define constructor
Rectangle::Rectangle(double length, int width) {
  this->length = length;
  this->width = width;
}
// Define functions
void Rectangle::setLength(double length) { this->length = length; }
void Rectangle::setWidth(double width) { this->width = width; }
double Rectangle::getLength() { return length; }
double Rectangle::getWitdth() { return width; }
double Rectangle::getPerimeter() { return (length + width) * 2; }
double Rectangle::getArea() { return length * width; }