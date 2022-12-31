// Rectangle.cpp
// Copyright Brian Yang 2023-01-01
#include "Rectangle.h"
#include "Point.h"
// Define constructor
Rectangle::Rectangle(Point &a, Point &b, Point &c, Point &d) {
  if (a.getPointX() <= 20 && a.getPointY() <= 20) {
    this->a = a;
  }
  if (b.getPointX() <= 20 && b.getPointY() <= 20) {
    this->b = b;
  }
  if (c.getPointX() <= 20 && c.getPointY() <= 20) {
    this->c = c;
  }
  if (d.getPointX() <= 20 && d.getPointY() <= 20) {
    this->d = d;
  }
}
// Define functions
void Rectangle::setRectangle(Point &a, Point &b, Point &c, Point &d) {
  if (a.getPointX() <= 20 && a.getPointY() <= 20) {
    this->a = a;
  }
  if (b.getPointX() <= 20 && b.getPointY() <= 20) {
    this->b = b;
  }
  if (c.getPointX() <= 20 && c.getPointY() <= 20) {
    this->c = c;
  }
  if (d.getPointX() <= 20 && d.getPointY() <= 20) {
    this->d = d;
  }
}
double Rectangle::getLength() {
  double len1 =
      (a.getPointX() - b.getPointX()) * (a.getPointX() - b.getPointX()) +
      (a.getPointY() - b.getPointY()) * (a.getPointY() - b.getPointY());
  double len2 =
      (a.getPointX() - d.getPointX()) * (a.getPointX() - d.getPointX()) +
      (a.getPointY() - d.getPointY()) * (a.getPointY() - d.getPointY());
  return len1 > len2 ? len1 : len2;
}
double Rectangle::getWitdth() {
  double len1 =
      (a.getPointX() - b.getPointX()) * (a.getPointX() - b.getPointX()) +
      (a.getPointY() - b.getPointY()) * (a.getPointY() - b.getPointY());
  double len2 =
      (a.getPointX() - d.getPointX()) * (a.getPointX() - d.getPointX()) +
      (a.getPointY() - d.getPointY()) * (a.getPointY() - d.getPointY());
  return len1 > len2 ? len2 : len1;
}
double Rectangle::getPerimeter() { return (getLength() + getWitdth()) * 2; }
double Rectangle::getArea() { return getLength() * getWitdth(); }
bool Rectangle::square() {
  double len1 =
      (a.getPointX() - b.getPointX()) * (a.getPointX() - b.getPointX()) +
      (a.getPointY() - b.getPointY()) * (a.getPointY() - b.getPointY());
  double len2 =
      (c.getPointX() - d.getPointX()) * (c.getPointX() - d.getPointX()) +
      (c.getPointY() - d.getPointY()) * (c.getPointY() - d.getPointY());
  if (len1 == len2) {
    return true;
  } else {
    return false;
  }
}