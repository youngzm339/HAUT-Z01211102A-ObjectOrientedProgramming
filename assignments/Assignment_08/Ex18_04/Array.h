// Array.h
// Copyright Brian Yang 2023-01-02
// template & Array define
#ifndef ARRAY_H
#define ARRAY_H
#include <cstddef>
#include <iostream>
using namespace std;
// template define
template <class Type, size_t N> class Array {
public:
  Type at(size_t op) { return arrayList[op]; };
  Type front() { return arrayList[0]; };
  Type back() { return arrayList[N - 1]; };
  void swap(Type &op1, Type &op2) {
    Type tmp = op2;
    op2 = op1;
    op1 = tmp;
  };
  void fill(Type op) {
    for (int i = 0; i < N; i++) {
      arrayList[i] = op;
    }
  };
  bool empty() {
    if (N == 0) {
      return true;
    } else {
      return false;
    }
  };
  size_t size() { return N; };
  void setArray() {
    for (size_t i = 0; i < this->N; i++) {
      cin >> this->arrayList[i];
    }
  }
//   friend istream &operator>>(istream &os, Array<Type, N> &op);
//   friend ostream &operator<<(ostream &os, Array<Type, N> &op);

private:
  Type arrayList[N];
};
// template <class Type, size_t N>
// istream &operator>>(istream &os, Array<Type, N> &op) {
//   for (size_t i = 0; i < op.N; i++) {
//     cin >> op.arrayList[i];
//   }
//   return os;
// }
// template <class Type, size_t N>
// ostream &operator<<(ostream &os, Array<Type, N> &op) {
//   for (size_t i = 0; i < op.N; i++) {
//     cout << op.arrayList[i] << " ";
//   }
//   return os;
// }

#endif
