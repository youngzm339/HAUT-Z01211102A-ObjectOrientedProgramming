// Ex11_09.h
// Copyright Brian Yang 2023-01-02
#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include <vector>
// Test Program
int main() {
  vector<Package *> P(3);
  P[0] = new Package("Biran", "Bi", "THU", "Beijing", "Beijing", "101000", 2.3,
                     6.0);
  P[1] = new OvernightPackage("Biran", "Bi", "THU", "Beijing", "Beijing",
                              "101000", 2.3, 6.0, 6.6);
  P[2] = new TwoDayPackage("Biran", "Bi", "THU", "Beijing", "Beijing", "101000",
                           2.3, 6.0, 3.3);
  for (int i = 0; i < P.size(); i++) {
    cout << "Cost: " << P[i]->calculateCost() << endl;
  }
  return 0;
}