// Ex06_50.cpp
// Copyright Brian Yang 2022-12-30
#pragma GCC optimize("O2")
#include <iostream>
using namespace std;
// tripleByValue style
template <typename T> T tripleByValue(T op) {
  T tmp = op * 3;
  return tmp;
}
// tripleByReference style
template <typename T> void tripleByReference(T &op) { op *= 3; }
// main
int main() {
  int count = 1;
  cout << tripleByValue(count) << endl;
  tripleByReference(count);
  cout << count << endl;
  return 0;
}