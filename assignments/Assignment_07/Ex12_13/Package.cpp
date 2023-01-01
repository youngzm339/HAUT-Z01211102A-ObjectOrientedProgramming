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
  if (Weight < 0) {
    this->Weight = 1.0;
  } else {
    this->Weight = Weight;
  }
  if (Price < 0) {
    this->Price = 1.0;
  } else {
    this->Price = Price;
  }
};
double Package::calculateCost() { return Weight * Price; }
