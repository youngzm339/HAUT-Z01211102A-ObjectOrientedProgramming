// Time.h
// Copyright Brian Yang 2023-01-01
#include <iostream>
using namespace std;
#ifndef TIME_H
#define TIME_H
// Declare Class Time
class Time {
public:
  Time(int day, int hour, int min);
  void tick();
  void setDay(int day);
  void setHour(int hour);
  void setMin(int min);
  int getDay();
  int getHour();
  int getMin();

private:
  int day;
  int hour;
  int min;
};
#endif
