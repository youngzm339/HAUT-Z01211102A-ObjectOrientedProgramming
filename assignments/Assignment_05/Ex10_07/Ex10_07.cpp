// Ex10_07.cpp
// Copyright Brian Yang 2023-01-02
#include "DoubleSubscriptedArray.h"
#include <cstdio>
using namespace std;
int main() {
  freopen("sample.in", "r", stdin);
  freopen("sample.out", "w", stdout);
  // Define DSAList1
  DoubleSubscriptedArray DSAList1(3, 3);
  cin >> DSAList1;
  cout << DSAList1;
  // Define DSAList2
  DoubleSubscriptedArray DSAList2(3, 3);
  cin >> DSAList2;
  cout << DSAList2;
  // Test for ==
  cout << "Test for ==" << endl;
  if (!(DSAList1 == DSAList2)) {
    cout << "Test Pass" << endl;
  }
  cout << "Test for !=" << endl;
  if (DSAList1 != DSAList2) {
    cout << "Test Pass" << endl;
  }
  return 0;
}