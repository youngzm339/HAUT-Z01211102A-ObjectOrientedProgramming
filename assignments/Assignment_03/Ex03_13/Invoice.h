// Invoice.h
// Copyright Brian Yang 2022-12-31
#include <string>
using namespace std;
#ifndef INVOICE_H
#define INVOICE_H
// Declare
class Invoice {
public:
  Invoice(string id, string description, int sellNum, int sellPrice);
  string getId();
  string getDescription();
  int getSellNum();
  int getSellPrice();
  int getInvoiceAmount();

private:
  string id;
  string description;
  int sellNum;
  int sellPrice;
};
#endif