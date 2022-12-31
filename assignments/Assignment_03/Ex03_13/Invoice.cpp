// Invoice.cpp
// Copyright Brian Yang 2022-12-31
#pragma GCC optimize("O2")
#include "Invoice.h"
#include <iostream>
using namespace std;
// Define
Invoice::Invoice(string id, string description, int sellNum, int sellPrice) {
  this->id = id;
  this->description = description;
  if (sellNum < 0) {
    this->sellNum = 0;
  } else {
    this->sellNum = sellNum;
  }
  if (sellPrice < 0) {
    this->sellPrice = 0;
  } else {
    this->sellPrice = sellPrice;
  }
}
string Invoice::getId() { return id; };
string Invoice::getDescription() { return description; };
int Invoice::getSellNum() { return sellNum; };
int Invoice::getSellPrice() { return sellPrice; };
int Invoice::getInvoiceAmount() { return sellNum * sellPrice; };
