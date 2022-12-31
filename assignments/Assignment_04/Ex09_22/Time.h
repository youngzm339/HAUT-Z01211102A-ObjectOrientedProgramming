// Time.h
// Copyright Brian Yang 2023-01-01
#include <iostream>
using namespace std;
// Declare Class Time member data & functions
class Time {
public:
  Time(int year, int month, int day, int hour, int min, int sec);
  int getYear();
  int getMonth();
  int getDay();
  int getHour();
  int getMin();
  int getSec();
  int getSecSinceNight();

private:
  int year;
  int month;
  int day;
  int hour;
  int min;
  int sec;
};