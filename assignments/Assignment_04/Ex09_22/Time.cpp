// Time.cpp
// Copyright Brian Yang 2023-01-01
#include "Time.h"
// Define Class Time constructor
Time::Time(int year, int month, int day, int hour, int min, int sec) {
  this->year = year;
  this->month = month;
  this->day = day;
  this->hour = hour;
  this->min = min;
  this->sec = sec;
}
// Define Class Time Functions
int Time::getYear() { return year; };
int Time::getMonth() { return month; };
int Time::getDay() { return day; };
int Time::getHour() { return hour; };
int Time::getMin() { return min; };
int Time::getSec() { return sec; };
int Time::getSecSinceNight() { return hour * 3600 + min * 60 + sec; };