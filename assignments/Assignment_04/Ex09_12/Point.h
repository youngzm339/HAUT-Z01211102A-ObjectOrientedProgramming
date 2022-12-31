// Point.h
// Copyright Brian Yang 2023-01-01
#ifndef POINT
#define POINT
// Declare point
class Point {
public:
  Point(double x = 0.0, double y = 0.0);
  void setPoint(double x, double y);
  double getPointX();
  double getPointY();

private:
  double x;
  double y;
};
#endif