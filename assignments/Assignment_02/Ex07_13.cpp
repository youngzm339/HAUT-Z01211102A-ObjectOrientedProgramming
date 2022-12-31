// Ex07_13
// Copyright Brian Yang 2022-12-31
#include <cstdio>
#pragma GCC optimize("O2")
#include <array>
#include <iostream>
using namespace std;
const int MAXN = 20;
bool isVaild(int, const array<int, MAXN> &);
int main() {
  // Create array
  array<int, MAXN> a;
  // Set a boundary
  int VaildNum = 0;
  for (int i = 0; i < a.size(); i++) {
    int tmp;
    cin >> tmp;
    if (isVaild(tmp, a)) {
      a[VaildNum] = tmp;
      VaildNum++;
    }
  }
  for (int i = 0; i < VaildNum; i++) {
    cout << a.at(i) << endl;
  }
  return 0;
}
// Validation
bool isVaild(int InNum, const array<int, MAXN> &InArray) {
  for (int i = 0; i < InArray.size(); i++) {
    if (InNum == InArray.at(i)) {
      return false;
    }
  }
  return true;
}