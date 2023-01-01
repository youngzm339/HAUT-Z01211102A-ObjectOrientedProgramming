// Package.h
// Copyright Brian Yang 2023/01/02
#ifndef PACK
#define PACK
#include <iostream>
#include <string>
using namespace std;
// Define Package
class Package {
public:
  Package(string Sender, string Receiver, string Address, string City,
          string State, string Postcode, double Weight, double Price);
  double calculateCost();

protected:
  string Sender;
  string Receiver;
  string Address;
  string City;
  string State;
  string Postcode;
  double Weight;
  double Price;
};
#endif