// Lab 5: Date.cpp
// Copyright: Brian Yang 2022/12/29
// Member-function definitions for class Date.
#include <iostream>
using namespace std;

#include "Date.h" // include definition of class Date

Date::Date(int m, int d, int y) {
  setDate(m, d, y); // sets date
} // end Date constructor

void Date::setDate(int mo, int dy, int yr) {
  setMonth(mo); // invokes function setMonth
  setDay(dy);   // invokes function setDay
  setYear(yr);  // invokes function setYear
} // end function setDate

void Date::setDay(int d) {
  if (month == 2 && leapYear()) {
    if (d > 29) {
      setMonth(getMonth() + 1);
    }
    day = (d <= 29 && d >= 1) ? d : 1;
  } else {
    if (d > monthDays()) {
      setMonth(getMonth() + 1);
    }
    day = (d <= monthDays() && d >= 1) ? d : 1;
  }
} // end function setDay

void Date::setMonth(int m) {
  if (m > 12) {
    setYear(getYear() + 1);
  }
  month = m <= 12 && m >= 1 ? m : 1; // sets month
} // end function setMonth

void Date::setYear(int y) {
  year = y >= 1900 ? y : 1900; // sets year
} // end function setYear

int Date::getDay() { return day; } // end function getDay

int Date::getMonth() { return month; } // end function getMonth

int Date::getYear() { return year; } // end function getYear

void Date::print() {
  cout << month << '-' << day << '-' << year << '\n'; // outputs date
} // end function print

/* Write code to define member function nextDay;
   make sure to check if the new day is the start of
   a new month or a new year */

bool Date::leapYear() {
  if (getYear() % 400 == 0 || (getYear() % 4 == 0 && getYear() % 100 != 0))
    return true; // is a leap year
  else
    return false; // is not a leap year
} // end function leapYear

int Date::monthDays() {
  const int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  return getMonth() == 2 && leapYear() ? 29 : days[getMonth() - 1];
} // end function monthDays
void Date::nextDay() {
  setDay(getDay() + 1); // function
}