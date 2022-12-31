// Ex09_13.cpp
// Copyright Brian Yang 2023-01-01
#include "Time.h"
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
  cout << "SecSinceNight: " << NowTimeClass.getSecSinceNight() << endl;

  return 0;
}