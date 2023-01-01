// DSA.cpp
// Copyright Brian Yang 2023-01-01
#include "DoubleSubscriptedArray.h"
using namespace std;
// Declare DSA
DoubleSubscriptedArray::DoubleSubscriptedArray(int r, int c) {
  rows = r;
  columns = c;
}
DoubleSubscriptedArray &
DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right) {
  this->rows = right.rows;
  this->columns = right.rows;
  for (int i = 0; i < right.rows; i++) {
    for (int j = 0; j < right.columns; j++) {
      arrayList.at(i).at(j) = right.arrayList.at(i).at(j);
    }
  }
  return *this;
};
int &DoubleSubscriptedArray::operator()(int rows, int columns) {
  if (rows <= this->rows && columns <= this->columns) {
    return arrayList.at(rows).at(columns);
  } else {
    cerr << "Something wrong with the ()";
    int *it = new int;
    *it = -1;
    return *it;
  }
};
const int &DoubleSubscriptedArray::operator()(int rows, int columns,
                                              bool constMethod) {
  if (rows <= this->rows && columns <= this->columns) {
    return arrayList.at(rows).at(columns);
  } else {
    cerr << "Something wrong with the ()";
    int *it = new int;
    *it = -1;
    return *it;
  }
};
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) {
  if (rows == right.rows && columns == right.columns) {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; i < columns; j++) {
        if (this->arrayList.at(rows).at(columns) !=
            right.arrayList.at(rows).at(columns)) {
          return false;
        }
      }
    }
    return true;
  } else {
    return false;
  }
};
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &right) {
  return !operator==(right);
};
ostream &operator<<(ostream &os, DoubleSubscriptedArray &right) {
  cout << "Print with rows and columns: " << endl;
  for (int i = 0; i < right.rows; i++) {
    for (int j = 0; j < right.columns; j++) {
      cout << right(i, j) << " ";
    }
  }
  return os;
};
istream &operator>>(istream &os, DoubleSubscriptedArray &right) {
  for (int i = 0; i < right.rows; i++) {
    for (int j = 0; j < right.columns; j++) {
      cin >> right.arrayList.at(i).at(j);
    }
  }
  return os;
};