// TwoDayPackage.h
// Copyright Brian Yang 2023/01/02
#ifndef TDPACK
#define TDPACK
#include "Package.h"
// Declare TwoDayPackage
class TwoDayPackage : public Package {
public:
  TwoDayPackage(string Sender, string Receiver, string Address, string City,
                string State, string Postcode, double Weight, double Price,
                double ExtraPrice);
  virtual double calculateCost();

protected:
  double ExtraPrice;
};
#endif