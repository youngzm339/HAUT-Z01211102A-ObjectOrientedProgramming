// Time.cpp
// Copyright Brian Yang 2023-01-01
#include "Time.h"
// Define Class Time
Time::Time(int day, int hour, int min) {
  setDay(day);
  setHour(hour);
  setMin(min);
}
void Time::setMin(int min) {
  if (min >= 60) {
    this->min = min % 60;
    this->hour += min / 60;
  } else {
    this->min = min;
  }
  setHour(this->hour);
}
void Time::setHour(int hour) {
  if (hour >= 24) {
    this->hour = hour % 24;
    this->day += hour / 24;
  } else {
    this->hour = hour;
  }
}
void Time::setDay(int day) { this->day = day; }
// tick
void Time::tick() { setMin(this->min + 1); }
int Time::getDay() { return day; };
int Time::getHour() { return hour; };
int Time::getMin() { return min; };
