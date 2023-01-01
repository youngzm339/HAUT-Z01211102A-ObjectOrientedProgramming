// Ex11_09.h
// Copyright Brian Yang 2023-01-02
#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
// Test Program
int main() {
  // Package Test
  Package P("Biran", "Bi", "THU", "Beijing", "Beijing", "101000", 2.3, 6.0);
  cout << "Package Cost: " << endl;
  cout << P.calculateCost() << endl;

  // OvernightPackage Test
  OvernightPackage OP("Biran", "Bi", "THU", "Beijing", "Beijing", "101000", 2.3,
                      6.0, 6.6);
  cout << "OvernightPackage Cost: " << endl;
  cout << OP.calculateCost() << endl;

  // TwoDayPackage Test
  TwoDayPackage TDP("Biran", "Bi", "THU", "Beijing", "Beijing", "101000", 2.3,
                    6.0, 3.3);
  cout << "TwoDayPackage Cost: " << endl;
  cout << TDP.calculateCost() << endl;
}