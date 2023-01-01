// Package.cpp
// Copyright Brian Yang 2023/01/02
#include "OvernightPackage.h"
#include "Package.h"
#include <string>
// Define OvernightPackage
OvernightPackage::OvernightPackage(string Sender, string Receiver,
                                   string Address, string City, string State,
                                   string Postcode, double Weight, double Price,
                                   double ExtraPrice)
    : Package(Sender, Receiver, Address, City, State, Postcode, Weight, Price) {

  this->ExtraPrice = ExtraPrice;
};
double OvernightPackage::calculateCost() { return Weight * Price + ExtraPrice; }