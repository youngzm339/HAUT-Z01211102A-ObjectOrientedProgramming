// Ex07_14
// Copyright Brian Yang 2022-12-31
#pragma GCC optimize("O2")
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 20;
int main() {
  // Create vector
  vector<int> a;
  for (int i = 0; i < MAXN; i++) {
    int tmp;
    cin >> tmp;
    // Vaildation
    if (find(a.begin(), a.end(), tmp) == a.end()) {
      a.push_back(tmp);
    }
  }
  // Output
  for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
    cout << *it << endl;
  }
  return 0;
}