// HourlyWorker.cpp
// Copyright Brian Yang 2023/01/02
#include "HourlyWorker.h"
#include "Employee.h"
// Define HourlyWorker Class
// Constructor
HourlyWorker::HourlyWorker(int ID, double wage, double hours) : Employee(ID) {
  this->wage = wage;
  this->hours = hours;
};
// Functions
double HourlyWorker::getWage() { return wage; };
double HourlyWorker::getHours() { return hours; };
void HourlyWorker::setWage(double wage) { this->wage = wage; };
void HourlyWorker::setHours(double hours) { this->hours = hours; };
// double HourlyWorker::earning() { return wage * hours; };