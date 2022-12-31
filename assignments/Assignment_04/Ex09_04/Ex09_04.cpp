// Ex09_04.cpp
// Copyright Brian Yang 2022-12-31
#include "Time.h"
#include <bits/types/time_t.h>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
  // Return time and format time value
  time_t NowTime;
  struct tm *NowTimeInfo;
  time(&NowTime);
  NowTimeInfo = localtime(&NowTime);
  Time NowTimeClass(NowTimeInfo->tm_year, NowTimeInfo->tm_mon,
                    NowTimeInfo->tm_mday, NowTimeInfo->tm_hour,
                    NowTimeInfo->tm_min, NowTimeInfo->tm_sec);
  // Output
  cout << "Hour: " << NowTimeClass.getHour() << endl;
  cout << "Min: " << NowTimeClass.getMin() << endl;
  cout << "Sec: " << NowTimeClass.getSec() << endl;

  return 0;
}