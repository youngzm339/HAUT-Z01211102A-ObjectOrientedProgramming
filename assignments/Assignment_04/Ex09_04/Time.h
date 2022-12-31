// Time.h
// Copyright Brian Yang 2022-12-31
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
  void printDate();

private:
  int year;
  int month;
  int day;
  int hour;
  int min;
  int sec;
};