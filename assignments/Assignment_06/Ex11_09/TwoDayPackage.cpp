// Package.cpp
// Copyright Brian Yang 2023/01/02
#include "TwoDayPackage.h"
#include "Package.h"
#include <string>
// Define TwoDayPackage
TwoDayPackage::TwoDayPackage(string Sender, string Receiver, string Address,
                             string City, string State, string Postcode,
                             double Weight, double Price, double ExtraPrice)
    : Package(Sender, Receiver, Address, City, State, Postcode, Weight, Price) {

  this->ExtraPrice = ExtraPrice;
};
double TwoDayPackage::calculateCost() { return Weight * Price + ExtraPrice; }