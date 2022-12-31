// Ex03_13.cpp
// Copyright Brian Yang 2022-12-31
#pragma GCC optimize("O2")
#include "Invoice.h"
#include <iostream>
using namespace std;

int main() {
  // create object
  Invoice invoice("20021231", "NoDescription", 12, 12);
  // Output
  cout << invoice.getId() << endl;
  cout << invoice.getDescription() << endl;
  cout << invoice.getSellNum() << endl;
  cout << invoice.getSellPrice() << endl;
  cout << invoice.getInvoiceAmount() << endl;
  return 0;
}