// Ex09_07.cpp
// Copyright Brian Yang 2023-01-01
#include "Time.h"
// Test Program
int main() {
  const int MAXN = 10;
  Time TimeClass(20, 23, 55);
  for (int i = 0; i < MAXN; i++) {
    cout << "Day: " << TimeClass.getDay() << " Hour: " << TimeClass.getHour()
         << " Min: " << TimeClass.getMin() << endl;
    TimeClass.tick();
  }
}