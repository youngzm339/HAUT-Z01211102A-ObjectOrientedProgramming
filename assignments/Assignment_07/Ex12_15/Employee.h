// Employee.h
// Copyright Brian Yang 2023/01/02
#ifndef EM
#define EM
#include <iostream>
using namespace std;
// Declare Employee Class
class Employee {
public:
  Employee(int ID);
  virtual double earning() { return 0.0; };
  int getID();

private:
  int ID;
};
#endif