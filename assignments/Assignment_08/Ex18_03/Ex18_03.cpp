// Ex18_03.cpp
// Copyright Brian Yang 2023-01-02
#pragma GCC optimize("O2")
#include <iostream>
using namespace std;
// Define template for isEqualTo
template <typename T> bool isEqualTo(T &a, T &b) {
  if (a == b) {
    return true;
  } else {
    return false;
  }
}
// Test Program
int main() {
  int a = 1, b = 2;
  if (isEqualTo(a, b)) {
    cout << "EqualTo" << endl;
  } else {
    cout << "NotEqualTo" << endl;
  }
  double c = 2.0, d = 2.0;
  if (isEqualTo(c, d)) {
    cout << "EqualTo" << endl;
  } else {
    cout << "NotEqualTo" << endl;
  }
  return 0;
}