// Ex03_15.cpp
// Copyright Brian Yang 2022-12-31
#pragma GCC optimize("O2")
#include "Date.h"
#include <iostream>
using namespace std;

int main() {
  // create object
  Date date(2022, 12, 31);
  // Output
  cout << date.getYear() << endl;
  cout << date.getMonth() << endl;
  cout << date.getDay() << endl;
  cout << date.getDate() << endl;
  return 0;
}