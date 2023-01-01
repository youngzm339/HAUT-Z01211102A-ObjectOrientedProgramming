// Package.cpp
// Copyright Brian Yang 2023/01/02
#include "Package.h"
// Declare Package
Package::Package(string Sender, string Receiver, string Address, string City,
                 string State, string Postcode, double Weight, double Price) {
  this->Sender = Sender;
  this->Receiver = Receiver;
  this->Address = Address;
  this->City = City;
  this->State = State;
  this->Postcode = Postcode;
  this->Weight = Weight;
  this->Price = Price;
};
double Package::calculateCost() { return Weight * Price; }
