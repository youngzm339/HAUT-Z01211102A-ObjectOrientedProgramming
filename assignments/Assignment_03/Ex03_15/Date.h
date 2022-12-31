// Date.h
// Copyright Brian Yang 2022-12-31
#include <string>
using namespace std;

#ifndef DATE_H
#define DATE_H
// Declare
class Date {
public:
  Date(int year, int month, int day);
  int getYear();
  int getMonth();
  int getDay();
  string getDate();

private:
  int year;
  int month;
  int day;
};
#endif