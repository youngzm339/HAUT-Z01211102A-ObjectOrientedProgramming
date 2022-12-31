// Date.cpp
// Copyright Brian Yang 2022-12-31
#pragma GCC optimize("O2")
#include "Date.h"
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
// Define
Date::Date(int year, int month, int day) {
  this->year = year;
  if (month < 1 || month > 12) {
    this->month = 1;
  } else {
    this->month = month;
  }
  this->day = day;
}
int Date::getYear() { return year; }
int Date::getMonth() { return month; }
int Date::getDay() { return day; };
string Date::getDate() {
  char *tmp = new char[50];
  sprintf(tmp, "%d-%d-%d", year, month, day);
  return tmp;
}
