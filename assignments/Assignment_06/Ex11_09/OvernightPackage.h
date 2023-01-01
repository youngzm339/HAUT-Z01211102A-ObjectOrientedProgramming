// OvernightPackage.h
// Copyright Brian Yang 2023/01/02
#ifndef OPACK
#define OPACK
#include "Package.h"
// Declare OvernightPackage
class OvernightPackage : Package {
public:
  OvernightPackage(string Sender, string Receiver, string Address, string City,
                   string State, string Postcode, double Weight, double Price,
                   double ExtraPrice);
  double calculateCost();

protected:
  double ExtraPrice;
};
#endif