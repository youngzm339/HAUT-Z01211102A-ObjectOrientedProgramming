// DSA.h
// Copyright Brian Yang 2023-01-01
#ifndef DSA
#define DSA
#include <array>
#include <iostream>
using namespace std;
const int MAXN = 100;
// Define Class DSA
class DoubleSubscriptedArray {
public:
  DoubleSubscriptedArray(int r, int c);
  DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
  int &operator()(int rows, int columns);
  const int &operator()(int rows, int columns, bool constMethod);
  bool operator==(const DoubleSubscriptedArray &);
  bool operator!=(const DoubleSubscriptedArray &);
  friend ostream &operator<<(ostream &os, DoubleSubscriptedArray &right);
  friend istream &operator>>(istream &os, DoubleSubscriptedArray &right);

private:
  int rows;
  int columns;
  array<array<int, MAXN>, MAXN> arrayList;
};
#endif