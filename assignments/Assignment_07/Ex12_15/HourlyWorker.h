// HourlyWorker.h
// Copyright Brian Yang 2023/01/02
#ifndef HW
#define HW
#include "Employee.h"
// Declare HourlyWorker Class
class HourlyWorker : public Employee {
public:
  HourlyWorker(int ID, double wage, double hours);
  double getWage();
  double getHours();
  void setWage(double wage);
  void setHours(double hours);
  virtual double earning() { return wage * hours; };

private:
  int ID;
  double wage;
  double hours;
};
#endif