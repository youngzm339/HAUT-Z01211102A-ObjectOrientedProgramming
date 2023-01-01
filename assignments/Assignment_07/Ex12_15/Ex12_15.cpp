// Ex12_15.cpp
// Copyright Brian Yang 2023/01/02
#include "Employee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"
#include <vector>
// Test Program

int main() {
  vector<Employee *> Em(2);
  Em[0] = new HourlyWorker(1, 25.0, 10.1);
  Em[1] = new PieceWorker(2, 10.0, 50);
  for (int i = 0; i < Em.size(); i++) {
    cout << "Employee" << i + 1 << "Get Money: " << Em[i]->earning() << endl;
  }
  return 0;
}