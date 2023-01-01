// Ex18_04.cpp
// Copyright Brian Yang 2023-01-02
#include "Array.h"
#include <iostream>
// Test Program
int main() {
  // Files in&out
  freopen("sample.in", "r", stdin);
  freopen("sample.out", "w", stdout);
  // Array
  Array<int, 5> a;
  // Test begins
  a.fill(1);
  cout << "Test for loop to cout" << endl;
  for (int i = 0; i < a.size(); i++) {
    cout << a.at(i) << " ";
  }
  cout << endl;
  cout << "Test for empty" << endl;
  cout << a.empty() << endl;
  cout << "Test for front&back" << endl;
  cout << a.front() << " " << a.back();
  return 0;
}